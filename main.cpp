#include <vector>

#include "VectorContainer.hpp"
#include "container.hpp"
#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"
#include "SelectionSort.hpp"
#include "sort.hpp"

using namespace std;

int main() {
	 Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    Sort* select = new SelectionSort();
    container->set_sort_function(select);
    container->sort();

	container->print();

return 0;

}	
