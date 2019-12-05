#include <iostream>

int main(){
	const std::string massiv[9] = {"test", "service2","dev", "service4","test5","test6","test7","service8","prod" };
	const std::string str = {"010010101"};
	std::string vivod[9];
	std::string i = str;
	int count = -1;
	for (int i = 0; i < str.size(); i++) {
		if (str[i]=='1') {
			count++;
			vivod[count] = massiv[i];
		}
	}
	for (int i = 0; i < 4; i++) {
		std::cout << vivod[i] << std::endl;
	}
}
