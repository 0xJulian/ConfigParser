#include "ConfigWorker.h"
int main() {
	ConfigWorker *cfg = new ConfigWorker();
	cfg->ParseConfig("C:\\Users\\thanner\\source\\repos\\ConfigParser\\x64\\Debug\\Textfile.sus");
}