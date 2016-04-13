
//  RomanNumberConversor
//
//  Created by Thiago Sposito on 13/04/2016.

#include <stdio.h>

 int romanFromArabic(int nu){
    
    
   // int nu = 88;
    
    int  m = nu / 1000;
    nu -= m * 1000;
    int d = nu  / 500;
    nu -= d * 500;
    int c = nu / 100;
    nu -= c * 100;
    int l = nu / 50;
    nu -= l * 50;
    int x = nu / 10;
    nu -= x * 10;
    int v = nu / 5;
    nu -= v * 5;
    int  i = nu ;
    nu -= i;
    
    int cm = 0;
    if(d == 1 && c == 4){
        d = 0;
        c = 0;
        cm = 1;
    }
    
    int cd = 0;
    if(c == 4){
        c = 0;
        cd = 1;
    }
    
    int xc = 0;
    if(l == 1 && x == 4){
        l = 0;
        x = 0;
        xc = 1;
    }
    
    int xl = 0;
    if(x == 4){
        x = 0;
        xl = 1;
    }
    
    int ix = 0;
    if(v == 1 && i == 4){
        v = 0;
        i = 0;
        ix = 1;
    }
    
    int iv = 0;
    if(i == 4){
        i = 0;
        iv = 1;
    }
    
    int textLenght = m + d + c + l + x +  v + i + 2 * ( cm + cd + xc + xl + ix + iv);
    char romanNumber[textLenght + 1] ;
    int counter = 0;
    
    for( int a = 0; a < m + counter; a++){
        romanNumber[counter] = 'M';
    }
    counter += m;
    
    for( int a = counter; a < cm * 2 + counter; a++){
        romanNumber[a++] = 'C';
        romanNumber[a] = 'M';
    }
    counter += cm * 2;
    
    for( int a = counter; a < d + counter; a++){
        romanNumber[a] = 'D';
    }
    counter += d;
    
    for( int a = counter; a < cd * 2 + counter; a++){
        romanNumber[a++] = 'C';
        romanNumber[a] = 'D';
    }
    counter += cd * 2;
    
    for( int a = counter; a < c + counter; a++){
        romanNumber[a] = 'C';
    }
    counter += c;
    
    for( int a = counter; a < xc * 2 + counter; a++){
        romanNumber[a++] = 'X';
        romanNumber[a] = 'C';
    }
    counter += xc * 2;
    
    for( int a = counter; a < l + counter; a++){
        romanNumber[a] = 'L';
    }
    counter += l;
    
    for( int a = counter; a < xl * 2  + counter; a++){
        romanNumber[a++] = 'X';
        romanNumber[a] = 'L';
    }
    counter += xl * 2;
    
    for(int  a = counter; a < x + counter; a++){
        romanNumber[a] = 'X';
    }
    counter += x;
    
    for(int  a = counter; a < ix * 2 + counter; a++){
        romanNumber[a++] = 'I';
        romanNumber[a] = 'X';
    }
    counter += ix * 2;
    
    for( int a = counter; a < v + counter; a++){
        romanNumber[a] = 'V';
    }
    counter += v;
    
    for( int a = counter; a < iv * 2 + counter; a++){
        romanNumber[a++] = 'I';
        romanNumber[a] = 'V';
    }
    counter += iv * 2;
    
    for(int  a = counter; a < i + counter ; a++){
        romanNumber[a] = 'I';
    }
    
    printf("%s \n", romanNumber);
    return 0;
}

int main(int argc, const char * argv[]) {
    
    romanFromArabic(88);
    return 0;
}
