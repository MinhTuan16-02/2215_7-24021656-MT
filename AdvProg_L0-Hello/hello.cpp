#include <iostream>
#include <string>

std::string hello() {
    return "Game Over!";
}

int main() {
    std::cout << hello() << std::endl;
    return 0;
}
#include <iostream>
#include "hello.h"

std::string printGameOver(){
	// TODO: Return the required string
	return "Hello World!";
}
