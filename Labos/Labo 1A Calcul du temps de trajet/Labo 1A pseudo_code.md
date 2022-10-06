# Labo 1A
# Authors: Ophélie, Gwenaël, Noé

inputs:
* distXStartPointToObject = 3, distance in KM on the X axis between the starting point and the object 
* distYStartPointToObject = 10, distance in KM on the Y axis between the starting point and the object 
* speedOnRoad = 5, robot speed on the road in KM/H 
* speedOffRoad = 2, robot speed on the rock in KM/H 
* distYStartPointToRoadExit = 6, distance in KM on the Y axis between the starting point and the road exit

outputs:
* total time in hour to reach the object

methods:
* totalTravelTime = roadTravelTime + rockTravelTime
* roadTravelTime = distYStartPointToRoadExit / speedOnRoad
* rockTravelTime = distRoadExitToObject / speedOffRoad
* distRoadExitToObject = sqrt(distYRoadExitToObject^2 + distXStartPointToObject^2)
* distYRoadExitToObject = distYStartPointToObject - distYStartPointToRoadExit
