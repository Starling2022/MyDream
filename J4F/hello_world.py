import time

# ĐIỀU CHỈNH THỜI GIAN DELAY GIỮA CÁC KÍ TỰ Ở ĐÂY:
delay_milliseconds = 13
mode = True  # chọn cách lấy dữ liệu, nếu mode = True, nhập từ bàn phím,
read_me = "Hello, I'm Gay:)"  # với mode = False, dòng lệnh chương trình chạy ở đây;

# Không sửa cái này
text = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!#$%&'()*+,-./:;<=>?@[]^_`{|}~ "


words = ""
val = ""
cnt = 0
if mode:
    words = input()
if not mode:
    words = read_me
for i in words:
    for j in text:
        if j == i or i == '\0' or i == words[-1]:
            time.sleep(delay_milliseconds / 1000)
            print(val + j)
            val += i
            break
        else:
            time.sleep(delay_milliseconds / 1000)
            print(val + j)
    cnt += 1
for i in range(delay_milliseconds * cnt):
    print(words)
    time.sleep(delay_milliseconds / 1000)
