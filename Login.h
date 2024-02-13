#ifndef LOGIN_H
#define LOGIN_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Login
{
    private:
        int id;
        string number_account;
        string cpf;
        string full_name;
        string password;

    public:
        Login();
        Login(const Login& orig);
        Login(int id, string number_account, string full_name, string cpf, string password);
        
        void setId(int id);
        int getId() const;
        void setNumber_Account(string number_account);
        string getNumber_Account() const;
        void setCpf(string cpf);
        string getCpf() const;
        void setFull_Name(string full_name);
        string getFull_Name() const;
        void setPassword(string password);
        string getPassword() const;

        void fill_data();
        void print_data();
        void copy_data(const Login& other);
        void print_summarized();
        string printForFile() const;
};


#endif //LOGIN_H