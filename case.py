
score=90

match score:
    case score if score >= 90:
        print("grade is A")
    case score if score >= 75:
        print("grade is B")
    case score if score >= 60:
        print("grade is C")
    case _:
        print("grade is D")