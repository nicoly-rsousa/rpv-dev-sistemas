

export function App() {
  return (
    <>
      <form className="max-w-100 border bg-amber-50 flex-colo gap-4 p-4 rounded-lg">
        <label>
          Nome: 
          <input type="text" name="name" placeholder="Name" />
        </label>
        <label>
          Email
          <input type="email" className="bg-amber-100" placeholder="Email" />
        </label>
        <button type="submit">Enviar</button>
      </form>
    </>
  )
}

export default App;