#include <iostream>

using namespace std;

int main()
{
    Mat Transformed=transformPerspective(approxedContours[iNum], pink, 350, 350);

//transform perspective

    Mat Umbrella=imread("Umbrella.png");
    cvtColor(Umbrella, Umbrella, COLOR_BGR2HSV);
    inRange(Umbrella, Scalar (150, 20, 50), Scalar (170, 255, 255), Umbrella);
    Mat Circle =imread("Circle.png");
    cvtColor (Circle, Circle, COLOR_BGR2HSV);
    inRange(Circle, Scalar (150, 20, 50), Scalar (170, 255, 255), Circle);
    Mat Triangle=imread("Triangle. png");
    cvtColor (Triangle, Triangle, COLOR_BGRZHSV);
    inRange(Triangle, Scalar (150, 20, 50), Scalar (170, 255, 255), Triangle);
    Mat Star = imread("Star.png");
    cvtColor (Star, Star, COLOR_BGRZHSV);
    inRange (Star, Scalar (150, 20, 50), Scalar (170, 255, 255), Star);

    int UmbrellaMatch = compareImages (Transformed, Umbrella);
    int CircleMatch = compareImages (Transformed, Circle);
    int TriangleMatch = compareImages (transformed, Triangle);
    int StarMatch = compareImages (Transformed, Star);
    int MatchCheck [4] = {UmbrellaMatch, CircleMatch, TriangleMatch, StarMatch};
    sort (MatchCheck, MatchCheck+4);
    printf("*%d\t%d\t%d\t%d\n", MatchCheck[0], MatchCheck[1], MatchCheck[2], MatchCheck[3]);
           return 0;
}
