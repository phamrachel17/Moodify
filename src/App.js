import React from "react";
import Login from "./components/Login";
import './App.css';
import { RegisterButton } from './components/RegisterButton'



function App() {
  return (
    <div className="App">
      <div id="content">
        <Login></Login>
      </div>
    </div>
  );
}

export default App;
