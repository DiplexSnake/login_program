#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "sha256.h"


//using namespace std;

//std::string user = "hunter";
std::string existing_users = "hunter";
std::string existing_user_pass = "1234";
std::string username;
std::string password;

std::vector<std::string> usernme = {"hunter", "izzy"};     //position based list
std::vector<std::string> passwrd = {"1234", "4321"};

std::map<std::string, std::string> login;

int totalusers = 2;



bool isValidCredentials(std::string user, std::string pass) {

    for (int i = 0; i < totalusers; i++){
        
        if (user == usernme[i]){
            if (login[user] == pass){
                std::cout << "You have logged in!\n";
                return true;
            }
            else 
                std::cout << "incorrect password\n";
                return false;
        }
      
    }      
    

    std::cout << "invalid login\n";
    return false;
    //Password and Username dont match
}
void printUserInfo(){

    for ( auto item : login )
        {
            //print out the name
            std::cout << item.first << " : " << item.second;   
            std::cout << std::endl;
    }
}
int main(int, char**)
{
login[usernme[0]] = passwrd[0];
login[usernme[1]] = passwrd[1];

printUserInfo();




std::cout << "input username\n";
std::cin >> username;
std::cout << "input password\n";
std::cin >> password;

 // create a new hashing object
SHA256 sha256;

  // hashing an std::string
std::cout << sha256("Hello World") << std::endl;
  // => a591a6d40bf420404a011733cfb7b190d62c65bf0bcda32b57b277d9ad9f146e

std::cout << isValidCredentials(username, password);

return 0;
}


