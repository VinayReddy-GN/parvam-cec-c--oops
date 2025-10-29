import React from 'react'
import Footer from './Footer'
import SiteNavbar from './SiteNavbar'
import { Outlet } from 'react-router-dom'

const Layout = () => {
  return (
    <div>
        <SiteNavbar />
        <Outlet/>
        <Footer/>
    </div>
  )
}

export default Layout