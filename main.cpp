#include <iostream>
#include <vector>
#include <string>

//using namespace std;

//std::string user = "hunter";
std::string existing_users = "hunter";
std::string existing_user_pass = "1234";
std::string username;
std::string password;

bool isValidCredentials(std::string user, std::string pass) {

    if (user != existing_users){
        std::cout << "incorrect username";
        return false;
    }

    if (pass != existing_user_pass){
        std::cout << "incorrect passwordhunhun\n";
        return false;
    }

    if (user == existing_users && pass == existing_user_pass){
        std::cout << "correct username and password\n";
        return true;
    }

    std::cout << "end of func";
    return false;
    //Password and Username Match!
}

int main()
{
    
std::cout << "input username\n";
std::cin >> username;
std::cout << "input password\n";
std::cin >> password;



std::cout << isValidCredentials(username, password);

return 0;
}


