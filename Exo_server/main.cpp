// SERVER
#include <iostream>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <unistd.h>

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
    sa.sin_port = htons(12346);

    if(bind(s, (const struct sockaddr*)&sa, sizeof(sa)) == -1)
    {
        cout << "bind err" << endl;
        return 1;
    }

    listen(s, SOMAXCONN);

    int s1;
    char buf[5];
    while(s1 = accept(s, 0, 0))
    {
        recv(s1, buf, 5, MSG_NOSIGNAL);
        cout << buf << endl;
        send(s1, buf, 5, MSG_NOSIGNAL);
        close(s1);
    }


    return 0;
}