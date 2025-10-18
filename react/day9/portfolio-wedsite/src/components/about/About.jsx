import React from "react";
import "./About.css";
import theme_pattern from "../../assets/theme_pattern.svg";
import about_profile from "../../assets/about_profile.svg";

const About = () => {
  return (
    <div id="about" className="about container my-5 bg-custom text-white bg-secondary">
      {/* Title Section */}
      <div className="about-title text-center position-relative mb-5">
        <h1 className="px-3 display-1 fw-semibold">About Me</h1>
        <img
          src={theme_pattern}
          alt="Pattern"
          className="position-absolute"
          style={{ top: "70px", right: 0, zIndex: -1 }}
        />
      </div>

      {/* Main Sections */}
      <div className="row about-sections gx-5 gy-5">
        {/* Left Image */}
        <div className="col-lg-6 text-center about-left">
          <img src={about_profile} alt="Profile" className="img-fluid" />
        </div>

        {/* Right Content */}
        <div className="col-lg-6 d-flex flex-column gap-5 about-right text-center text-lg-start">
          {/* Paragraphs */}
          <div className="about-para d-flex flex-column gap-3 fs-4 fw-medium">
            <p>
              Lorem ipsum dolor sit amet consectetur adipisicing elit. Magnam,
              nam vel. Animi nobis officia corporis corrupti tempora, rem
              doloremque necessitatibus?
            </p>
            <p>
              Lorem ipsum dolor sit amet, consectetur adipisicing elit. Minus
              impedit in cupiditate neque nostrum tempora, totam ratione dicta
              ullam excepturi.
            </p>
          </div>

          {/* Skills */}
          <div className="about-skills d-flex flex-column gap-4">
            {[
              { name: "HTML & CSS", width: "50%" },
              { name: "React JS", width: "70%" },
              { name: "JavaScript", width: "60%" },
              { name: "Next JS", width: "50%" },
            ].map((skill, index) => (
              <div
                key={index}
                className="about-skill d-flex align-items-center gap-4 hover-scale"
              >
                <p className="min-w-150 fs-4 fw-medium mb-0">{skill.name}</p>
                <hr
                  className="flex-grow-1 border-0"
                  style={{
                    height: "8px",
                    borderRadius: "50px",
                    background:
                      "linear-gradient(264deg, #DF8908 -5.09%, #B415FF 106.28%)",
                    width: skill.width,
                  }}
                />
              </div>
            ))}
          </div>
        </div>
      </div>

      {/* Achievements */}
      <div className="about-achievements d-flex flex-wrap justify-content-around align-items-center my-5 gap-4 text-center">
        {[
          { value: "10+", label: "Years Of Experience" },
          { value: "90+", label: "Projects Completed" },
          { value: "15+", label: "Happy Clients" },
        ].map((item, index) => (
          <React.Fragment key={index}>
            <div className="about-achievement d-flex flex-column align-items-center gap-2 hover-scale">
              <h1 className="display-4 fw-bold text-gradient">{item.value}</h1>
              <p className="fs-5 fw-medium">{item.label}</p>
            </div>
            {index < 2 && (
              <hr className="d-none d-md-block" style={{ height: "130px" }} />
            )}
          </React.Fragment>
        ))}
      </div>
    </div>
  );
};

export default About;