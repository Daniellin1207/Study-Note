* 看看ffmpeg 和cv2里的VideoCapture VideoWriter  这些  在 视频抽帧上对比下，看看哪个执行速度快

* 现在使用的命令是 ffmpeg -i 视频路径 -vf fps={每秒抽帧的数量}  输出的图片路径/%d.jpg
例如 ffmpeg -i src_video.mp4  -vf fps=2  des_dir/%d.jpg 