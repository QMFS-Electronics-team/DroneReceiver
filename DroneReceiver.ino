
// Setup variables

// Variables to capture random numbers
int randomNumberOne;
int randomNumberTwo;
int randomNumberThree;

// Maximum value for a random number
int maxValue = 50;

// String variables to capture the converted int values
String one;
String two; 
String three;

// Holds the concatenated output
String output;

// Char array will be used for the write output 
char charArray[12];

void setup() {
  // Baud rate @ 9600
  Serial.begin(9600); 
  // Setup random
  randomSeed(analogRead(0));
}

void loop() { // - Emulate random data any random number 0 to 50
  // Get the random numbers
  randomNumberOne = random(maxValue);
  randomNumberTwo = random(maxValue); 
  randomNumberThree = random(maxValue); 

  // Get the string values of the random numbers
  one = String(randomNumberOne);
  two = String(randomNumberTwo);
  three = String(randomNumberThree);

  // Concatenate the strings for the output desired
  output = one +","+ two +","+ three + "\n\r";

  // Put the concatenated string into the char array
  output.toCharArray(charArray,12);

  // Write to serial 
  Serial.write(charArray);

  // Wait for a second before next transmission
  delay(1000);
}
