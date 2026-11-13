// Arduino 2〜11番ピンを使ったクリスマスイルミネーション

const int START_PIN = 2;  // 開始ピン
const int END_PIN = 11;   // 終了ピン
const int NUM_LEDS = END_PIN - START_PIN + 1; // LEDの総数 (10個)

void setup() {
  // 2〜11番ピンをすべて出力(OUTPUT)に設定
  for (int pin = START_PIN; pin <= END_PIN; pin++) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW); // 初期状態は消灯
  }
  
  // ランダム関数用のシード値を設定（未接続のA0ピンのノイズを利用）
  randomSeed(analogRead(A0));
}

void loop() {
  // パターン1: クリスマスカラーの交互点滅（赤と緑が交互に光るイメージ）
  alternateBlink(6, 400);

  // パターン2: 端から端へ流れる光（往復）
  waveEffect(4, 70);

  // パターン3: 星のようにランダムにキラキラ光る（トゥインクル）
  twinkleEffect(40, 100);

  // パターン4: 端から順番に点灯して溜まっていく動き
  fillUpEffect(3, 80);

  // パターン5: 全LEDでフィナーレの点滅
  allBlink(4, 250);
}

// --- 以下、各イルミネーションパターンの関数 ---

// 1. 奇数ピンと偶数ピンの交互点滅
void alternateBlink(int repeat, int delayTime) {
  for (int r = 0; r < repeat; r++) {
    // 偶数ピンON、奇数ピンOFF
    for (int pin = START_PIN; pin <= END_PIN; pin++) {
      digitalWrite(pin, (pin % 2 == 0) ? HIGH : LOW);
    }
    delay(delayTime);

    // 偶数ピンOFF、奇数ピンON
    for (int pin = START_PIN; pin <= END_PIN; pin++) {
      digitalWrite(pin, (pin % 2 != 0) ? HIGH : LOW);
    }
    delay(delayTime);
  }
  turnOffAll();
}

// 2. 光が左右に往復する（ナイトライダー風）
void waveEffect(int repeat, int delayTime) {
  for (int r = 0; r < repeat; r++) {
    // 2 -> 11 へ
    for (int pin = START_PIN; pin <= END_PIN; pin++) {
      digitalWrite(pin, HIGH);
      delay(delayTime);
      digitalWrite(pin, LOW);
    }
    // 10 -> 3 へ戻る
    for (int pin = END_PIN - 1; pin > START_PIN; pin--) {
      digitalWrite(pin, HIGH);
      delay(delayTime);
      digitalWrite(pin, LOW);
    }
  }
}

// 3. ランダムにキラキラ光る（イルミネーションの定番）
void twinkleEffect(int count, int delayTime) {
  for (int i = 0; i < count; i++) {
    int randomPin = random(START_PIN, END_PIN + 1); // 2〜11のランダムなピンを選択
    digitalWrite(randomPin, HIGH);
    delay(delayTime);
    digitalWrite(randomPin, LOW);
  }
  turnOffAll();
}

// 4. 光が順番に積み上がって全点灯する
void fillUpEffect(int repeat, int delayTime) {
  for (int r = 0; r < repeat; r++) {
    turnOffAll();
    // 順番に点灯
    for (int pin = START_PIN; pin <= END_PIN; pin++) {
      digitalWrite(pin, HIGH);
      delay(delayTime);
    }
    delay(200);
    // 順番に消灯
    for (int pin = START_PIN; pin <= END_PIN; pin++) {
      digitalWrite(pin, LOW);
      delay(delayTime);
    }
  }
}

// 5. すべてのLEDを同時に点滅
void allBlink(int repeat, int delayTime) {
  for (int r = 0; r < repeat; r++) {
    for (int pin = START_PIN; pin <= END_PIN; pin++) {
      digitalWrite(pin, HIGH);
    }
    delay(delayTime);
    
    turnOffAll();
    delay(delayTime);
  }
}

// すべてのLEDを消灯する補助関数
void turnOffAll() {
  for (int pin = START_PIN; pin <= END_PIN; pin++) {
    digitalWrite(pin, LOW);
  }
}