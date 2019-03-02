#include <limits>
#include "PID.h"

using namespace std;

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
	this->Kp = Kp_; 
	this->Ki = Ki_;
	this->Kd = Kd_;
				   
	this->p_error = 0.0;
	this->i_error = 0.0; 
	this->d_error = 0.0; 

	this->iteration = 1;
}

void PID::UpdateError(double cte) {
	//if (this->p_error == numeric_limits<double>::max()) {
	//	this->p_error = cte;
	//}
	if (iteration == 1) {
		this->p_error = cte;
		iteration = 2;
	}

	this->d_error = cte - this->p_error;
	this->p_error = cte;
	this->i_error += cte;
}

double PID::TotalError() {	
	return -this->Kp * this->p_error - this->Ki * this->i_error - this->Kd * this->d_error;
}