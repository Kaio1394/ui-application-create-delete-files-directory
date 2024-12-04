# **File and Directory Manager**

This project provides a GUI for managing files and directories using Qt. The application includes two main tabs: **Create** and **Delete**, each with its specific functionality for creating or deleting files and directories.

---

## **Features**

- Create files or directories by specifying a path.
- Delete files or directories by specifying a path.
- Intuitive tab-based interface to toggle between creation and deletion modes.

---

## **Interface Overview**

### **1. Create Tab**

The **Create** tab allows users to create files or directories.

#### **Components:**
- **Label:** *"Path"*: Indicates the path input field.
- **Line Edit:** Input the path of the file or directory to be created.
- **Radio Buttons:**
  - **File:** Select to create a file.
  - **Directory:** Select to create a directory.
- **Button:** *"Create"* to execute the creation process.

![Create Tab](https://github.com/user-attachments/assets/33c1d8f2-8218-4f04-b9c4-30660e2f5032)


---

### **2. Delete Tab**

The **Delete** tab allows users to delete files or directories.

#### **Components:**
- **Label:** *"Path"*: Indicates the path input field.
- **Line Edit:** Input the path of the file or directory to be deleted.
- **Radio Buttons:**
  - **File:** Select to delete a file.
  - **Directory:** Select to delete a directory.
- **Button:** *"Delete"* to execute the deletion process.

![Delete Tab](https://github.com/user-attachments/assets/3163591c-c36a-4b42-9f7a-85a1345034e0)

---

### **3. Multiply Tab**

The **Multiply** tab allows users to delete/create multiplies files or directories.

#### **Components:**
- **Label:** *"Path"*: Indicates the path input field.
- **Edit Text:** Input the paths of the file or directory to be deleted.
- **Combobox:**
  - **File:** Select to delete a file.
  - **Directory:** Select to delete a directory.
- **Combobox:**
  - **Create:** Select to create a files/dirs.
  - **Delete:** Select to delete a files/dirs.
- **Button:** *"Send"* to execute the action.

---

## **Setup**

1. Clone the repository:
   ```bash
   git clone https://github.com/Kaio1394/ui-application-create-delete-files-directory

2. Open the project in Qt Creator.

3. Build and run the application.

## **How It Works**
Creating a File::
1. Go to the Create tab.
2. Enter the path in the input field.
3. Select the File radio button.
4. Click "Create".

Deleting a Directory:
1. Go to the Delete tab.
2. Enter the path in the input field.
3. Select the Directory radio button.
4. Click "Delete".

## **Requirements**
- Qt Creator 6.0 or higher.
- C++ compiler

### How to Use This Script
1. Copy the above content and save it as `README.md` in the root of your project.
2. Replace the placeholders (`path/to/...`) with the correct paths to your images.
3. Customize further if necessary.

Let me know if you need additional help! 😊
