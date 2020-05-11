//g++ -std=c++14 floodFill.cpp -o out && ./out > out.txt

#include<iostream>
#include<vector>
using namespace std;

    vector<vector<int>> dirA={{0,-1},{-1,0},{0,1},{1,0}};
    vector<vector<int>> floodFill_01(vector<vector<int>>& image, int sr, int sc, int a, int newColor) {

        image[sr][sc]=-newColor;
        for(int d=0;d<4;d++){
            int x=sr+dirA[d][0];
            int y=sc+dirA[d][1];
            
            if(x>=0 && y>=0 && x<image.size() && y<image[0].size() && image[x][y]==a ){
                floodFill_01(image, x, y, a, newColor);
            }
        }
        image[sr][sc]=-image[sr][sc];
        return image;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int a=image[sr][sc]; 
        vector<vector<int>> ans=floodFill_01(image, sr, sc, a, newColor);
        return ans;
    }

int main(){
    vector<vector<int>> image={
                               {1,1,1},
                               {1,1,0},
                               {1,0,1}
                               };
    int sr=1; int sc=1; int newColor=2;
    vector<vector<int>>a=floodFill(image,sr,sc,newColor);

    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
