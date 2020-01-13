#include <fstream>
#include <iostream>
#include <string>

int main() {
	// 파일 스트림과 읽어온 온도 값을 저장 할 문자열
	std::string in_line;
	std::ifstream in("/sys/devices/virtual/thermal/thermal_zone0/temp");
	float temparture = 0.0f;

	// 문자열을 읽어온다
	getline(in, in_line);
	
	in.close();
	temparture = atoi(in_line.c_str()) * 0.001f;

	std::cout << "CPU Temp: " << temparture << "℃" << std::endl;

	return 0;
}
