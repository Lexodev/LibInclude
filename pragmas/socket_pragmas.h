#ifdef __PPC__
#include <ppcpragmas/socket_pragmas.h>
#else
#pragma libcall SocketBase socket 1e 21003
#pragma libcall SocketBase bind 24 18003
#pragma libcall SocketBase listen 2a 1002
#pragma libcall SocketBase accept 30 98003
#pragma libcall SocketBase connect 36 18003
#pragma libcall SocketBase sendto 3c 39218006
#pragma libcall SocketBase send 42 218004
#pragma libcall SocketBase recvfrom 48 A9218006
#pragma libcall SocketBase recv 4e 218004
#pragma libcall SocketBase shutdown 54 1002
#pragma libcall SocketBase setsockopt 5a 3821005
#pragma libcall SocketBase getsockopt 60 9821005
#pragma libcall SocketBase getsockname 66 98003
#pragma libcall SocketBase getpeername 6c 98003
#pragma libcall SocketBase IoctlSocket 72 81003
#pragma libcall SocketBase CloseSocket 78 001
#pragma libcall SocketBase WaitSelect 7e 1BA98006
#pragma libcall SocketBase SetSocketSignals 84 21003
#pragma libcall SocketBase getdtablesize 8a 0
#pragma libcall SocketBase ObtainSocket 90 321004
#pragma libcall SocketBase ReleaseSocket 96 1002
#pragma libcall SocketBase ReleaseCopyOfSocket 9c 1002
#pragma libcall SocketBase Errno a2 0
#pragma libcall SocketBase SetErrnoPtr a8 0802
#pragma libcall SocketBase Inet_NtoA ae 001
#pragma libcall SocketBase inet_addr b4 801
#pragma libcall SocketBase Inet_LnaOf ba 001
#pragma libcall SocketBase Inet_NetOf c0 001
#pragma libcall SocketBase Inet_MakeAddr c6 1002
#pragma libcall SocketBase inet_network cc 801
#pragma libcall SocketBase gethostbyname d2 801
#pragma libcall SocketBase gethostbyaddr d8 10803
#pragma libcall SocketBase getnetbyname de 801
#pragma libcall SocketBase getnetbyaddr e4 1002
#pragma libcall SocketBase getservbyname ea 9802
#pragma libcall SocketBase getservbyport f0 8002
#pragma libcall SocketBase getprotobyname f6 801
#pragma libcall SocketBase getprotobynumber fc 001
#pragma libcall SocketBase vsyslog 102 98003
#pragma tagcall SocketBase syslog 102 98003
#pragma libcall SocketBase Dup2Socket 108 1002
#pragma libcall SocketBase sendmsg 10e 18003
#pragma libcall SocketBase recvmsg 114 18003
#pragma libcall SocketBase gethostname 11a 0802
#pragma libcall SocketBase gethostid 120 0
#pragma libcall SocketBase SocketBaseTagList 126 801
#pragma tagcall SocketBase SocketBaseTags 126 801
#pragma libcall SocketBase GetSocketEvents 12c 801
#endif
