#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드작성

	int Zegop(int a) { return a * a; }
	int getGop(int a, int b) {
		return a * b;
	}
};

// 테스트 케이스 작성
TEST(CalcTC, Zegop1) {
	Cal cal;
	int a = 4;
	int expect = a * a;

	EXPECT_EQ(cal.Zegop(a), expect);
}

TEST(CalTest, getGopTest) {
	Cal cal;
	
	EXPECT_EQ( cal.getGop(1,1), 1);
	EXPECT_EQ(cal.getGop(1, -1), -1);
	EXPECT_EQ(cal.getGop(-1, -1), 1);
	EXPECT_EQ(cal.getGop(0, 0), 0);
	EXPECT_EQ(cal.getGop(0, 1), 0);
	EXPECT_EQ(cal.getGop(456, 123), 456*123);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
