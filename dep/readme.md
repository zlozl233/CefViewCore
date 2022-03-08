Download cef binary release from http://opensource.spotify.com/cefbuilds/index.html
Then extract the content to this folder and rename the folder to 'cef'. The folder layout shoudl be:
```
dep
 |--cef
 |   |--cmake
 |   |--Debug
 |   |-include
 ...
```



Update CEF Version

cef_binary_97.0.0-4692_win_baijiayun.2484+gb6c14b9+chromium-97.0.4692.71_windows64

![image-20220308195632272](https://gitee.com/zlozl5566/drawing-bed-1/raw/master/image/image-20220308195632272.png)

(1) 编译时增加ffmpeg 

(2) 修改CEF代码支持 getDisplayMedia 全屏/窗口共享 

(3) 支持解码播放 HEVC

编译时，请下载cef库放到dep路径下
