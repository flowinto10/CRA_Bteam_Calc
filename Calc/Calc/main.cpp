#include "gmock/gmock.h"

class Cal {
public:
	// 이곳에 코드작성
};

// 테스트 케이스 작성
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
