class Solution {
public:
    int mySqrt(int x) {
         long int sq=0,i=1;
while(sq<=x)
    {
        sq=i*i;
        i++;
    }
return i-2;
}   
};