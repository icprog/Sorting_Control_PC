#pragma once

#include <string>

enum class Running { STOPPED, RUNNING };
enum class Mode { LIVE, RECORD, RECORD_ERRORS };
enum class View { RAW, FILTERED };
enum class Capture { ON, OFF };

static constexpr int DATA_PER_CHANNEL = 100;
static constexpr int N_CHANNELS{ 8 };
static constexpr int ANALYSIS_PACKETS{ 10 };

void Information();
void GetData();

class Application {
private:
	static void InitFromFile(const std::string& file_name);

public:
	static void Init();
	static void Run();
};