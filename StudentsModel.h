// #pragma once

// #include <vector>

// #include <QAbstractTableModel>
// #include <QWidget>

// /// @brief Описывает единицу хранимых данных в таблице
// struct Student
// {
// 	QString firstName;
// 	QString lastName;
// };

// class StudetnsModel final : public QAbstractTableModel
// {
// public:
// 	explicit StudetnsModel(QWidget *parent = nullptr);
// 	~StudetnsModel() noexcept = default;

// 	/// @brief Возвращает информацию о количестве колонок в модели
// 	/// @param parent Родительский индекс. Если отображение и модель табличное, то он всегда один - корневой.
// 	/// Если древовидное, то родителем может быть один из узлов в дереве
// 	/// @return Количество столбцов
// 	int columnCount(const QModelIndex &parent) const override;

// 	/// @brief Возвращает количество строк в модели
// 	/// @param parent Аналогично columnCount
// 	/// @return Количество строк
// 	int rowCount(const QModelIndex &parent) const override;

// 	/// @brief Возвращает данные для переданного index в соответствии с указанной role
// 	/// @param index Индекс
// 	/// @param role Роль
// 	/// @return Данные для указанного индекса
// 	QVariant data(const QModelIndex &index, int role) const override;

// 	/// @brief Установить value для переданного index в соответствии с указанной role
// 	/// @param index Индекс
// 	/// @param value Данные
// 	/// @param role Роль
// 	/// @return true - данные установлены успешно, иначе - false
// 	bool setData(const QModelIndex &index, const QVariant &value, int role) override;

// private:
// 	StudetnsModel(const StudetnsModel &other) = delete;
// 	StudetnsModel(StudetnsModel &&other) = delete;
// 	StudetnsModel &operator=(const StudetnsModel &other) = delete;
// 	StudetnsModel &operator=(StudetnsModel &&other) = delete;

// 	/// @brief Вектор с данными модели. Модели могут использовать любые структуры данных, которые
// 	// являются наиболее подходящими для хранения конкретных данных
// 	std::vector<Student> _students;
// };
