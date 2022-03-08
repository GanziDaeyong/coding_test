# nameJeom made by GanziDaeyong


############################################################################################
# eng2kor by RavenKyu
# https://github.com/RavenKyu/eng2kor.git
BASE_CODE, CHO_CODE, JUNG_CODE, MAX_CODE = 44032, 588, 28, 55203
CHO_LIST = list('ㄱㄲㄴㄷㄸㄹㅁㅂㅃㅅㅆㅇㅈㅉㅊㅋㅌㅍㅎ')
JUNG_LIST = list('ㅏㅐㅑㅒㅓㅔㅕㅖㅗㅘㅙㅚㅛㅜㅝㅞㅟㅠㅡㅢㅣ')
JONG_LIST = list(' ㄱㄲㄳㄴㄵㄶㄷㄹㄺㄻㄼㄽㄾㄿㅀㅁㅂㅄㅅㅆㅇㅈㅊㅋㅌㅍㅎ')

KORS = list('ㄱㄲㄳㄴㄵㄶㄷㄹㄺㄻㄼㄽㄾㄿㅀㅁㅂㅄㅅㅆㅇㅈㅊㅋㅌㅍㅎㅏㅐㅑㅒㅓㅔㅕㅖㅗㅘㅙㅚㅛㅜㅝㅞㅟㅠㅡㅢㅣ')
ENGS = ['r', 'R', 'rt', 's', 'sw', 'sg', 'e', 'f', 'fr', 'fa', 'fq', 'ft', 'fx', 'fv', 'fg', 'a', 'q', 'qt', 't',
        'T', 'd', 'w', 'c', 'z', 'x', 'v', 'g',
        'k', 'o', 'i', 'O', 'j', 'p', 'u', 'P', 'h', 'hk', 'ho', 'hl', 'y', 'n', 'nj', 'np', 'nl', 'b', 'm', 'ml', 'l']
KOR_ENG_TABLE = dict(zip(KORS, ENGS))


def combine(cho, jung, jong):
    res = BASE_CODE
    res += 0 if cho == ' ' else CHO_LIST.index(cho) * CHO_CODE
    res += 0 if jung == ' ' else JUNG_LIST.index(jung) * JUNG_CODE
    res += JONG_LIST.index(jong)
    return chr(res)


def split(kor):
    code = ord(kor) - BASE_CODE
    if code < 0 or code > MAX_CODE - BASE_CODE:
        if kor == ' ': return None
        if kor in CHO_LIST: return kor, ' ', ' '
        if kor in JUNG_LIST: return ' ', kor, ' '
        if kor in JONG_LIST: return ' ', ' ', kor
        return None
    return CHO_LIST[code // CHO_CODE], JUNG_LIST[(code % CHO_CODE) // JUNG_CODE], JONG_LIST[
        (code % CHO_CODE) % JUNG_CODE]


def korSpl(text):
    rst_list = []
    for ch in text:
        spl = split(ch)
        [rst_list.append(v) for v in spl if v != ' ']
    return rst_list


###############################################################################################

import time


def Intro1():
    print("\n★상대와의 이름 점 보기★\n")
    time.sleep(0.7)
    print("[주의] 지문이 다 나오기 전에 입력하지 마세요.")
    time.sleep(0.7)
    print("[방법] 내 이름을 입력한 후, 상대 이름을 입력합니다.")
    time.sleep(0.7)
    print("[방법] 이름 입력 후, 엔터를 입력해주세요.")
    time.sleep(0.7)
    print("[주의] 나와 상대의 이름 길이가 같아야 합니다.")
    time.sleep(0.7)
    print("[예시] 정대용(엔터 꾹)\n")
    time.sleep(0.7)
    first = input("당신의 이름을 입력해주세요: ")
    second = input("상대의 이름을 입력해주세요: ")
    return first, second


def Intro2():
    print("\n★최악의 커플과 최고의 커플!★\n")
    time.sleep(0.7)
    print("[주의] 지문이 다 나오기 전에 입력하지 마세요.")
    time.sleep(0.7)
    print("[방법] 우선 몇 명이 참여할 것인지 인원 수를 입력해주세요.")
    time.sleep(0.7)
    print("[방법] 그 후, 그 인원만큼 이름을 입력해주세요.")
    time.sleep(0.7)
    print("[예시] 3(엔터) 유지승(엔터) 정대용(엔터) 정서연(엔터)\n")
    time.sleep(0.7)
    num = input("참여 인원을 입력해주세요: ")
    members = []
    for i in range(int(num)):
        print(i + 1, "번째 사람을 입력해주세요", "(", i + 1, "/", num, "): ", end=" ")
        member = input()
        members.append(member)
    return members


