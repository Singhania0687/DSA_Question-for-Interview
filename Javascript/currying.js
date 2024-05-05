function sum(a){
    return function(b){
        return function(c){
            return a+b+c
        }
    }
}
console.log(sum(1)(2)(3))
// now using ES6
t=a=>b=>c=>a+b+c;
console.log(t(10)(23)(31))