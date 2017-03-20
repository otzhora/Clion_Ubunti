// SERVER
#include <iostream>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <unistd.h>
#include <netdb.h>

using namespace std;

int main(int argc, char** argv) {

    int s = socket(AF_INET, SOCK_STREAM, 0);
    if(s ==  -1)
    {
        cout << "creating socket err" << endl;
        return 1;
    }


    struct sockaddr_in sa;

    sa.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    sa.sin_family = AF_INET;
    sa.sin_port = htons(8001);

    if(bind(s, (struct sockaddr*)&sa, sizeof(sa)) == -1)
    {
        cout << "bind err" << endl;
        return 1;
    }

    listen(s, SOMAXCONN);

    int s1;
    char buf[128];

    do
    {
        int a, b;
        s1 = accept(s, 0, 0);
        cout << "accepted " << endl;
        recv(s1, buf, 4, MSG_NOSIGNAL);
        a = atoi(buf);
        cout << buf << endl;
        recv(s1, buf, 4, MSG_NOSIGNAL);
        b = atoi(buf);
        cout << b << endl;
        int ans = a + b;
        string msg = to_string(ans);
        cout << send(s1, (char*)(msg.c_str()), 4, MSG_NOSIGNAL) << endl;
        cout << "sended" << ans <<  endl;
        close(s1);
    }while(s1 != -1);
    close(s);

    return 0;
}