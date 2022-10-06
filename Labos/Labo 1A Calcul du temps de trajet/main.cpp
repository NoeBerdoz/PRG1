/*------------------
 Labo : 01A
 Authors : Serex Ophélie, Ansermoz Gwenaël, Berdoz Noé
 Goal : Calculate the time required for the robot to travel to the object,
        given a distance that need to be traveled on the road.
 Creation Date : 26.09.22
 Modified:
    27.09.22: shorten variables names and add comments
 Comments :
 -----------------*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double distYStartPointToRoadExit = 6;
    cin >> distYStartPointToRoadExit;

    double distYStartPointToObject = 10;
    double distYRoadExitToObject = distYStartPointToObject - distYStartPointToRoadExit;

    double distXStartPointToObject = 3;
    // use pythagoras theorem to calculate the distance travelled off-road
    double distRoadExitToObject = sqrt(pow(distYRoadExitToObject, 2) + pow(distXStartPointToObject, 2));

    double speedOnRoad = 5;
    double speedOffRoad = 2;

    double rockTravelTime = distRoadExitToObject / speedOffRoad;
    double roadTravelTime = distYStartPointToRoadExit / speedOnRoad;
    double totalTravelTime = roadTravelTime + rockTravelTime;

    cout << totalTravelTime << endl;

    return 0;
}