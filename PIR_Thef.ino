// Khai báo các chân kết nối cảm biến PIR và cảnh báo
const int pirPin = 2;    // Chân kết nối cảm biến PIR
const int alarmPin = 3;  // Chân kết nối cảnh báo (ví dụ: đèn LED)

void setup() {
  pinMode(pirPin, INPUT);     // Thiết lập chân kết nối cảm biến PIR là đầu vào
  pinMode(alarmPin, OUTPUT);  // Thiết lập chân kết nối cảnh báo là đầu ra
  Serial.begin(9600);         // Khởi động kết nối Serial (tùy chọn)
}

void loop() {
  int motion = digitalRead(pirPin);  // Đọc giá trị từ cảm biến PIR

  if (motion == HIGH) {
    // Nếu phát hiện chuyển động, thực hiện hành động cảnh báo
    digitalWrite(alarmPin, HIGH);  // Bật cảnh báo (ví dụ: đèn LED sáng)
    Serial.println("Motion detected!");  // Gửi thông báo qua Serial (tùy chọn)
    delay(1000);  // Dừng 1 giây để tránh cảnh báo liên tục
  } else {
    // Nếu không có chuyển động, tắt cảnh báo
    digitalWrite(alarmPin, LOW);  // Tắt cảnh báo (ví dụ: đèn LED tắt)
  }
}
