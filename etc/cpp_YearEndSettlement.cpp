////
//// Created by iwin1 on 2021-01-12.
////
//#include <iostream>
//#include <string>
//#include <cmath>
//
//int YearEndSettlement() {
//    float a;
//    std::cin>>a;
//
//    if (a <= 500) { a *= 0.7; }
//    else if (500 < a && a<=1500) { a = 350 + ((a-500)*0.4); }
//    else if (1500 < a && a <=4500) { a = 750 + ((a-1500)*0.15); }
//    else if (4500 < a && a <=10000) { a = 1200 + ((a-4500)*0.05); }
//    else { a = 1475 + ((a-10000)*0.02); }
//
//    int rst = floor(a);
//    std::cout<<rst;
//
//    return 0;
//}