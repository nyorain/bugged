#include "bugged.hpp"
#include <stdexcept>

int returns0() { return 0; }
void throws() { throw std::logic_error("Go Away!"); }

// declare a test method
TEST(FirstTest) {
	EXPECT(returns0(), 0); // will succeed
	EXPECT(returns0(), 1); // will fail

	ERROR(returns0(), int); // will fail
	ERROR(throws(), std::logic_error); // will succeed
	ERROR(throws(), std::runtime_error); // will fail

	throws(); // will end the test and output the exception.
}

// empty tests or ones only with static_asserts or other checks are ok as well
TEST(EmptyTest) {}
