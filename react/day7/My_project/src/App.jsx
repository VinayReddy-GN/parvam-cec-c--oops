import React from 'react'
import ButtonC from './component.2/ButtonC'
import FormC from './component.2/FormC'
import Orderlist from './component.2/Orderlist'
import Unorderlist from './component.2/Unorderlist'

function App() {
  return (
    <>
    <h1>This is my project</h1>
    <center><h2>wheater conditions</h2></center>
    
    
   <Orderlist/>
   <Unorderlist/>
   <FormC name={"sunny"} age={12} arr={[1,2,3,5]}/>
   <ButtonC/>
    
    </>

    
  )
}

export default App