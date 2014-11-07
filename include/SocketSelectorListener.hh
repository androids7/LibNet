//
// SocketSelectorListener.hh for SocketSelectorListener in 
// 
// Made by Moghrabi Alexandre
// Login   <alexandre.moghrabi@epitech.eu>
// 
// Started on  Fri Oct 10 15:31:21 2014 Moghrabi Alexandre
// Last update Fri Oct 10 15:53:01 2014 Moghrabi Alexandre
//

#ifndef SOCKETSELECTORLISTENER_HH_
# define SOCKETSELECTORLISTENER_HH_

# include "TcpSocket.hh"

namespace Mog
{
class SocketSelectorListener
{
public:
  virtual ~SocketSelectorListener();

public:
  virtual void clientAccepted(TcpSocket& client);
  virtual void clientDatasReceived(TcpSocket& client);
  virtual void clientDisconnected(TcpSocket& client);
};
}

#endif /* !SOCKETSELECTORLISTENER_HH_ */
