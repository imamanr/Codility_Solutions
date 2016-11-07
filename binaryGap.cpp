
using namespace std;


int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    int countgap =0;
    int tempgap = 0;
    int countone = 0;
    while(N){

     if(N%2 == 1 && (N>0 || N <=1))
        { countone++;
    	 tempgap = 0;
     }
     else if(N%2 == 0&& N>1 && countone) {
         tempgap++;
         if(tempgap>countgap){
             countgap = tempgap;
             }
     }
     N=N/2;
    }
   if(countone < 2) { countgap = 0;}
    return countgap;
}
