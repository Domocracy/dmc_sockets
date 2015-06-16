//----------------------------------------------------------------------------------------------------------------------
// Project: Domocracy, dmcLib
// Author: Carmelo J. Fdez-Agüera Tortosa (a.k.a. Technik)
// Date: 2014-Dec-21
//----------------------------------------------------------------------------------------------------------------------
// Win32 specific code for sockets
#ifndef _DMC_NODE_COMM_SOCKET_SOCKETLINUX_H_
#define _DMC_NODE_COMM_SOCKET_SOCKETLINUX_H_

namespace dmc {

	class SocketLinux {
	protected:
		SocketLinux() = default;
	};

	typedef SocketLinux SocketBase;

}	// namespace dmc

#endif // _DMC_NODE_COMM_SOCKET_SOCKETLINUX_H_