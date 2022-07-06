#include "../include/Register.hpp";
#include <utility>
#include <iostream>
#include <random>
#include <stdint.h>

std::string randomHash(int length) {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0, INTMAX_MAX);
    std::string hash;
    for (int i = 0; i < length; i++) {
        hash += std::to_string(dist(mt));
    }
    return hash;
}

Register::Register(Cache _cache) {
    this->cache = std::move(_cache);
};

void Register::addUser(std::string username, std::string password) {
    if (this->cache.doesExist(username)) {
        std::cout << "User already exists" << std::endl;
    } else {
        std::string salt = randomHash(30);
        User user(username, Password(password));
        this->cache.addUser(user);
    }
}
