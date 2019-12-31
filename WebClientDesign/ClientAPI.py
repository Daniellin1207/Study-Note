import requests

url="http://127.0.0.0:8080"

# create room
def CreateRoom(playerNum,gamesNum,id):
    data={
        "playerNum":playerNum,
        "gamesNum":gamesNum,
        "id":id
    }
    res=requests.post(url,data=data)
    res.encoding='utf-8'
    print(res.text)

# get access to room 
def GetAccessToRoom(roomId,id):
    data={
        "roomId":roomId,
        "id":id
    }
    res=requests.post(url,data=data)
    res.encoding='utf-8'
    print(res.text)

# start game
def StartGame():
    res=requests.get(url)
    res.encoding='utf-8'
    print(res.text)

# input number
def InputNum(value):
    data={
        "value":value
    }
    res=requests.post(url,data=data)
    res.encoding='utf-8'
    print(res.text)

# refresh data
def RefreshData():
    res=requests.get(url)
    res.encoding='utf-8'
    print(res.text)
