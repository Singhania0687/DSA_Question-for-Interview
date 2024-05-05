function automail(to){
       return function(subject){
        return function (body){
            return(
                
                `To: ${to}
                Subject: ${subject}
                Body: ${body}`
            )
        }
       }
}
console.log(automail("abhirudra0687@gmail.com")("selected")("You are called on to join as soon as possible"))
// using ES6 module
t=(to=>subject=>body=>
    `To: ${to}
    Subject: ${subject}
    Body: ${body}`)
    console.log(t("XXXXXXXXXXXXXXXXXXXXXXX")("selected")("You are called on to join as soon as possible"))