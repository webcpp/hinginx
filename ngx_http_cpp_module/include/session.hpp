#ifndef SESSION_HPP
#define SESSION_HPP


#include <string>
#include <map>
#include <Poco/UniqueExpireLRUCache.h>
#include <Poco/ExpirationDecorator.h>
#include <Poco/DynamicAny.h>

#ifndef SESSION_ID_NAME
#define SESSION_ID_NAME "SESSION"
#endif



namespace hi {

    typedef Poco::ExpirationDecorator<std::map<std::string, Poco::DynamicAny>> session_map;
    typedef Poco::UniqueExpireLRUCache<std::string, session_map> session;

}


#endif /* SESSION_HPP */

