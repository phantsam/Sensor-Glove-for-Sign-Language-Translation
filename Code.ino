const int flex1 = A0;
const int flex2 = A1;
const int flex3 = A2;
const int xpin = A3;
const int ypin = A4;
const int zpin = A5;
void setup() {
Serial.begin(9600);
delay(15000);
}
void loop() {
int x = analogRead(xpin);
delay(50);
int y = analogRead(ypin);
delay(50);
int z = analogRead(zpin);
delay(50);
int thumb = analogRead(flex1);
int pointer = analogRead(flex2);
int middle = analogRead(flex3);
int nomx = x ;
int nomy = y ;
int nomz = z ;
Serial.print("\nThumb: ");
Serial.print(thumb);
Serial.print("\nPointer: ");
Serial.print(pointer);
Serial.print("\nMiddle: ");
Serial.print(middle);
Serial.print("\nNomX: ");
Serial.print(nomx);
Serial.print("\nNomY: ");
Serial.print(nomy);
Serial.print("\nNomZ: ");
Serial.println(nomz);
delay(500);
if ((thumb > 250 && thumb<499) && (pointer > 300 && pointer <399) && (middle >270 && middle
<350)) {
Serial.println("Gesture: HOLD");
}
else if (thumb >500 ) {
Serial.println("Gesture: HELLO");
}
else if (thumb > 400 && pointer <50 && middle < 50) {
Serial.println("Gesture: BYE");
}
else if (middle > 200 && middle <250) {
Serial.println("Gesture: LET'S PLAY");
}
else {
Serial.println("Gesture: HOLD");
}
}
