mytext=document.getElementById('my-text')
// closure function
function resizer(size){
    return function(){
        mytext.style.fontSize=size+'px'
    }

}
resizeByxt=(size)=>{
   return( mytext.style.fontSize=size+'px')
}
resizeBy5=resizeByxt(5)
resizeBy10=resizer(10)
resizeBy20=resizer(20)
resizeBy30=resizer(30)
resizeBy40=resizer(40)
resizeBy50=resizer(50)




myelement=document.getElementById('btn').addEventListener('click',resizeBy5)