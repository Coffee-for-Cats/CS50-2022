document.querySelector("#nameform").addEventListener("submit", (e)=> {
    let name = document.querySelector("#name").value
    alert(`Hello, ${name}`)

    e.preventDefault()
})