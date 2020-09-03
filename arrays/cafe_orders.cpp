/*
Given three vectors, write a function to check that my service is first-come, first-served.
All food should come out in the same order customers requested it.

We'll represent each customer order as a unique integer.

As an example:

Take Out Orders: [1, 3, 5]
Dine In Orders: [2, 4, 6]
Served Orders: [1, 2, 4, 6, 5, 3]

Output: False

Take Out Orders: [17, 8, 24]
Dine In Orders: [12, 19, 2]
Served Orders: [17, 8, 12, 19, 24, 2]

Output: True
*/

#include <iostream>
#include <vector>

bool isFirstComeFirstServed(const std::vector<int>& takeOutOrders,
                            const std::vector<int>& dineInOrders,
                            const std::vector<int>& servedOrders)
{
    if (takeOutOrders.size() + dineInOrders.size() != servedOrders.size())
        return false;
    
    size_t i = 0;
    size_t j = 0;
    size_t k = 0;
    
    while (k < servedOrders.size()) {
        if (i < takeOutOrders.size() && servedOrders[k] == takeOutOrders[i]) {
            i++;
        } else if (j < dineInOrders.size() && servedOrders[k] == dineInOrders[j]) {
            j++;
        } else {
            return false;
        }
        
        k++;
    }

    return true;
}
