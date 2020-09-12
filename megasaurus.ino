// 53 - 36 right --> left


#define A 53
#define B 52
#define X 51
#define Y 50
#define Z 49
#define CUp 48
#define CRight 47
#define CDown 46
#define R 45
#define CLeft 44
#define Up 43
#define Down 42
#define Right 41
#define Left 40
#define start 39
#define L 38
#define unused1 37
#define unused2 37

void buttonPress(int button, int wait = 40) {
  digitalWrite(button, HIGH);
  delay(wait);
  digitalWrite(button, LOW);
  delay(40);
}

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(X, OUTPUT);
  pinMode(Y, OUTPUT);
  pinMode(L, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(Z, OUTPUT);
  pinMode(Left, OUTPUT);
  pinMode(Right, OUTPUT);
  pinMode(Up, OUTPUT);
  pinMode(Down, OUTPUT);
  pinMode(CLeft, OUTPUT);
  pinMode(CRight, OUTPUT);
  pinMode(CUp, OUTPUT);
  pinMode(CDown, OUTPUT);
  pinMode(start, OUTPUT);
  Serial1.begin(9600);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial1.available() > 0) {
    String readVal = Serial1.readString();
    Serial.println(readVal);
    analogWrite(A1, 255);
    if( readVal == "11") {
      // pause
      buttonPress(A);
      buttonPress(A);
    } else if( readVal == "33") {
      buttonPress(B);
      buttonPress(B);
      buttonPress(B);
      buttonPress(B);
      buttonPress(B);
      buttonPress(Left);
      buttonPress(Up);
      buttonPress(A);
      buttonPress(A);
      //typing
      delay(700);
      buttonPress(Down);
      buttonPress(Down);
      buttonPress(Down);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      // M
      buttonPress(A);
      //
      buttonPress(Up);
      buttonPress(Up);
      buttonPress(Right);
      // i
      buttonPress(A);
      //
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Down);
      buttonPress(Down);
      // c
      buttonPress(A);
      //
      buttonPress(Up);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      // h
      buttonPress(A);
      //
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      // a
      buttonPress(A);
      //
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Up);
      // e
      buttonPress(A);
      //
      buttonPress(Down);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      // l
      buttonPress(A);
      // space
      buttonPress(Y);
      //
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Up);
      // r
      buttonPress(A);
      //
      buttonPress(Left);
      // ee
      buttonPress(A);
      buttonPress(A);
      //
      buttonPress(Down);
      buttonPress(Down);
      buttonPress(Right);
      // v
      buttonPress(A);
      //
      buttonPress(Left);
      buttonPress(Up);
      buttonPress(Up);
      // e
      buttonPress(A);
      //
      buttonPress(Down);
      buttonPress(Left);
      // s
      buttonPress(A);
      //
      buttonPress(Down);
      buttonPress(Left);
      buttonPress(Down);
      buttonPress(Left);
      // +
      buttonPress(A);
      delay(1250);
      buttonPress(Down);
      buttonPress(Right);
      buttonPress(A);
    } else if (readVal == "44") {
      // back
      buttonPress(B);
    } else if (readVal == "3030") {
      // rewind 30
      buttonPress(A);
      buttonPress(Up);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(Left);
      buttonPress(A);

    } else if (readVal == "6060") {
      // fast-forward 30
      buttonPress(A);
      buttonPress(Up);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(Right);
      buttonPress(A);  
    } else if (readVal == "7171") {
      // left1
      buttonPress(Left);
    } else if (readVal == "7272") {
      // left2
      buttonPress(Left);
      buttonPress(Left);
    } else if (readVal == "7575") {
      //left5
      for (int i = 0; i < 5; i++) {
        buttonPress(Left);
      }
    }  else if (readVal == "7777") {
      // debug
      buttonPress(start);
    } else if (readVal == "8181") {
      // right1
      buttonPress(Right);
    } else if (readVal == "8282") {
      // right2
      buttonPress(Right);
      buttonPress(Right);
    } else if (readVal == "8585") {
      // right5
      for (int i = 0; i < 5; i++) {
        buttonPress(Right);
      }
    } else if (readVal == "9191") {
      // up1
      buttonPress(Up);
    } else if (readVal == "9393") {
      // up1
      for (int i = 0; i < 3; i++) {
        buttonPress(Right);
      }
    } else if (readVal == "101101") {
      // down1
      buttonPress(Down);
    } else if (readVal == "103103") {
      // down1
      for (int i = 0; i < 3; i++) {
        buttonPress(Down);
      }
    }
    analogWrite(A1, 0);

  }
}
