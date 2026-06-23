//How await Works
//await pauses execution inside an async function until the Promise resolves.
function getData() {
     return new Promise(resolve =>{
        setTimeout(()=>{
            resolve("Data received");
        },3000);
     });
}
async function fetchData() {
    console.log("fetching data...");
    const data = await getData(); //waits for getData to resolve 
    console.log(data);

}
fetchData();