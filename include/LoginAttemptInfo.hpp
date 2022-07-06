
/**
 * @brief 
 * 
 */
class LoginAttemptInfo {

    public:
        enum LoginTime { Milliseconds, Seconds, Minutes, Days, Weeks, Years };
        int attempts;
        int lockoutTime;
        LoginTime lockoutFormat;
        LoginAttemptInfo();

};