obj={
    name:'Abhishek',
    age:23,
    city:'Delhi',
    country:'India',
    social:{
        fb:{
            ac1:'something@gmail.com',
            ac2:'XXXXXXXXXXXXXXXXXXX'
        },
        insta:{
            ac1:'changed@',
            ac2:'jaisiyaRam'
        }
    }
}
// shallow copy -> it is valid for a single level  i.e if an object doesn't have level inside it
// shallow copy is not a good practice
obj1=obj;
console.log(obj1.age)
obj1.age=24;
console.log(obj.age)
 
// another way to make deep copy but it is valid for a single level  i.e if an object doesn't have level inside it
obj2={...obj}
obj2.age=25;
// cout<<" obj original copy"<<endl;
console.log(obj)
console.log(obj2)

// deep copy
copyOfJsonString=JSON.stringify(obj);
copyOfObject=JSON.parse(copyOfJsonString);
copyOfObject.name="Arpita";
console.log("Original object --------- \n\t")
console.log(obj)
console.log(" copy of original object ----------- \n\t ")
console.log(copyOfObject)
// deep copy
function deepCopy(obj){
    if(typeof obj!=='object' || obj===null) 
         return obj;
    let newObj={};
    for(let key in obj){
        newObj[key]=deepCopy(obj[key]);
    }
    return newObj;
}
deepCopy(obj);
console.log("Deep Copy object --->   ")
console.log(obj)