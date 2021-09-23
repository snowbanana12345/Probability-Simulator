#include <iostream>
#include <string>

void print_welcome_message();
void print_exit_message();
void print_invalid_command_message(std::string &s);
void do_get_command(std::string &s);
void do_echo();

int main()
{
	std::string EXIT = "exit";
	std::string ECHO = "echo";
	std::string command;
	print_welcome_message();
	while (true){
		do_get_command(command);
		if (command == EXIT) {
			print_exit_message();
			break;
		}
		else if (command == ECHO) {
			do_echo();
		}
		else {
			print_invalid_command_message(command);
		}
	}
}

void print_welcome_message() {
	std::cout << "Welcome to probability simulator :)" << std::endl;
	std::cout << "This is your cheat engine to ace probability questions on interviews." << std::endl;
}

void print_exit_message() {
	std::cout << "Thank you and have a nice day!" << std::endl;
}

void print_invalid_command_message(std::string& command) {
	std::cout << "Invalid command : " + command << std::endl;
}

void do_get_command(std::string& command) {
	std::getline(std::cin, command);
	std::cout << "Recieved : " + command << std::endl;
}

void do_echo(){
	std::string input;
	std::cout << "Please input the message you wish to echo" << std::endl;
	std::getline(std::cin, input);
	std::cout << input << std::endl;
}
