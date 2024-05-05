function add(a,b)
 {
    return a+b;
 }
 function avg(a,b,sm){
    return sm(a, b)/2;
 }
 console.log(avg(2, 3, add));