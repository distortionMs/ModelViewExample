// #include "StudentsModel.h"

// StudetnsModel::StudetnsModel(QWidget *parent)
// 	: QAbstractTableModel(parent)
// {
// 	// При создании модель получает данные. Модель может прочитать данные из файла, 
// 	// получить с сервера или получить в виде готового объекта в конструкторе и т.д.
// 	_students.push_back({"Ivan", "Ivanov"});
// 	_students.push_back({"Anton", "Kartsev"});
// 	_students.push_back({"Aleksey", "Vyalkov"});
// }

// int StudetnsModel::columnCount(const QModelIndex &parent) const
// {
// 	// Имя/фамилия
// 	return 2;
// }

// int StudetnsModel::rowCount(const QModelIndex &parent) const
// {
// 	return _students.size();
// }

// QVariant StudetnsModel::data(const QModelIndex &index, int role) const
// {
// 	// Если передан невалидный индекс, то возвращаем пустые данные.
// 	// View вряд ли может подсунуть невалидный индекс, но проверять стоит всегда,
// 	// т.к. все эти функции могут вызываться напрямую пользователем модели, например для тестирования,
// 	// получения данных из модели для сохранения/передачи в процессе выполнения и т.п.
// 	if (index.isValid() == false)
// 	{
// 		return QVariant();
// 	}
// 	// Если запрошены данные для отображения
// 	if (role == Qt::DisplayRole)
// 	{
// 		// Извлекаем из индекса строку и столбец
// 		int row = index.row();
// 		int column = index.column();

// 		// Получаем студента в заданной строке
// 		Student currentStudent = _students.at(row);
// 		if (column == 0)
// 		{
// 			// Возвращаем данные для первой колонки
// 			return currentStudent.lastName;
// 		}
// 		if (column == 1)
// 		{
// 			// Возвращаем данные для второй колонки
// 			return currentStudent.firstName;
// 		}
// 	}
// 	// Другие роли модель пока не обрабатывает, в этом случае возвращает путые данные
// 	return QVariant();
// }

// bool StudetnsModel::setData(const QModelIndex &index, const QVariant &value, int role)
// {
// 	// Обработка установки данных
// 	return false;
// }
