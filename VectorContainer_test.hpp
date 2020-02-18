#ifndef __VECTORCONTAINER_TEST_HPP__
#define __VECTORCONTAINER_TEST_HPP__

#include <vector>

#include "VectorContainer.hpp"
#include "container.hpp"
#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"

#include "gtest/gtest.h"

TEST(VectorContainerTest, AddElement) {
	Op* one = new Op(1);
	VectorContainer* tester = new VectorContainer();

	tester->add_element(one);

	ASSERT_EQ(tester->size(), 1);
	EXPECT_EQ(tester->at(0)->evaluate(), 1);
}

#endif // __VECTORCONTAINER_TEST_HPP__
