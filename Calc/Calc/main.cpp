#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드작성
	int getSum(int a, int b) { return a + b; }
};

// 테스트 케이스 작성
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, addtest) {
	int actual = getSum(1, 2);
	int expected = 3;
	EXPECT_EQ(actual, expected);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
