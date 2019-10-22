//
//  Fibonacci.h
//  Algorithm
//
//  Created by D on 2019/9/15.


#ifndef Fibonacci_h
#define Fibonacci_h

// 百度百科：https://baike.baidu.com/item/%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91%E6%95%B0%E5%88%97/99145?fr=aladdin

void fibonacci()
{
    int f = 0;
    int g = 1;
    
    for (int i = 0; i < 15; i++) {
        printf("%d\n", f);
        f = f + g;
        g = f - g;
    }
}

#endif /* Fibonacci_h */
