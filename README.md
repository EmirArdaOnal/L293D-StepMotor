# L293D-StepMotor
Stepper motor control made using L293D


# Code
İlk olarak, AFMotor.h kütüphanesini projeye dahil ediyoruz. Bu kütüphane, motor kontrolü için gerekli işlevleri sağlar. Ardından, AF_Stepper sınıfından bir motor nesnesi oluşturuyoruz. Bu nesne, 48 adım/devir ve 2 numaralı motor bağlantı pini üzerinden motoru kontrol etmek için kullanılır.

setup() fonksiyonunda, motor hızını setSpeed() fonksiyonu ile 100 adım/saniye olarak ayarlıyoruz.

loop() fonksiyonu sürekli olarak tekrarlanır. İçinde iki farklı for döngüsü bulunur.

a. İlk for döngüsü, motoru ileri yönde 100 adım hareket ettirir. i değişkeni 0'dan başlayarak 99'a kadar artar. Her adımda motor.step() fonksiyonu kullanılarak motor 1 adım ileri hareket ettirilir. Ardından, delay(10) ile 10 milisaniye bekleme yapılır.

b. İkinci for döngüsü, motoru geri yönde 100 adım hareket ettirir. Yine i değişkeni 0'dan başlayarak 99'a kadar artar. Her adımda motor.step() fonksiyonu kullanılarak motor 1 adım geri hareket ettirilir. Sonra, delay(10) ile 10 milisaniye bekleme yapılır.

İki döngü arasında delay(1000) kullanılarak 1 saniye bekleme yapılır.

Bu döngüler, motoru belirli adım sayıları ve sürelerle ileri ve geri yönde hareket ettirir. Motorun ileri yönde 100 adım, ardından geri yönde 100 adım atmasını sağlar. İki hareket arasında 1 saniye bekleme yapılır ve işlem tekrarlanır.

Bu şekilde, kod step motoru 100 adım ileri ve 100 adım geri hareket ettirerek sürekli olarak döngü içinde çalışır.



# Connection

1. İlk olarak, L293D shield'i Arduino veya mikrodenetleyici kartınıza doğru şekilde yerleştirin. Shield, Arduino üzerindeki pimlere doğru şekilde oturmalıdır.

2. Step motorların bağlantısı:
   - Shield üzerinde 2 adet step motor kontrol pimi vardır: STEP1 ve STEP2. Her biri bir step motoru kontrol etmek için kullanılır.
   - İlgili step motorun adım (STEP), yön (DIR) ve gerekirse diğer kontrol hatlarını uygun şekilde L293D shield üzerindeki STEPx ve DIRx pinlerine bağlayın.
   - Step motorun güç (+) ve toprak (-) hatlarını beslemek için uygun kaynakları sağlayın. Bu genellikle Arduino veya harici bir güç kaynağı olabilir.

3. Arduino'nuzda ilgili kütüphaneleri dahil edin ve gerekli kodu yazarak motorları kontrol edebilirsiniz. L293D shield üzerindeki pimler, Arduino pim numaralarına karşılık gelen GPIO pinleri olarak kullanılabilir.
