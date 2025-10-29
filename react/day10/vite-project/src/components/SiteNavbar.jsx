import React from "react";
import { NavLink } from "react-router-dom";

const SiteNavbar = () => {
  return (
    <div>
      <NavLink to="/home">Home</NavLink>
      <NavLink to="/about">About</NavLink>
      <NavLink to="/contact">Contact</NavLink>
      <NavLink to="/careers">Careers</NavLink>
      <NavLink to="/projects">Projects</NavLink>
      <NavLink to="/services">Services</NavLink>
    </div>
  );
};

export default SiteNavbar;
