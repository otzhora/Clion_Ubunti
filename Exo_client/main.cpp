// CLIENT

#include <iostream>

#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <unistd.h>

using namespace std;

int main() {
    int s = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in sa;
    sa.sin_port = htons(12346);
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = htonl(INADDR_LOOPBACK);

    connect(s, (const sockaddr*)&sa, sizeof(sa));

    char buf[5];
    cin >> buf;

    send(s, buf, 5, MSG_NOSIGNAL);
    recv(s, buf, 5, MSG_NOSIGNAL);
    cout << buf << endl;
    shutdown(s, SHUT_RDWR);
    close(s);
    return 0;
}