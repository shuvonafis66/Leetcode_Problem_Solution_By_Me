class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int exactime=arrivalTime+delayedTime;
    if(exactime<24)
       return exactime;
   else
       return (exactime-24);
    }
};