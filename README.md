# Ôn thi Ngôn ngữ lập trình C

Lộ trình 4 tuần (28/10 – 27/11/2026). Đang thực tập nên ngày thường học 1,5–2 giờ, cuối tuần 3–4 giờ.

## Lộ trình

| Tuần | Chủ đề | Bài cần luyện được | Mục tiêu |
|------|--------|--------------------|----------|
| 1 (28/10–3/11) | Ch1 + Ch2: Big-O, kiểu dữ liệu, `scanf`/`printf` (`%lld`, `%.2f`), if/switch, vòng lặp | Số nguyên tố, ước/UCLN/BCNN, tách chữ số, đảo số, số hoàn hảo, Fibonacci, in hình tam giác/hình chữ nhật bằng `*`, đếm/tổng theo điều kiện | ~35 bài |
| 2 (4/11–10/11) | Ch3 hàm và đệ quy + Ch4.1 mảng 1 chiều | Hàm `isPrime`, `gcd`, `reverse`; đệ quy (giai thừa, tổ hợp, tháp Hà Nội); mảng: min/max, đếm tần suất, chèn/xóa phần tử, sắp xếp (bubble, selection, insertion, `qsort`), tìm kiếm nhị phân, mảng cộng dồn | ~40 bài |
| 3 (11/11–17/11) | Ch4.2 ma trận + xâu ký tự + Ch4.3 struct | Ma trận: tổng hàng/cột, đường chéo, chuyển vị, nhân ma trận, xoắn ốc. Xâu: chuẩn hóa họ tên, đếm từ, đảo xâu, xâu đối xứng, tần suất ký tự. Struct: mảng sinh viên/nhân viên, sắp xếp theo nhiều tiêu chí | ~40 bài |
| 4 (18/11–24/11) | Thi thử và lấp lỗ hổng | Mỗi ngày 1 đề thi thử, bấm giờ như thi thật, trộn bài các chương; buổi sau xem lại bài sai | 5–6 đề |
| 25–27/11 | Nhẹ nhàng trước thi | Làm lại bài từng sai, đọc checklist lỗi, ngủ đủ | Không học phần mới |

## Cấu trúc repo

```
tuan1-co-ban/              Ch1 + Ch2
tuan2-ham-mang/            Ch3 + Ch4.1
tuan3-matran-xau-struct/   Ch4.2 + Ch4.3
tuan4-thi-thu/             mỗi đề một thư mục: de01/, de02/, ...
bai-sai/                   sổ bài sai (README.md) để ôn lại
```

Đặt tên file theo số thứ tự và dạng bài, ví dụ `01_so_nguyen_to.c`, `02_ucln_bcnn.c`. Đầu mỗi file chép đề bài vào comment.

Biên dịch và chạy:

```bash
gcc -Wall -Wextra -o bai bai.c && ./bai
```

## Quy tắc khi bí bài

1. Tự nghĩ ít nhất **20 phút**: viết ra input/output, thử tay vài ví dụ nhỏ.
2. Vẫn chưa ra thì hỏi Claude **gợi ý tư duy**, không xin code.
3. Làm được rồi thì ghi bài đó vào [bai-sai/README.md](bai-sai/README.md) để làm lại sau.

## Checklist lỗi hay gặp (bản nháp, bổ sung dần)

- [ ] `scanf` quên `&`; dùng sai định dạng (`%d` cho `long long` → phải `%lld`; `double` đọc bằng `%lf`)
- [ ] Tràn số: tích/giai thừa/tổng lớn phải dùng `long long`
- [ ] Chia số nguyên: `5/2 == 2`, muốn số thực phải ép kiểu `(double)a/b`
- [ ] So sánh `=` thay vì `==`; dấu `;` thừa sau `if`/`for`
- [ ] Chỉ số mảng chạy từ `0` đến `n-1`; vòng lặp `<=` gây tràn mảng
- [ ] Chưa khởi tạo biến đếm/tổng/min/max
- [ ] `switch` quên `break`
- [ ] Xâu: chừa chỗ cho `'\0'`; `fgets` giữ lại `'\n'`; trộn `scanf` rồi `fgets` phải xóa `'\n'` thừa
- [ ] Đệ quy thiếu điều kiện dừng
- [ ] Hàm so sánh của `qsort` trả về sai chiều
- [ ] In kết quả đúng định dạng đề yêu cầu (dấu cách, xuống dòng, `%.2f`)
