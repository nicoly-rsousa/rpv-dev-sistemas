import { BrowserRouter as Router, Routes, Route, NavLink } from "react-router-dom";
import "./App.css";
import Sobre from "./pages/Sobre";
import Home from "./pages/Home";


function App() {
    return (
        <Router>
            <header>
                <nav className="navbar">
                    <div className="logo">Logo</div>
                    <NavLink to="/" className="navitem">Inicio</NavLink>
                    <NavLink to="/sobre" className="navitem">Sobre</NavLink>
                    <NavLink to="/servicos" className="navitem">Serviços</NavLink>
                    <NavLink to="/portfolio" className="navitem">Portfolio</NavLink>
                    <NavLink to="/contato" className="navitem">Contato</NavLink>

                </nav>
            </header>
            <main>
                <Routes>
                    <Route path="/" element={<Home/>} />
                    <Route path="/sobre" element={<Sobre/>} />
                    <Route path="/servicos" element={<Servicos/>} />
                    <Route path="/portfolio" element={<Portfolio/>} />
                    <Route path="/contato" element={<Contato/>} />
                </Routes>
            </main>
            </Router>
    
        
    );
}


// Página Sobre exemplo
function Servicos() {
  return (
    <section className="servicos">
      <h1>Nossos Serviços</h1>
      <p className="subtitle">O que oferecemos · Services</p>
      <p className="description">
        Oferecemos desenvolvimento web, design de interfaces, consultoria técnica    
        e suporte contínuo. Cada projeto é tratado com atenção única, garantindo
        entregas dentro do prazo e com a mais alta qualidade para cada cliente.
      </p>
    </section>
  );
}

function Portfolio() {
    return <h1>Nosso Portfolio</h1>;
}
function Contato() {
    return <h1>Entre em contato conosco</h1>;
}
export default App;