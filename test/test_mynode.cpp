#include        <gtest/gtest.h>

TEST(Test1, AbsTrue)
{
	ASSERT_TRUE(true);
}


int	main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return  RUN_ALL_TESTS();
}

