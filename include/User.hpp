#include "Password.hpp";
#include <string>

/**
 * @brief The User class, controls the username, password instance, and login attempts
 * 
 */
class User {

    /**
     * @brief Friends class Register so Register can utilize User class in it's functionality
     * 
     */
    friend class Register;

    /**
     * @brief Friends class Login so Login can utilize user fields in it's functionality
     * 
     */
    friend class Login;

    /**
     * @brief Cache class so user information can be cached
     * 
     */
    friend class Cache;

    private:
        /**
         * @brief The username of the user
         * 
         */
        std::string username;
        /**
         * @brief The password of the user
         * 
         */
        Password password;
        /**
         * @brief The failed login attempts of the user
         * 
         */
        int failedLoginAttempts;

    public:
        /**
         * @brief Construct a new User object
         * 
         * @param username The username logging in
         * @param pass The password logging in
         */
        User(std::string username, Password pass);

        std::string getPassword();

};