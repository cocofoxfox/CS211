#include <iostream>
#include <cstring>
using namespace std;

bool invalid(int num[]);
int main(){
    string input;
    int score[26]={0},num[26]={0},count=0,runners=0,best_number;
    double best_score,best[26];
    while(1){
        cout<<"Please input the result of a race:";
        cin>>input;
        if(input=="done")
        exit(0);
        for(int i=0;i<input.length();i++){
            switch(input[i]){
                case 'A': score[0]+=i+1;
                          num[0]++;
                          break;
                case 'B': score[1]+=i+1;
                          num[1]++;
                          break;
                case 'C': score[2]+=i+1;
                          num[2]++;
                          break;
                case 'D': score[3]+=i+1;
                          num[3]++;
                          break;
                case 'E': score[4]+=i+1;
                          num[4]++;
                          break;
                case 'F': score[5]+=i+1;
                          num[5]++;
                          break;
                case 'G': score[6]+=i+1;
                          num[6]++;
                          break;
                case 'H': score[7]+=i+1;
                          num[7]++;
                          break;
                case 'I': score[8]+=i+1;
                          num[8]++;
                          break;
                case 'J': score[9]+=i+1;
                          num[9]++;
                          break;
                case 'K': score[10]+=i+1;
                          num[10]++;
                          break;
                case 'L': score[11]+=i+1;
                          num[11]++;
                          break;
                case 'M': score[12]+=i+1;
                          num[12]++;
                          break;
                case 'N': score[13]+=i+1;
                          num[13]++;
                          break;
                case 'O': score[14]+=i+1;
                          num[14]++;
                          break;
                case 'P': score[15]+=i+1;
                          num[15]++;
                          break;
                case 'Q': score[16]+=i+1;
                          num[16]++;
                          break;
                case 'R': score[17]+=i+1;
                          num[17]++;
                          break;
                case 'S': score[18]+=i+1;
                          num[18]++;
                          break;
                case 'T': score[19]+=i+1;
                          num[19]++;
                          break;
                case 'U': score[20]+=i+1;
                          num[20]++;
                          break;
                case 'V': score[21]+=i+1;
                          num[21]++;
                          break;
                case 'W': score[22]+=i+1;
                          num[22]++;
                          break;
                case 'X': score[23]+=i+1;
                          num[23]++;
                          break;
                case 'Y': score[24]+=i+1;
                          num[24]++;
                          break;
                case 'Z': score[25]+=i+1;
                          num[25]++;
                          break;
                      }
                  }


                  for(int i=0;i<26;i++){
                      if(num[i]>0){
                          runners=num[i];
                          count++;
                          best[i]=score[i]/double(num[i]);
                          best_score=best[i];
                      }
                  }
                  for(int i=0;i<26;i++){
                      if(best_score>best[i]){
                          best_score=best[i];
                          best_number=i;
                      }
                  }

                  if(invalid(num)){
                     cout<<"Invalid input.Please try again.";
                     continue;
                  }

                  cout<<"There are "<<count<<" teams"<<endl;
                  cout<<"Each team has "<<runners<<"runners"<<endl;
                  cout<<"Team"<<"\t"<<"Score"<<endl;
                  for(int i=0;i<26;i++){
                      if(num[i]>0){
                          cout<<(char)(i+65)<<"\t"<<best[i]<<endl;
                      }

                  }
                  cout<<"The winning team is team "<<(char)(best_number+65)
                  << " with a score of "<<best_score<<endl;


                  }
                }
            bool invalid(int num[]){
                int test[26]={0};
                for(int i=0;i<26;i++){
                    for(int j=0;j<26;j++){
                        if(num[i]>0)
                        test[j]=num[i];
                    }
                }
                for (int k=0;k<26;k++){
                    if (test[k]==0){
                       int n=k-1;
                       for (int l=0;l<=n-1;l++){
                        if(test[l]!=test[l+1])
                          return true;
                      }
                  }
            }
            return false;
        }
