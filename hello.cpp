#include <iostream>
#include <thread>

void hello(){
	std::cout<<"Hello Wordl!"<<std::endl;
}

int main(){
	std::thread t(hello)
	t.join()
}