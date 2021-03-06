#include "../lib/logger.hpp"

#include <iostream>

#undef CHECK
#define CHECK(s) { bool res = false; try { res = (s); } catch (std::exception& e) { res = false; }; if (!res) { std::cerr << "Check FAILED in " __FILE__ " at line " << __LINE__ << "!" << std::endl; return 1; } }

int test();

int main(int argc, char** argv)
{
	gb::get_logger().set_log_level(gb::lg_verbose4);
	return test();
}
