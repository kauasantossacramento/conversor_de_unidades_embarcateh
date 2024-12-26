# Tarefa 1: Conversor de Unidades de Medida 
Primeira tarefa em grupo do EmbarcaTech: Desenvolvendo um conversor de unidades de medida com auxílio do versionamento em git.

# Líder
Kauã Santos Sacramento 

# Desenvolvedores 
Hebert Santana
Igor Emanuel
Vitório Brendo
Gustavo Ferreira Santos

# Comandos Essenciais para Configuração do GIT

### **1. Configuração Inicial do Git**
- **`git config --global user.name "Seu Nome"`**  
  Define seu nome para os commits.
- **`git config --global user.email "seuemail@example.com"`**  
  Define seu e-mail para os commits.

### **2. Criando ou Inicializando um Repositório**
- **`git init`**  
  Inicializa um repositório Git em uma pasta.
- **`git clone <URL-do-repositório>`**  
  Clona um repositório remoto para o seu computador.

### **3. Adicionando Arquivos ao Controle de Versão**
- **`git status`**  
  Exibe o status do repositório (arquivos modificados, não rastreados, etc.).
- **`git add <nome-do-arquivo>`**  
  Adiciona um arquivo específico para a área de staging.
- **`git add .`**  
  Adiciona todos os arquivos modificados.

### **4. Salvando Alterações**
- **`git commit -m "Mensagem do commit"`**  
  Salva as alterações no histórico do repositório.

### **5. Trabalhando com Branches**
- **`git branch`**  
  Lista todas as branches.
- **`git branch <nome-da-branch>`**  
  Cria uma nova branch.
- **`git checkout <nome-da-branch>`**  
  Alterna para uma branch existente.
- **`git switch -c <nome-da-branch>`**  
  Cria e alterna para uma nova branch.

### **6. Integrando Alterações**
- **`git merge <nome-da-branch>`**  
  Combina alterações de outra branch com a branch atual.

### **7. Conectando ao GitHub**
1. **Crie um repositório no GitHub**  
   Sem criar README ou arquivos iniciais.
2. **Conecte o repositório local ao GitHub**  
   - **`git remote add origin <URL-do-repositório-GitHub>`**  
     Adiciona o repositório remoto.
   - **`git remote -v`**  
     Verifica a conexão com o repositório remoto.

### **8. Enviando Alterações para o GitHub**
- **`git push -u origin main`**  
  Envia as alterações da branch `main` para o repositório remoto (use `master` se a branch padrão for `master`).
- **`git push`**  
  Envia alterações futuras para o repositório remoto.

### **9. Baixando Alterações do GitHub**
- **`git pull`**  
  Atualiza o repositório local com alterações do repositório remoto.

### **10. Resolvendo Conflitos**
- Quando ocorrerem conflitos, edite os arquivos manualmente para resolver os conflitos marcados por `<<<<<<`, `======`, `>>>>>>`.
- Depois, use:
  - **`git add <arquivo>`**
  - **`git commit -m "Resolve conflito em arquivo"`**

### **11. Visualizando o Histórico de Commits**
- **`git log`**  
  Exibe o histórico de commits.
- **`git log --oneline`**  
  Exibe o histórico de forma compacta.

### **12. Outras Operações Úteis**
- **`git reset <commit-hash>`**  
  Desfaz alterações até um commit específico.
- **`git stash`**  
  Salva temporariamente alterações que ainda não foram commitadas.
- **`git stash pop`**  
  Aplica as alterações salvas anteriormente.

### 13. Fluxo de Trabalho para Colaboradores

- Fork do repositório (opcional): Colaboradores podem criar um fork e trabalhar em suas versões.
- Criar uma branch:
        **` git checkout -b nome-da-branch `**
- Criar uma nova branch para as alterações.
- Enviar alterações para a branch:
        **` git push origin nome-da-branch. `**
