#ifndef SPEEDTIMER_H
#define SPEEDTIMER_H

#include <QElapsedTimer>

class SpeedTimer
{
private:
    QElapsedTimer timer;

public:
    void StartTimer()
    {
        timer.start();
    }

    void StopTimer()
    {
        timer.invalidate();
    }

    quint32 GetSeconds() const
    {
        return static_cast<quint32>(timer.elapsed() / 1000);
    }
};

#endif // SPEEDTIMER_H
