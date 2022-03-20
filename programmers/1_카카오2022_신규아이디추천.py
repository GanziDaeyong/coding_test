def solution(new_id):
    #1
    new_id = new_id.lower()
    
    #2
    allow_list = ['-', '_', '.']
    new_id_after2 = ""
    for v in new_id:
        if v.isalnum() or v in allow_list:
            new_id_after2 += v
    new_id = new_id_after2
    
    #3
    before = new_id
    while True:
        after = before.replace("..", ".")
        if before == after:
            new_id = after
            break
        before = after
    
    #4
    before = new_id
    after = before
    while True:
        if before.startswith('.'):
            after=before[1:]
        if before.endswith('.'):
            after=before[:len(before)-1]
        if before == after:
            new_id = after
            break
        before = after
        
    #5
    if new_id == "":
        new_id += 'a'
        
    #6
    if len(new_id)>=16:
        new_id = new_id[:15]
    
        before = new_id
        after = before
        while True:
            if before.endswith('.'):
                after=before[:-1]
            if before == after:
                new_id = after
                break
            before = after
        
    
    
    #7
    if len(new_id) <=2:
        ch = new_id[-1]
        while(len(new_id)<3):
            new_id+=ch
    
    answer = new_id
    return answer