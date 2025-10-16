import './App.css'
import { useState } from "react";

function App() {
  const [count, setCount] =useState(0)

  return (
    <>
      <h1>counter app</h1>
      <h3>count:{count}</h3>
      <button onClick={()=>setCount(count+1)}>increment</button>
      <button onClick={()=>setCount(count-1)}>decrement</button>
      <button onClick={()=>setCount(0)}>reset</button>



    </>
  );
}

export default App
