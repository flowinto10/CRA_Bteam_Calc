#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드작성
	int getDivide(int a, int b) {
		if (b == 0) {
			std::cout << "0으로 나눌 수 없습니다\n";
			return -1;
		}
		return a / b;
	}
};

// 테스트 케이스 작성
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, dividetest) {
	Cal cal = Cal();
	int actual = cal.getDivide(2, 1);
	int expected = 2;
	EXPECT_EQ(actual, expected);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
