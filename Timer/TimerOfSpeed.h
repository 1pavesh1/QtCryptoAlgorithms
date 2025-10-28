#ifndef TIMEROFSPEED_H
#define TIMEROFSPEED_H

#include <QElapsedTimer>

class TimerOfSpeed
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
        return static_cast<quint32>(timer.elapsed());
    }
};

#endif // TIMEROFSPEED_H
