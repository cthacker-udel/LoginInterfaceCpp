#include <string>

/**
 * @brief Password class, houses salt and actual password
 * 
 */
class Password {

    friend class Login;

    private:
        /**
         * @brief The password salt
         * 
         */
        std::string salt;
        /**
         * @brief The password
         * 
         */
        std::string password;

    public:
        /**
         * @brief Construct a new Password object
         * 
         * @param password The password being instantiated into the class
         */
        Password(std::string password);

};