#pragma once

#include <cstdint>
#include <intrin.h>
#include <chrono>
#include <string>
#include <iostream>
#include <vector>

namespace Help { 

#define TIME_IT(x) \
	{auto s1 = std::chrono::high_resolution_clock::now(); \
	x; \
	auto s2 = std::chrono::high_resolution_clock::now(); \
	auto str = std::to_string(std::chrono::duration_cast<std::chrono::microseconds>(s2 - s1).count()) + " us"; \
	std::cout << str << std::endl;}

#define TIME_IT_VERBOSE(x) \
	{auto s1 = std::chrono::high_resolution_clock::now(); \
	x; \
	auto s2 = std::chrono::high_resolution_clock::now(); \
	auto str = std::string(#x) + ": " + std::to_string(std::chrono::duration_cast<std::chrono::microseconds>(s2 - s1).count()) + " us"; \
	std::cout << str << std::endl;}


	inline uint64_t rdtsc();
	std::vector<std::string> TokenizeString(std::string str);
}