//----------------------------------------------------------------------------------------------------------------------
// Project: Domocracy, dmcLib
// Author: Carmelo J. Fdez-Agüera Tortosa (a.k.a. Technik)
// Date: 2014-Dec-21
//----------------------------------------------------------------------------------------------------------------------
// Win32 specific code for sockets
#ifndef _DMC_NODE_COMM_SOCKET_SOCKETWIN32_H_
#define _DMC_NODE_COMM_SOCKET_SOCKETWIN32_H_

namespace dmc {

	class SocketWin32 {
	protected:
		SocketWin32();

	private:
		static bool sWinSocketReady;
	};

	typedef SocketWin32 SocketBase;

}	// namespace dmc

#endif // _DMC_NODE_COMM_SOCKET_SOCKETWIN32_H_