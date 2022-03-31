#include "ConfigWorker.h"
int main() {
	ConfigWorker* cfg = new ConfigWorker();
	std::string cfgPath = "\\Textfile.sus";
	cfg->ParseConfig(cfgPath);
}
