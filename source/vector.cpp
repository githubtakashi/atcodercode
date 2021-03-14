#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
  int H, W;
  int sum = 0;
  
  cout << "入力してください" << endl;
  
  cin >> H >> W;
  
  vector<vector<char>> data(H, vector<char>(W));

  // 入力
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> data.at(i).at(j);
    }
  }
  
  // 入力した配列を出力確認
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cout << data.at(i).at(j);
    }
    cout << endl;
  }
  
  // 入力した文字列をループしdata.at(i).at(j) = "."なら#をカウントする処理に入る
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(data.at(i).at(j) == '.'){
        // 周囲8方向の#をカウントする処理

        // 左上の文字が#かを確認し#ならカウントを増やす
        if(i-1>=0 && j-1>=0){
          if(data.at(i-1).at(j-1) == '#'){
            sum++;
            cout << "左上の文字をカウントしました" << endl;
          }
        }

        // 真上の文字が#かを確認し#ならカウントを増やす
        if(i-1>=0){
          if(data.at(i-1).at(j) == '#'){
            sum++;
            cout << "真上の文字をカウントしました" << endl;
          }
        }

        // 右上の文字が#かを確認し#ならカウントを増やす
        if(i-1>=0 && j+1<=W-1){
          if(data.at(i-1).at(j+1) == '#'){
            sum++;
            cout << "右上の文字をカウントしました" << endl;
          }
        }

        // 同じ行の文字が#かを確認し#ならカウントを増やす
        if(j-1>=0){
          if(data.at(i).at(j-1) == '#'){
            sum++;
            cout << "左の文字をカウントしました" << endl;
          }
        }

        if(j+1<=W-1){
          if(data.at(i).at(j+1) == '#'){
            sum++;
            cout << "右の文字をカウントしました" << endl;
          }
        }

        // 左下の文字が#かを確認し#ならカウントを増やす
        if(i+1<=H-1 && j-1>=0){
          if(data.at(i+1).at(j-1) == '#'){
            sum++;
            cout << "左下の文字をカウントしました" << endl;
          }
        }
        
        // 真下の文字が#かを確認し#ならカウントを増やす
        if(i+1<=H-1){
          if(data.at(i+1).at(j) == '#'){
            sum++;
            cout << "真下の文字をカウントしました" << endl;
          }
        }

        // 右下の文字が#かを確認し#ならカウントを増やす
        if(i+1<=H-1 && j+1<=W-1){
          if(data.at(i+1).at(j+1) == '#'){
            sum++;
            cout << "右下の文字をカウントしました" << endl;
          }
        }

        cout << sum << endl;
       // char a[10];
       // int n = sprintf(a, "%s", sum);
       // cout << "文字列にしたsum= " << a << endl;
        //data.at(i).at(j) = s;
        cout << "sumを代入しました" << "data.at(" << i << ").at(" << j << ")= " << data.at(i).at(j) << endl;
        // sumのリセット
        sum = 0; 

      } else {
          // data.at(i).at(j)は#なのでループを抜けて次のループに行く
          cout << "next loop" << endl;
        }
     }
  }
  return 0;
}
