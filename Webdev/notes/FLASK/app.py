from flask import Flask, redirect, url_for, render_template

app = Flask(__name__)
admin = True

@app.route("/")
def home():
    return render_template("index.html", heading="home pages", content='')

@app.route("/test")
def testing():
    return render_template("index.html", heading="home pages", content='this is not a drill')

@app.route("/<name>")
def hello(name):
    return f"hello {name}!"

@app.route("/admin")
def administrate():
    if admin:
        return "you are a admin :("
    else: 
        return redirect(url_for("home"))

app.run()