//  function Composition
function Add(a,b){
    return a+b;
}
function Sq(a){
    return a*a;
}
console.log(Sq(Add(2,3)));
// Now generating through function composition
          
    function compose(fa,fb)
        {   return function(a, b){
            return fa(fb(a, b));
        }
    }
    f=(fa,fb)=>(a,b)=>fa(fb(a, b));

console.log(compose(Sq, Add)(2, 3));
console.log(f(Sq, Add)(2, 3));