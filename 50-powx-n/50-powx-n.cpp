class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        }
        
        double sol;
         
        double pow = myPow(x, n/2);

        if (n%2 == 0) {
            sol = pow*pow;
        } else {
            if (n > 0) {
                sol = pow*pow*x;
            } else {
                sol = pow*pow/x;
            }

        }
            
        
        return sol;
    }
};