def FindDic(splitted):
    dic = {'ㅁ': 3, 'ㅠ': 3, 'ㅊ': 3, 'ㅇ': 1, 'ㄷ': 2, 'ㄹ': 3, 'ㅎ': 3, 'ㅗ': 2, 'ㅑ': 3, 'ㅓ': 2, 'ㅏ': 2,
           'ㅣ': 1, 'ㅡ': 1, 'ㅜ': 2, 'ㅐ': 3, 'ㅔ': 3, 'ㅂ': 3, 'ㄱ': 1, 'ㄴ': 1, 'ㅅ': 2, 'ㅕ': 3, 'ㅍ': 4,
           'ㅈ': 2, 'ㅌ': 3, 'ㅛ': 3, 'ㅋ': 3, 'ㅃ': 6, 'ㅉ': 4, 'ㄸ': 4, 'ㄲ': 2, 'ㅆ': 4, 'ㅒ': 4, 'ㅖ': 4,
           'ㅝ': 4, 'ㅟ': 2, 'ㅞ': 5, 'ㅘ': 4, 'ㅚ': 3, 'ㅙ': 5, 'ㅢ':2
           }

    char_to_int = []
    [char_to_int.append(dic.get(char)) for char in splitted]
    return char_to_int


def split_token(word):
    return list(word)


def calculate(char_list):
    sum = 0
    for int in char_list:
        sum += int
    return sum


def getPass(pass1):
    pass_rst = []
    for i in range(len(pass1) - 1):
        pass_rst.append((pass1[i] + pass1[i + 1]) % 10)
    if len(pass_rst) == 2:
        return pass_rst
    else:
        return getPass(pass_rst)


def run(first, second):
    # split tokens
    first_list = split_token(first)
    second_list = split_token(second)

    # get the first pass
    pass1 = []
    for i in range(len(first_list)):
        concat_list = korSpl(first_list[i])

        pass1.append(calculate(FindDic(concat_list)))
        concat_list = korSpl(second_list[i])
        pass1.append(calculate(FindDic(concat_list)))

    rst = getPass(pass1)
    output = str(rst[0]) + str(rst[1])
    output = str(int(output))
    return output


def Rst1():
    first, second = Intro1()
    output1 = run(first, second)
    output2 = run(second, first)
    print("\n" + first + " --" + output1 + "%-->> " + second)
    print(first + " <<--" + output2 + "%-- " + second + "\n")


def Rst2():
    members = Intro2()
    rst_list = []
    find = []
    for i in range(len(members)):
        each_list = []
        for j in range(len(members)):
            if j > i:
                output1 = run(members[i], members[j])
                output2 = run(members[j], members[i])
                avg = (float(output1) + float(output2)) / (2 * 1.0)
                each_list.append(avg)
                find.append(avg)
        rst_list.append(each_list)

    min_x = 0
    min_y = 1
    min = rst_list[0][0]
    max_x = 0
    max_y = 1
    max = rst_list[0][0]
    for i in range(len(rst_list)):
        for j in range(len(rst_list[i])):
            if rst_list[i][j] < min:
                min = rst_list[i][j]
                min_x = i
                min_y = i + j + 1
            if rst_list[i][j] > max:
                max = rst_list[i][j]
                max_x = i
                max_y = i + j + 1

    print("\n최악의 궁합은: " + members[min_x] + "-" + members[min_y] + ", 평균 애정도: ", min, "%")
    print("최고의 궁합은: " + members[max_x] + "-" + members[max_y] + ", 평균 애정도: ", max, "%\n")


def menu():
    print("===============================\n")
    print("[메뉴] \n1. 나와 상대의 애정도 보기\n2. 최악의 커플과 최고의 커플\n3. 종료하기")
    command = input("\n원하는 번호를 입력해주세요: ")
    return command


#############int main(1)##############
if __name__ == '__main__':
    print("===============================")
    print("숭이네 이름점집에 오신 걸 환영합니다!")
    print("===============================\n")
    while (True):
        time.sleep(1)
        command = menu()
        if command == "1":
            Rst1()
        elif command == "2":
            Rst2()
        else:
            break
