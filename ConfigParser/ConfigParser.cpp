#include "ConfigWorker.h"
int main() {
	ConfigWorker* cfg = new ConfigWorker();
	std::string cfgPath = "C:\\Users\\thanner\\source\\repos\\ConfigParser\\x64\\Debug\\Textfile.sus";
	cfg->ParseConfig(cfgPath);
}