#include <iostream>
#include <cmath>
using namespace std;


double deg2rad(double a){
    return a * M_PI / 180;
}

double rad2deg(double b){
    return b * 180 / M_PI ;
}

double findXComponent(double l1,double l2,double a1,double a2){
    double R = l1 * cos(a1) + l2 * cos(a2);
    return R ;
}

double findYComponent(double l1,double l2,double a1,double a2){
    double R = l1 * sin(a1) + l2 * sin(a2);
    return R ;
}

double pythagoras(double xcomp,double ycomp){
    double C = sqrt( pow(xcomp,2) + pow(ycomp,2) );
    return C ;
}

double showResult(double result_vec_length,double result_vec_direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl ;
    cout << "Length of the resultant vector = " << result_vec_length << endl ;
    cout << "Direction of the resultant vector (deg) = " << result_vec_direction << endl ;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;
    return 0 ;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}

