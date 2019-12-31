from flask import Flask,request,render_template
app = Flask(__name__)

@app.route('/')
def index():

    hello=request.headers.get('User-Agent') 
    print(hello)
    hello=request.remote_addr
    print(hello)
    return render_template("WebTest.html")

if __name__ == "__main__":
	app.run(host='0.0.0.0',port=8080)