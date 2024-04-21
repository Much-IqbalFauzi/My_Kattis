class exs:
    def __init__(self):
        print('=== Tugas 1 ===\n1. Perulangn kata\n2. List data\n3. Keluar\n')

    def val(self):
        return input('Masukkan pilihan anda : ')

    def perulangan_kata(self):
        self.x = input('Masukkan sebuah kata : ')
        self.y = int(input('Masukkan sebuah angaka : '))
        print((self.x+'\n')*self.y)

    def list_data(self):
        self.a = int(input('Masukkan jumlah data yang akan dimasukkan : '))
        self.l = [input('input : ') for _ in range(self.a)]
        print('Anda menginput',', '.join(self.l),end='\n\n')

if __name__ == '__main__':
    while True:
        men = exs()
        x = men.val()
        if x=='1':
            men.perulangan_kata()
        elif x=='2':
            men.list_data()
        else:
            print('Terima kasih')
            break