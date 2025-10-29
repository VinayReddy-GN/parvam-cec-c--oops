import React from "react";
import { createBrowserRouter, RouterProvider } from "react-router-dom";
import Home from "./pages/Home";
import About from "./pages/About";
import Contact from "./pages/Contact";
import Careers from "./pages/Careers";
import NotFound from "./pages/NotFound";
import Projects from "./pages/Projects";
import Services from "./pages/Services";
import Layout from "./components/Layout";
const router = createBrowserRouter([
  {
    path: "/",
    element: <Layout />,
    errorElement: <NotFound />,
    children: [
      {
        index:true,
        path: "/home",
        element: <Home />,
      },
      {
        path: "/about",
        element: <About />,
      },
      {
        path: "/contact",
        element: <Contact />,
      },
      {
        path: "/careers",
        element: <Careers />,
      },
      {
        path: "/notfound",
        element: <NotFound />,
      },
      {
        path: "/projects",
        element: <Projects />,
      },
      {
        path: "/services",
        element: <Services />,
      },
    ],
  },
]);
function App() {
  return <RouterProvider router={router} />;
}

export default App;
