#include "../include/Login.hpp"
#include <iostream>

Login::Login(User user, Cache cache) {

    LoginAttemptResult result = cache.processLoginAttempt(user.username, user.getPassword());

    if (result.canLogin) {
        cache.removeLoginAttempt(user.username, user.getPassword());
    }
    std::cout << "Invalid login attempt, try again" << std::endl;
};

