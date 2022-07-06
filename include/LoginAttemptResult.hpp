
/**
 * @brief LoginAttemptResult class, houses the response from processLoginAttempt function
 */
class LoginAttemptResult {

    friend class Cache;

    public:
        /**
         * How long the account is locked for x minutes
         */
        int lockedMinutes;
        /**
         * How many attempts the user attempted
         */
        int invalidAttempts;
        /**
         * Indicates whether the user can login or not
         */
        bool canLogin;

};