int redLED=5;
int yellowLED=9;
int redONtime=100;
int redOFFtime=90;
int yellowONtime=100;
int yellowOFFtime=90;
int numredblink;
int numyellowblink;


void setup() {
  // put your setup code here, to run once:
pinMode (redLED,OUTPUT);
pinMode (yellowLED,OUTPUT);

Serial.begin(115200);

Serial.print ("How many times do you want the red light to blink" ); //prompt user for input
while (Serial.available()==0)  {}  // wait for user input
numredblink=Serial.parseInt(); // read input from the user
 
Serial.print ("How many times do you want the yellow light to blink" );
while (Serial.available()==0)  {}
numyellowblink=Serial.parseInt();

}

void loop() {

Serial.println("red light");
int j;
while (j<=numredblink; j=j+1) {           // better to declare a variable for constants like 1,10 example: for j= 1; j<=counter , where counter=10
Serial.print (  "blinking number of red=");


Serial.println(j);
digitalWrite (redLED, HIGH);
delay (redONtime);
digitalWrite (redLED, LOW);
delay (redOFFtime);
j=j+1;
}

Serial.begin("  "); // this creates space 
Serial.println ("green light");

Serial.begin(115200);            // this could be 9600 in common and 115200
for (int p=1; p<=numyellowblink; p=p+1) { 
 Serial.print (  "blinking number of yellow=");    // the serial monitor shows (blinking time)= p each time the loop runs)
Serial.println(p);
digitalWrite(yellowLED, HIGH);
delay(yellowONtime);
digitalWrite (yellowLED,LOW);
delay (yellowOFFtime);
}
}
