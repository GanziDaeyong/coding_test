def solution(record):
    
    di = {}
    res = []
    for v in record:
        splited = v.split(" ");
        if splited[0] == "Leave":
            continue
        (uid, name) = (splited[1], splited[2])
        di[uid] = name
        
    for v in record:
        splited = v.split(" ");
        (inst, uid) = (splited[0], splited[1])
        to_add = di[uid]
        if inst == "Enter":
            to_add += "님이 들어왔습니다."
            res.append(to_add)
        elif inst == "Leave":
            to_add += "님이 나갔습니다."
            res.append(to_add)
    
    return res