#pragma once

#include <QMainWindow>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();
	~MainWindow() noexcept = default;

private:
	MainWindow(const MainWindow &other) = delete;
	MainWindow(MainWindow &&other) = delete;
	MainWindow &operator=(const MainWindow &other) = delete;
	MainWindow &operator=(MainWindow &&other) = delete;
};