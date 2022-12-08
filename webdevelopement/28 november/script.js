document.onkeydown = (e) => {
    if (e.ctrlKey && e.key === 's') {
      
      alert('Can not save this page');
      e.preventDefault();
    }
  }