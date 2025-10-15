const setDateTime =()=>{
    const now =new Date();
    const date = now.toLocaleDateString();
    const time = now.toLocaleTimeString({hourcycle:"h12"});
    console.log(time);
    document.getElementById("time").textContent=`time:${time}`;
    document.getElementById("date").textContent=`date:${date}`;
};
setDateTime();
 setInterval(setDateTime,1000);