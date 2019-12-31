from flask import Flask,request,render_template
import json
app = Flask(__name__)

@app.route('/')
def index():
    hello=request.headers.get('User-Agent') 
    print(hello)
    hello=request.remote_addr
    print(hello)
    return render_template("WebTest.html")

# test
@app.route('/test',methods=['GET','POST'])
def Test():
    if request.method=='GET':
        print("this is GET method")
    else :
        if request.method=='POST':
            print("this is POST method")


# create room
@app.route('/CreateRoom')
def CreateRoom():
    # data={
    #     "playerNum":playerNum,
    #     "gamesNum":gamesNum,
    #     "id":id
    # }
    data=request.get_data()
    js_data=json.loads(data.decode('utf-8'))
    print(js_data)

# get access to room 
@app.route('/GetAccessToRoom')
def GetAccessToRoom():
    # data={
    #     "roomId":roomId,
    #     "id":id
    # }
    data=request.get_data()
    print(data)

# start game
@app.route('/StartGame')
def StartGame():
    return "GameStart！"

# input number
@app.route('/InputNum')
def InputNum():
    # data={
    #     "id",id,
    #     "value":value
    # }
    data=request.get_data()
    print(data)

# refresh data
@app.route('/RefreshData',methods=['GET','POST'])
def RefreshData():
    data={
        "test1":123,
        "test2":321
    }
    return json.dumps(data)

if __name__ == "__main__":
	app.run(host='0.0.0.0',port=8080)