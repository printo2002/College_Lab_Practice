// Step1: Search for Java mysql connector
// Step2: Download it from official mysql site 'dev.mysql.com/downloads/connector/j/'
// Step3: Select Platform Independent --> zip & Download & Extract it
// Step4: Run Xampp --> Apache & SQL
// Step5: Attach the extracted file to the working folder
//  			---> Right Click on folder [where prgm saved]
//			---> Build Path --> Configure Build Path
//			---> Click on libraries ---> Add External Jar 
//			---> Select 'mysql-connector-j-9.7.0'
//			---> Apply & close 
// Step6: Run the program
// Step7: Xampp -->  SQL Admin --> view the db

package labprgms;
import java.sql.*;
public class DatabaseExample {

	public static void main(String[] args) {
		try {
		Class.forName("com.mysql.cj.jdbc.Driver");
		Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/studentdb?","root","");	
		System.out.println("Connected");
		// Print all from db
		String query = "Select * from student";
		//
		PreparedStatement pstmt = conn.prepareStatement(query);
		// 
		ResultSet rs =pstmt.executeQuery();
		while(rs.next()) {
			int id = rs.getInt("id");
			String name = rs.getString("name");
			System.out.println("Id: "+id +" ,  " + "Name: "+name);
		}
		
		//insert
		String insert = "INSERT INTO student (id,name) VALUES(?,?)";
		pstmt = conn.prepareStatement(insert);
		pstmt.setInt(1, 6);
		pstmt.setString(2,"Biju");
		pstmt.executeUpdate();
		System.out.println("Inserted");
		
		// delete 
		String delete = "DELETE FROM STUDENT WHERE id = 2";
		pstmt = conn.prepareStatement(delete);
		pstmt.executeUpdate();
		System.out.println("Deleted");

		// update 
		String update = "UPDATE STUDENT SET name = 'Joe' WHERE id = 3";
		pstmt = conn.prepareStatement(update);
		pstmt.executeUpdate();
		System.out.println("Updated Succ...");

		
		}catch(Exception e) {
			System.out.println("Not able to connect");
		}

		
	}

}

