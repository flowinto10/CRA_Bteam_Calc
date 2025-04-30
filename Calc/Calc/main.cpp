#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드작성
	int Zegop(int a) { return a * a; }
};

// 테스트 케이스 작성
TEST(CalcTC, Zegop1) {
	Cal cal;
	int a = 4;
	int expect = a * a;

	EXPECT_EQ(cal.Zegop(a), expect);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
