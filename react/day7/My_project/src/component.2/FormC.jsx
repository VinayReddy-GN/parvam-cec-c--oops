import React from "react";

export default function FormC({name,age,arr}) {
  return (
    <div>
      <form action="">
        <label htmlFor=""> Choose wheater:</label>
        <input
          type="text"
          name="name"
          id="name"
          placeholder="enter present wheater "
        />
        <h1>{name}</h1>
      </form>
    </div>
  );
}
