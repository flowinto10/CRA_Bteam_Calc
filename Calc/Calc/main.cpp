#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:

	// 이곳에 코드작성
	int Zegop(int a) { return a * a; }

	int getGop(int a, int b) {
		return a * b;
	}

	int getSum(int a, int b) { return a + b; }

	int getDivide(int a, int b) {
		if (b == 0) {
			std::cout << "0으로 나눌수 없어요\n";
			return -1;
		}
		return a / b;
	}

};


TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(CalcTC, Zegop1) {
	Cal cal;
	int a = 4;
	int expect = a * a;

	EXPECT_EQ(cal.Zegop(a), expect);

}



TEST(CalTest, getGopTest) {
	Cal cal;

	EXPECT_EQ(cal.getGop(1, 1), 1);
	EXPECT_EQ(cal.getGop(1, -1), -1);
	EXPECT_EQ(cal.getGop(-1, -1), 1);
	EXPECT_EQ(cal.getGop(0, 0), 0);
	EXPECT_EQ(cal.getGop(0, 1), 0);
	EXPECT_EQ(cal.getGop(456, 123), 456 * 123);
}

TEST(t1, dividetest) {
	Cal cal = Cal();
	int actual = cal.getDivide(2, 1);
	int expected = 2;
	EXPECT_EQ(actual, expected);

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
