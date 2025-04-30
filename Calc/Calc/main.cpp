#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드작성

	int getGop(int a, int b) {
		return a * b;
	}
	int getSum(int a, int b) { return a + b; }

};

// 테스트 케이스 작성
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
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

TEST(t1, addtest) {
	Cal cal = Cal();
	int actual = cal.getSum(1, 2);
	int expected = 3;
	EXPECT_EQ(actual, expected);
}



int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
