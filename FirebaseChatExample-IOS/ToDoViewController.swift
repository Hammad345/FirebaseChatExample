//
//  ToDoViewController.swift
//  FirebaseChatExample-IOS
//
//  Created by wasiq on 11/09/2023.
//

import UIKit
import FirebaseCore
import FirebaseDatabase

class ToDoViewController: UIViewController {
    
    @IBOutlet weak var nameTF: UITextField!

    var ref: DatabaseReference!

    var todo:Todo?

    override func viewDidLoad() {
        super.viewDidLoad()
        ref = Database.database().reference()

        if self.todo != nil {
            nameTF.text = self.todo?.name
//            messageField.text = self.todo?.message
//
//            let dateFormatter = NSDateFormatter()
//            dateFormatter.dateFormat = "dd/MM/yyyy hh:mm a"
//            let date = dateFormatter.dateFromString(self.todo!.reminderDate!)
//            datePicker.date = date!
        }
        // Do any additional setup after loading the view.
    }
    
    @IBAction func addBtnAction(_ sender: UIButton) {
        if todo == nil {
            todo = Todo()
        }
        
        // first section
//        let dateFormatter = NSDateFormatter()
//        dateFormatter.dateFormat = "dd/MM/yyyy hh:mm a"
        
        todo?.name = self.nameTF.text
//        todo?.message = self.messageField.text
//        todo?.reminderDate = dateFormatter.stringFromDate(self.datePicker.date)
        
        //second section
//        let ref = FIRDatabase.database().reference()

        
        let key = ref.child("todoList").childByAutoId().key
        
        let dictionaryTodo = [ "name"    : todo!.name! // ,
//                               "message" : todo!.message!,
//                               "date"    : todo!.reminderDate!
        ]
        
        let childUpdates = ["/todoList/\(key ?? "")": dictionaryTodo]
        ref.updateChildValues(childUpdates, withCompletionBlock: { (error, ref) -> Void in
//            self.navigationController?.popViewControllerAnimated(true)
            print(ref)
        })
    }

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
