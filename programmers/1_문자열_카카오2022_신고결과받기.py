def solution(id_list, report, k):
    
    report = list(set(report))
    
    setLi = {}
    for v in id_list:
        setLi[v]=[0,0]
    for v in report:
        bad = v.split(" ")[1]
        setLi[bad][0]+=1
    
    for v in report:
        good = v.split(" ")[0]
        bad = v.split(" ")[1]
        if setLi[bad][0]>=k:
            setLi[good][1]+=1

    answer = []
    for (v, li) in setLi.items():
        answer.append(li[1])
    
    return answer