import java.io.*;
import java.sql.*;

public class JDBC_Ex3 {
	public static void main (String[] args) {
		Connection conn;
		Statement stmt = null;
		
		try {
			Class.forName("com.mysql.jdbc.Driver"); // MySQL ����̹� �ε�
			conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/sampledb", "root","1234"); // JDBC ����
			System.out.println("DB ���� �Ϸ�");
			stmt = conn.createStatement(); // SQL�� ó���� Statement ��ü ����
			stmt.executeUpdate("insert into student (name, id, dept) values('�ƹ���', '0893012', '��ǻ�Ͱ���');"); // ���ڵ� �߰�
			printTable(stmt);
			stmt.executeUpdate("update student set id='0189011' where name='�ƹ���'"); //������ ����
			printTable(stmt);
			stmt.executeUpdate("delete from student where name='�ƹ���'"); // ���ڵ� ����
			printTable(stmt);
		} catch (ClassNotFoundException e) {
			System.out.println("JDBC ����̹� �ε� ����");
		} catch (SQLException e) {
			System.out.println("SQL ���� ����");
		}
	}
	// ���ڵ��� �� ���� �� ȭ�鿡 ���
	private static void printTable(Statement stmt) throws SQLException {
		ResultSet srs = stmt.executeQuery("select * from student");
		while (srs.next()) {
			System.out.print(srs.getString("name"));
			System.out.print("\t|\t" + srs.getString("id"));
			System.out.println("\t|\t" + srs.getString("dept"));
		}
	}
}