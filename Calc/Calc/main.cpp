#include <iostream>
#include "gmock/gmock.h"

class Cal {
public:

	// 이곳에 코드작성
	int getGop(int a, int b) {
		return a * b;

	}
  
	int getDivide(int a, int b) {
		if (b == 0) {
			std::cout << "0쇰   듬\n";
			return -1;
		}
		return a / b;
  }

};

// ㅽ 耳댁 
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
