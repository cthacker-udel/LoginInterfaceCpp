#include <string>
#include "Cache.hpp"

/**
 * @brief The Register class, which allows a user to register
 * 
 */
class Register {

    Cache cache;

public:
    explicit Register(Cache _cache);
    /**
     * @brief Construct a new Register object
     * 
     * @param username The username the request is attempting to register with
     * @param password The password the request is attempting to register with
     */
    void addUser(std::string username, std::string password);

};