import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.*;

public class JDBC_Ex2 {
	public static void main (String[] args) {
		Connection conn;
		Statement stmt = null;
		try {
			//Class.forName("com.mysql.jdbc.Driver"); // MySQL ����̹� �ε�
			Class.forName("com.mysql.cj.jdbc.Driver");
			//conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/sampledb", "root","1234"); // JDBC ����
			String dbURL = "jdbc:mysql://localhost:3306/handb?useSSL=false&serverTimezone=Asia/Seoul";
			conn = DriverManager.getConnection(dbURL, "Han","han#5828");
			
			System.out.println("DB ���� �Ϸ� ---- > OK !!!");
			stmt = conn.createStatement(); // SQL�� ó���� Statement ��ü ����
			ResultSet srs = stmt.executeQuery("select * from professor"); // ���̺��� ��� ������ �˻�
			printData(srs, "�����ڵ�", "�����̸�", "�а�");
			String SQL = "select p_code, p_name, dept from professor where p_code= 'p200' ";
			srs = stmt.executeQuery(SQL); // name�� "�̱���"�� ���ڵ常 �˻�
			printData(srs, "�����ڵ�", "�����̸�", "�а�");
			
		} catch (ClassNotFoundException e) {
			System.out.println("JDBC ����̹� �ε� ����");
		} catch (SQLException e) {
			System.out.println("SQL �������");
		} 
	}
	// ���ڵ��� �� ���� �� ȭ�鿡 ���
		private static void printData(ResultSet srs, String col1, String col2, String col3) throws SQLException {
			while (srs.next()) {
				if (!col1.equals(""))
					System.out.print(srs.getString("p_code")); 
				if (!col2.equals(""))
					System.out.print("\t|\t" + srs.getString("p_name"));
				if (!col3.equals(""))
					System.out.print("\t|\t" + srs.getString("dept"));
				else 
					System.out.println("\n");
				
				System.out.println("\n");
			}
		}
}