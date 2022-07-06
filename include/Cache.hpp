#include <map>
#include <string>
#include "User.hpp";
#include "LoginAttemptResult.hpp"

/**
 * Cache class, saves user information
 */
class Cache {

    friend class Register;

    private:
        std::map<User, LoginAttemptResult> attempts;

    public:
        Cache();
        LoginAttemptResult processLoginAttempt(std::string username, std::string password);
        void removeLoginAttempt(std::string username, std::string password);
        bool doesExist(std::string username);
        void addUser(User user);
};