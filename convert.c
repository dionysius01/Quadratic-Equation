#include <stdio.h>
#include <math.h>

int main(){
    //Declaring all the variables I need for the program
    // a, b, and secC respectively are the coefficients of X
    // the first if statement is a rule of completing the squares that says "anytime the value of a is not 1, divide all of them including a
    // by the value of a"
    // secC2 short of second C 2 is the value of secC when it crosses over the equal sign
    // perSq short of perfect square at first was the formula for getting a perfect square which is (b/2) all raise to power two
    // but i did it step by step to avoid bugging so i first made perSq to be (b/2) and then made perSq to multiply itself
    // as we all know in a normal quadratic equation there is supposed to be a straight formula with only 3 parameters a, b and c
    // but because the 3rd parameter which is supposed to be c is not a perfect square it was moved over the equal sign and a new perfect
    // square was created which is the perSq variable
    // so now we will replace that perSq with the value of c therefore completing the 3 parameters we needed to get a quadratic equation done
    // ie a, b, and c
    // rhand short of right hand is the mathematics done on the right hand side of the equation ie to add the perSq to secC2
    // remember that secC2 is the value of our inputed secC that crossed over to the right hand of the equation
    // sqrhand short of square right hand is the variable that i used to store the square of the right hand side of the equation which
    // is the next step in the mathematical equation and this will give us one of the values to find x
    // also remember x is always of 2 values
    // msqrhand short of minus square right hand is the second value that will also help give us x (NOTE) it is the same value with
    // sqrhand but the sign will change (from + to - or from - to +)
    // NOW WE HAVE DONE THE RIGHT HAND MATHEMATICS OVER TO THE LEFT SIDE
    // Basically what the left hand will do now is just a normal quadratic equation cause they have a b and c all perfect values well placed
    // negB changes the sign of b and stores it for future use
    // sqrB squares the value of initial b and stores it for future use
    // secPar short form of second part of the formula which is the 4ac part stores the value of 4 * a * c for future use
    // dubA short for double A stores the value of 2a which is part of the formula for future use
    // following the formula of quadratic equation you'll understand the remaining mathematics done there
    // my answer is supposed to be 2 values of p (perfect square) but since its a perfect square both values are the same so i just assigned one
    // ans1 is the value of p
    //then to get the main value of x for the whole equation you'll have to either add ans1 to msqrhand (negative of right hand)
    // or add it to sqrhand (positive of right hand)
    // the if statement tells the computer if the result to be displayed at this case sol1 is not a number dont print
    // if it is a number print
    // I think I have tried shaa
    // you wont understand the code if you don't know quadratic equation in mathematics as a topic


    float a, aa, b, bb, c, cc, secC, secC2, perSq, rhand, sqrhand, msqrhand, negB, sqrB, secPar, dubA, par2, sqrPar2, ans1, sol1, sol2;
    printf("input the values of a b and c accordingly\n Hit enter after imputing each value\n");
    printf("Note this program will not work for invalid inputs\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&secC);
    if(a != 1){
        b /= a;
        secC /= a;
        a /= a;
    }
    secC2 = -1 * secC;
    perSq = (b/2);
    perSq = perSq * perSq;
    c = perSq;
    rhand = secC2 + perSq;
    sqrhand = sqrt(rhand);
    msqrhand = -1 * sqrhand;
    negB = b * -1;
    sqrB = b * b;
    secPar = 4 * a * c;
    dubA = 2 * a;
    par2 = sqrB - secPar;
    sqrPar2 = sqrt(par2);
    ans1 = (negB + sqrPar2) / dubA;
    sol1 = msqrhand + ans1;
    sol2 = sqrhand + ans1;
    if(sol1 < 0 || sol1 > 0){
            printf("x is = %.f or %.f", sol1, sol2);
    }else{
        printf("Not a valid input");
    }
    return 0;
}
