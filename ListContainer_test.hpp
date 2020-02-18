#ifndef __LISTCONTAINER_TEST_HPP__
#define __LISTCONTAINER_TEST_HPP__

#include <list>

#include "ListContainer.hpp"
#include "container.hpp"
#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"

#include "gtest/gtest.h"

TEST(ListContainerTest, AddElement) {
	Op* one = new Op(1);
	ListContainer* tester = new ListContainer();

	tester->add_element(one);

	ASSERT_EQ(tester->size(), 1);
	EXPECT_EQ(tester->at(0)->evaluate(), 1);
}

#endif //__LISTCONTAINER_TEST_HPP__
