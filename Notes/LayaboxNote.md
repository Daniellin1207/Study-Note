# 
1. 下载layabox引擎，有时遇到点击无反应时，可以使用迅雷下载。
2. 使用layabox引擎新建项目后，生成微信小游戏的步骤：
* 项目=>发布=>发布平台设置为微信小程序=>发布即可
* 打开微信开发者工具=>导入项目=>地址为layabox项目下的release文件夹下的wxgame文件夹。
* 微信开发者工具中上传后，在网页中进行后续处理。
* 微信小程序网页=>管理=>版本管理=>开发版本中设置体验版本，后续提交审核与发布。
* 在体验版本的时候，需要设置体验人员，是在网页版本中设置，管理=>成员管理=>体验人员/开发人员。
3. 目前layabox的代码编辑器出现了问题，通过改换了版本，可以使用编辑模式。原因可能是最新版的layabox对mac不太友好。
4. layabox使用的教程文档地址:  
https://ldc2.layabox.com/doc/?language=zh&nav=zh-ts-0-3-0
5. 在使用chrome进行图片载入时，本地的图片会发生错误（可能是跨域的问题），因此目前暂时使用网络图片地址。
6. 文档中使用缩写可以按照格式:  
    **import Text=Laya.Text;**  
    这样可以使用Text代替Laya.Text了。
7. 在Chrome中调试时会遇到跨域的问题，可以通过在终端中指令：
**open -n /Applications/Google\ Chrome.app/ --args --disable-web-security  --user-data-dir = /Users/daniel/Applications/Google**
