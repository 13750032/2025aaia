//week14-5-sound
//Sketch - Library - Manage Libraries...
//安裝Sound後，開始寫
//選單 File - Examples 選 Libraries 核心函式庫Sound-Soundfile-JumbleSounfile
//再自己寫
import processing.sound.*;//Java使用Sound外掛
SoundFile music;//宣告一個變數music
void setup(){
  size(640,360);
  music=new SoundFile(this,"In Game Music.mp3");
  music.play();//play()播放
}
void draw(){
  //裡面是空白
}
