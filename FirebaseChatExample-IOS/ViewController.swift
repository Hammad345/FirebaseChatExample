//
//  ViewController.swift
//  FirebaseChatExample-IOS
//
//  Created by wasiq on 11/09/2023.
//

import UIKit
import FirebaseCore
import FirebaseDatabase

class ViewController: UIViewController , UITableViewDataSource, UITableViewDelegate {
    
    @IBOutlet weak var tableView: UITableView!

    var todoList = [Todo]()

    override func viewDidLoad() {
        super.viewDidLoad()
        tableView.delegate = self
        tableView.dataSource = self
        tableView.separatorStyle = .none

        // Do any additional setup after loading the view.
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        loadData()
    }
    
    func loadData() {
        self.todoList.removeAll()
        let ref = Database.database().reference()
        ref.child("todoList").observeSingleEvent(of: .value, with: { (snapshot) in
              if let todoDict = snapshot.value as? [String:AnyObject] {
                  for (_,todoElement) in todoDict {
                      print(todoElement);
                      let todo = Todo()
                      todo.name = todoElement["name"] as? String
//                      todo.message = todoElement["message"] as? String
//                      todo.reminderDate = todoElement["date"] as? String
                      self.todoList.append(todo)
                  }
              }
              self.tableView.reloadData()
              
            }) { (error) in
                  print(error.localizedDescription)
            }
    }
}


extension ViewController {
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return self.todoList.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "ToDoCell", for: indexPath)
        cell.textLabel?.text = todoList[indexPath.row].name
        return cell
    }
    
    func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath) {
//        let todoVC = self.storyboard!.instantiateViewControllerWithIdentifier("ToDoVC") as! ToDoViewController
//        todoVC.todo = todoList[indexPath.row]
//        self.navigationController?.pushViewController(todoVC, animated: true)
    }

}
