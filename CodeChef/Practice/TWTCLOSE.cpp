//  https://www.codechef.com/problems/TWTCLOSE

#include <iostream>
using namespace std;

struct Actions{
    const string CLICK = "CLICK";
    const string CLOSEALL = "CLOSEALL";
}tweetActions;

void closeAllTweets(int* tweets, int numberOfTweets){
    
    for(int t=0; t<numberOfTweets; t++){
        tweets[t] = 0;
    }
}

void openCloseTweet(int* tweets, int tweetNumber){
    tweets[tweetNumber - 1] = !tweets[tweetNumber - 1]; 
}

int getOpenTweetsCount(int tweets[], int numberOfTweets){
    int count  = 0;
    int size = sizeof(tweets) / sizeof(tweets[0]);
    
    for(int t=0 ; t<numberOfTweets; t++){
        count += tweets[t];
    }
    
    return count;
}

int main() {
    
    int numberOfTweets = 0;
    int numberOfTweetClicks = 0;
    
    cin>>numberOfTweets;
    cin>>numberOfTweetClicks;
    
    int tweets[numberOfTweets];
    
    if((1<=numberOfTweets && numberOfTweets<=1000)
        && (1<=numberOfTweetClicks && numberOfTweetClicks<=1000)){
        
        closeAllTweets(tweets, numberOfTweets);
        string action = "";
        
        while(numberOfTweetClicks--){
            cin>>action;
            
            if(action == tweetActions.CLICK){
                int tweetNumber = 0;
                cin>>tweetNumber;
                
                if(1<=tweetNumber && tweetNumber<=numberOfTweets){
                    openCloseTweet(tweets, tweetNumber);
                }
                
            }else if(action == tweetActions.CLOSEALL){
                closeAllTweets(tweets, numberOfTweets);
            }
            
            cout<<getOpenTweetsCount(tweets, numberOfTweets);
            cout<<endl;
        }
    }
    
	return 0;
}
