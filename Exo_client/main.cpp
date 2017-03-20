// CLIENT

#include <iostream>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <unistd.h>

#include <string>

using namespace std;

int main() {
    int s = socket(AF_INET, SOCK_STREAM, 0);

    string port, ip_addr;
    cout << "input port" << endl;
   // cin >> port;
    struct sockaddr_in sa;
    sa.sin_port = htons(8001);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    cout << INADDR_LOOPBACK << endl;
    if (connect(s, (const sockaddr*)&sa, sizeof(sa)) == -1)
    {
        cout << "connect error" << endl;
        return 1;
    }
    cout << "connection success!" << endl;
    cout << "input two number to sum: ";

    char a[5], b[5]         ;

    cin >> a >> b;
    int bytes;

    bytes = send(s, a, 4, MSG_NOSIGNAL);
    cout << bytes;
    bytes = send(s, b, 4, MSG_NOSIGNAL);
    cout << bytes;
    cout << "sended" << endl;

    char ans[5];
    recv(s, ans, 4, MSG_NOSIGNAL);
    cout << "answer: " << atoi(ans) << endl;
    shutdown(s, SHUT_RDWR);
    close(s);
    return 0;
}