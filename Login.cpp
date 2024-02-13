#include "Login.h"

using namespace std;

Login::Login()
{
    this->id = 0;
    this->number_account = " ";
    this->cpf = " ";
    this->full_name = " ";
    this->password = " ";
}

Login::Login(int id, string number_account, string full_name, string cpf, string password)
{
    this->id = id;
    this->number_account = number_account;
    this->full_name = full_name;
    this->cpf = cpf;
    this->password = password;
}

Login::Login(const Login& orig)
{
    id = orig.getId();
    number_account = orig.getNumber_Account();
    full_name = orig.getFull_Name();
    cpf = orig.getCpf();
    password = orig.getPassword();
}

void Login::setId(int id)
{
    this->id = id;
}

int Login::getId() const
{
    return id;
}

void Login::setNumber_Account(string number_account)
{
    this->number_account = number_account;
}

string Login::getNumber_Account() const
{
    return number_account;
}

void Login::setCpf(string cpf)
{
    this->cpf = cpf;
}

string Login::getCpf() const
{
    return cpf;
}

void Login::setFull_Name(string full_name)
{
    this->full_name = full_name;
}

string Login::getFull_Name() const
{
    return full_name;
}

void Login::setPassword(string password)
{
    this->password = password;
}

string Login::getPassword() const
{
    return password;
}

void Login::fill_data()
{
    cout << "--------------FILL DATA-------------\n";
    cout << "ENTER YOUR ID: ";
    cin >> this->id;
    cout << "ENTER YOUR NUMBER ACCOUNT: ";
    cin.ignore();
    getline(cin, this->number_account);
    cout << "ENTER YOUR FULL NAME: ";
    getline(cin, this->full_name);
    cout << "ENTER THE YOUR CPF: ";
    getline(cin, this->cpf);
    cout << "ENTER YOUR PASSWORD: ";
    getline(cin, this->password);
    cout << "------------------------------------\n"; 
}

void Login::print_data()
{
    cout << left << setw(20) << "id" << setw(20) << "number_account" << setw(20) << "cpf" << setw(20) << "full_name" << "\n";
    cout << left << setw(20) << id << setw(20) << number_account << setw(20) << cpf << setw(20) << full_name << "\n";    
}

void Login::print_summarized()
{
    cout << "(" << id << ", " << number_account << ", " << cpf << ", " << full_name << ")\n";
}

void Login::copy_data(const Login& other)
{
    id = other.getId();
    number_account = other.getNumber_Account();
    cpf = other.getCpf();
    full_name = other.getFull_Name();
    password = other.getPassword();
}

string Login::printForFile() const{
    string texto;
    texto = to_string(id) +" " +
            number_account +" " +
            (full_name) + " "+
            (cpf) + " " +
            (password);
    return texto;
}
