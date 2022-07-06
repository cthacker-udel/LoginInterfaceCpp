#include "User.hpp";
#include "Cache.hpp"

/**
 * @brief Login class, controls the current user instance logged in
 * 
 */
class Login {

    public:
        /**
         * @brief Construct a new Login object
         * 
         * @param user The user requesting to login
         */
        explicit Login(User user, Cache cache);

};
