

class person:
    def __init__(self,name,age) -> None:
        self.name = name
        self.age = age

    def personInfo(self):
        print(self.name, '-', self.age)


class company:
    def __init__(self,cname,cloc) -> None:
        self.cname = cname
        self.cloc = cloc

    def companyInfo(self):
        print(self.cname," - ", self.cloc)


class employee(person,company):
    def __init__(self, name, age,cname,cloc) -> None:
        # super().__init__(name, age,cname,cloc)  # this line raise a error
        
        person.__init__(self,name, age)
        company.__init__(self,cname, cloc)

        # multiple inheritance er somoy seperate korte hobe

    
emp = employee("salim",27, 'polygon','Dhaka')
emp.personInfo()
emp.companyInfo()