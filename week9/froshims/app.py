from flask import Flask, render_template, request

app = Flask(__name__)

SPORTS = [
    "Basketball",
    "Football",
    "Ultimate Frisbee"
]

@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    #Validate the submission
    if not request.form.get("name") or request.form.get("sport") not in SPORTS:
        print(request.form.get("sport"))
        return render_template("failure.html")

    return render_template("sucess.html")