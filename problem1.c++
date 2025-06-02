using namesapce std;
#include <iostream>

int Readnumber(string msg){
    cout<<msg<<endl;
    int number;
    cin>>number;
    return number;

}

string NumberToText(int number){
if(number == 0) return "";
else if(number <=1 && number >=19){
    string text[] = {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                 "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                 "eighteen", "nineteen"};

                 return text[number] + "";
}else if(number >=20 && number <=99){
    string text[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int tens = number / 10;
    int units = number % 10;
    return text[tens] + (units > 0 ? "-" + NumberToText(units) : "");
}else if(number >=100 && number <=199){
    return "one hundred" + (number > 100 ? " and " + NumberToText(number % 100) : "");

}else if(number >=200 && number <=999){
    int hundreds = number / 100;
    return NumberToText(hundreds) + " hundred" + (number % 100 > 0 ? " and " + NumberToText(number % 100) : "");
}else (number >=1000 && number <=1999){
    return "one thousand" + (number > 1000 ? " and " + NumberToText(number % 1000) : "");
}
}
int main(){
    int number = Readnumber("please enter a number: ");
    string text = NumberToText(number);
    cout<<text;
}