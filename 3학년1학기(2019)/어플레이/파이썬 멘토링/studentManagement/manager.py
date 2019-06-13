import student


class Manager:
    list = []

    def register(self):
        print('--- �л� ��� ---')
        print('�й� : ', end='')
        num = int(input())
        print('�̸� : ', end='')
        name = input()
        self.list.append(student.Student(num, name))
        print('��ϵǾ����ϴ�.')

    def name_search(self):
        print('�̸� �˻�: ', end='')
        name = input()
        for i in self.list:
            if name == i.get_name():
                print('�й���', i.get_num())
                return
        print('�����ϴ�.')

    def print_all(self):
        if len(self.list) == 0:
            print('��ϵ� �л��� �����ϴ�.')
            return

        for i in self.list:
            print('�й�:', i.get_num(), '�̸�:', i.get_name())


manager = Manager()
while True:
    print('1 ��ü��� ��ȸ, 2 �߰�, 3 �˻� >> ', end='')
    num = int(input())
    if num == 1:
        manager.print_all()
    elif num == 2:
        manager.register()
    elif num == 3:
        manager.name_search()
    else:
        print('�ٽ� �Է����ּ���')