//#ifndef PID_H
//#define PID_H
//
//class PID {
// public:
//	 bool is_initialized;
//	 /**
//	 * PID Errors
//	 */
//	 double p_error;
//	 double i_error;
//	 double d_error;
//	 double sum_error;
//
//	 /**
//	 * PID Coefficients
//	 */
//	 double Kp;
//	 double Ki;
//	 double Kd;
//
//	 ///*** Twiddle
//	 //std::vector<double> dp;
//	// double best_err;//run(robot, p)
//	 //int iteration;
//
//  /**
//   * Constructor
//   */
//  PID();
//
//  /**
//   * Destructor.
//   */
//  virtual ~PID();
//
//  /**
//   * Initialize PID.
//   * @param (Kp_, Ki_, Kd_) The initial PID coefficients
//   */
//  void Init(double Kp_, double Ki_, double Kd_);
//
//  /**
//   * Update the PID error variables given cross track error.
//   * @param cte The current cross track error
//   */
//  void UpdateError(double cte);
//
//  /**
//   * Calculate the total PID error.
//   * @output The total PID error
//   */
//  double TotalError();
//
// private:
//  
//
//};
//
//#endif  // PID_H

#ifndef PID_H
#define PID_H

class PID {
public:
	//
	double Kp;
	double Ki;
	double Kd;
	//
	double p_error;
	double i_error;
	double d_error;

	int iteration;	
	/*
	* Constructor
	*/
	PID();

	/*
	* Destructor.
	*/
	virtual ~PID();

	/*
	* Initialize PID.
	*/
	void Init(double Kp, double Ki, double Kd);

	/*
	* Update the PID error variables given cross track error.
	*/
	void UpdateError(double cte);

	/*
	* Calculate the total PID error.
	*/
	double TotalError();
};

#endif /* PID_H */