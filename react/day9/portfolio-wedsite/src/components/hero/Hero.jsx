
import React from "react";
import "./Hero.css";
import profile_img from "../../assets/profile_img.svg";
import AnchorLink from "react-anchor-link-smooth-scroll";


const Hero = () => {
  return (
    <div id="home"className="hero bg-info" >
      <img src={profile_img} alt=""  />
      <h1>
        <span>I'm John Doe,</span> frontend development based in INDIA.
      </h1>
      <p>
        Lorem ipsum, dolor sit amet consectetur adipisicing elit. Ipsum, sint.
        Lorem ipsum, dolor sit amet consectetur adipisicing elit.
      </p>
      <div className="hero-action">
        <div className="hero-connect">
          <AnchorLink className="anchor-link" offset={50} href="#contact">
            Connect with me
          </AnchorLink>
        </div>
        <div className="hero-resume">My resume</div>
      </div>
    </div>
  );
};


export default Hero;
