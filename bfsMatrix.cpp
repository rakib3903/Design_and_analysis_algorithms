    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int m, n, o = 0;
    char arr[1000][1000];
    int isVisited[1000][1000];

    void bfs(int x, int y){
      queue< pair<int, int> >q;
      q.push(make_pair(x, y));
      isVisited[x][y] = 1;


      while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        if(x+1 < m && y >= 0 && y < n && (isVisited[x+1][y] == 0) && (arr[x+1][y] != 's') && (arr[x+1][y] != '#')){
          isVisited[x+1][y] = 1;
          q.push(make_pair(x+1, y));
          if(arr[x+1][y] == 'x'){
            o++;
            break;
          }
        }
        if(x-1 >= 0  && y >= 0 && y < n && (isVisited[x-1][y] == 0) && (arr[x-1][y] != 's') && (arr[x-1][y] != '#')){
          isVisited[x-1][y] = 1;
          q.push(make_pair(x-1, y));
          if(arr[x-1][y] == 'x'){
            o++;
            break;
          }
        }
        if(y+1 < n && x >= 0 && x < m && (isVisited[x][y+1] == 0) && (arr[x][y+1] != 's') && (arr[x][y+1] != '#')){
          isVisited[x][y+1] = 1;
          q.push(make_pair(x, y+1));
          if(arr[x][y+1] == 'x'){
            o++;
            break;
          }
        }
        if(y-1 >= 0 && x >= 0 && x < m && (isVisited[x][y-1] == 0) && (arr[x][y-1] != 's') && (arr[x][y-1] != '#')){
          isVisited[x][y-1] = 1;
          q.push(make_pair(x, y-1));
          if(arr[x][y-1] == 'x'){
            o++;
            break;
          }
        }
      }
      if(o == 0) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    int main(){       
        cin>>m>>n;
        int x,y;
        for(int i = 0; i < m; i++){
          for(int j = 0; j < n; j++){
            cin>>arr[i][j];
            isVisited[i][j] = 0;
            if(arr[i][j] == 'a'){
              x = i;
              y = j;
            }
          }
        }
        bfs(x, y);
        
        return 0;
    }