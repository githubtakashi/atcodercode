#include <bits/stdc++.h>
using namespace std;
int main() {
 int H, W;
 int sum = 0;

 cout << "入力してください" << endl;
 cin >> H >> W;
 char S[H][W];
 
 // 文字列を入力
 for(int i = 0; i < H; i++){
   for(int j = 0; j < W; j++){
     cin >> S[i][j];
   }
 }
 for(int i = 0; i < H; i++){
   for(int j = 0; j < W; j++){
     cout << S[i][j];
   }
   cout << endl;
 }
 
 // 入力した文字列をループしS[i][j] == "."なら「#」をカウントする処理に入る
 for(int i = 0; i < H; i++){
   for(int j = 0; j < W; j++){
     if(S[i][j] == '.'){
         // 周囲8方向の「#」をカウントする処理
         // 左上の文字が"#"かを確認し"#"ならカウントを増やす
         if(S[i-1][j-1] == '#'){
                    sum++; 
               		cout << "左上の文字をカウントしました" << endl;
         }
       
         
         // 真上の文字が"#"かを確認し"#"ならカウントを増やす
         if(S[i-1][j] == '#'){
                    sum++;
               		cout << "真上の文字をカウントしました" << endl;
         }
         
         // 右上の文字が"#"かを確認し"#"ならカウントを増やす
         if(S[i-1][j+1] == '#'){
                    sum++;
              		cout << "右上の文字をカウントしました" << endl;
         }
         
         // 同じ行の文字が"#"かを確認し"#"ならカウントを増やす
         if(j-1>=0){
         	if(S[i][j-1] == '#'){
           			sum++;
           			cout << "左の文字をカウントしました" << endl;
            }
         }
       
         if(j+1<=W-1){
            if(S[i][j+1] == '#'){
           			sum++;
           			cout << "右の文字をカウントしました" << endl;
            }
         }
         // 左下の
         if(S[i+1][j-1] == '#'){
                sum++;
                cout << "左下の文字をカウントしました" << endl;
         }

         if(S[i+1][j] == '#'){
                sum++;
                cout << "真下の文字をカウントしました" << endl;
         }

         if(S[i+1][j+1] == '#'){
                sum++;
                cout << "右下の文字をカウントしました" << endl;
         }

       cout << sum << endl;
       static_cast<char> (sum);
       S[i][j] = sum;
      //cout << "文字列のsum= " << sum << endl;
       cout << "sumを代入しました " << "i= " << i << "j= " << j << "S[i][j]= " << S[i][j] << endl;
       // sumのリセット
       sum = 0;
    } else {
       // S[i][j]は「#」なのでループを抜けて次のループに行く
       cout << "next roop" << endl;
   }
 }
}
}
