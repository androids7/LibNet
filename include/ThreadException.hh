//
// ThreadException.hh for Thread in /home/alexmog/projets/LibNet/include
// 
// Made by Moghrabi Alexandre
// Login   <alexandre.moghrabi@epitech.eu>
// 
// Started on  Tue Nov 11 17:48:39 2014 Moghrabi Alexandre
// Last update Wed Nov 12 14:09:05 2014 Moghrabi Alexandre
//

/*!
 * \file ThreadException.hh
 * \brief Exception des threads
 * \author AlexMog
 * \version 1.0
 */

#ifndef THREADEXCEPTION_HH_
# define THREADEXCEPTION_HH_

# include <iostream>
# include "LibNetworkException.hh"

namespace mognetwork
{
  /*!
   * \class ThreadException
   * \brief Exception des threads
   */
  class ThreadException : public LibNetworkException
  {
  public:
    /*!
     * \brief Constructeur de l'exception
     * \param msg Définit le message de l'exception
     * \param line Définit le numéro de la ligne de l'exception, généralement __LINE__
     * \param file définit le fichier de l'exception, généralement __FILE__
     */
    ThreadException(const char* msg, int line, const char *file) : LibNetworkException(msg, line, file) {}
  };
}; // namespace mognetwork 

#endif // !THREADEXCEPTION_HH_
