#include <gtest/gtest.h>
#include <UnorderedMap/UnorderedMap.h>


TEST(UnorderedMap, Methods1) {
    UnorderedMap<int, std::string> map(10);

    map.insert(1, "One");
    map.insert(1, "OneOne");
    map.insert(2, "Two");
    map.insert(2, "TwoTwo");
    map.insert(2, "TwoTwoTwo");
    map.insert(3, "Three");
    map.insert(4, "Four");
    map.insert(5, "Five");
    map.insert(25, "TwentyFive");
    map.insert(28, "TwentyEight");

    map.print();

    auto item = map.search(2);
    std::cout << "First value with key = 2: " << *item << std::endl;

    int count = map.count(2);
    std::cout << "Count of items with key = 2: " << count << std::endl;

    auto map2(map);
    map2.insert_or_assign(12, "Twelve");
    map2.insert_or_assign(2, "TwoTwoTwo");
    map2.erase(1);
    map2.print();

    auto map3 = map;
    //map3.print();

    std::cout << "Five in HashTable: " << map.contains("Five") << std::endl;
    std::cout << "Six in HashTable: " << map.contains("Six") << std::endl;

    UnorderedMap<int, std::string> map4(10,0,10,0,15);
    map4.print();

    std::cout << std::endl << "LXXV: " << romanToDecimal("LXXV") << std::endl;
    std::cout << std::endl << "XCIX: " << romanToDecimal("XCIX") << std::endl;
    std::cout << std::endl << "DXLIX: " << romanToDecimal("DXLIX") << std::endl;
    std::cout << std::endl << "MCMLXXVI: " << romanToDecimal("MCMLXXVI") << std::endl;
}