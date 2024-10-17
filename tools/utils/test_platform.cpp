#include "duckdb/common/platform.h"
#include <iostream>

int main(void) {
	std::cout << duckdb::DuckDBPlatform() << "\n";
	return 0;
}
