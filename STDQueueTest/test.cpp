#include "pch.h"
# include <queue>

//1. Sprawdzic czy nowo utworzona kolejka jest pusta
//2. Sprawdzicz czy jak dodamu kilka elementow (push) to czy size bedzie 3
//3. Sprawdzic czy jak wywolamy pop na kolejce z elementami to zmniejszy sie jej rozmiar
//4. Sprawdzic czy jak za pomoca push wlozymy elementy o zadanych wartoscach to bedzie odpowiednio ustawiony front
//5. Sprawdzic czy jak wrzucimy 5 elementow i potem 5 x wywolamy pop to czy kolejka bedzie pusta - for
//*5. Zamiana kolejki z druga kolejka - swap

TEST(QueueTest, TestNewQueueIsEmpty) 
{
    std::queue<int> testQueue;
    EXPECT_TRUE(testQueue.empty());
}

TEST(QueueTest, TestPush3TimesIsSize3)
{
    std::queue<int> testQueue;
    testQueue.push(1);
    testQueue.push(2);
    testQueue.push(3);
    EXPECT_EQ(testQueue.size(), 3);
}

TEST(QueueTest, TestRemovingElements)
{
    const size_t desiredQueueSize = 3;
    std::queue<int> testQueue;
    for (unsigned int i = 1; i <= 3; ++i)
    {
        testQueue.push(i);
    }
    testQueue.pop();
    EXPECT_EQ(testQueue.size(), 2);
}

TEST(QueueTest, TestElementOrderUsingPop)
{
    const size_t desiredQueueSize = 3;
    std::queue<int> testQueue;
    for (unsigned int i = 1; i <= desiredQueueSize; ++i)
    {
        testQueue.push(i);
    }
    for (unsigned int i = 1; i <= desiredQueueSize; ++i)
    {
        EXPECT_EQ(testQueue.front(), i);
        testQueue.pop();
    }
}

TEST(QueueTest, Test5TimesPopIsEmpty)
{
    std::queue<int> testQueue;
    for (unsigned int i = 1; i <= 5; ++i)
    {
        testQueue.push(i);
    }
    for (unsigned int i = 1; i <= 5; ++i)
    {
        testQueue.pop();
    }
    EXPECT_TRUE(testQueue.size() == 0);
}

TEST(QueueTest, TestQueuesSwap)
{
    std::queue<int> testQueue1;
    for (unsigned int i = 1; i <= 5; ++i)
    {
        testQueue1.push(i);
    }
    std::queue<int> testQueue2;
    for (unsigned int i = 7; i >= 1; --i)
    {
        testQueue2.push(i);
    }
    std::swap(testQueue1, testQueue2);
    EXPECT_TRUE(testQueue1.size() == 7);
    EXPECT_TRUE(testQueue2.size() == 5);
    EXPECT_EQ(testQueue1.front(), 7);
    EXPECT_EQ(testQueue2.front(), 1);
}

//TEST FIXTURE

class StdQueueTest : public ::testing::Test 
{
public:
    StdQueueTest()
    {
        for (unsigned int i = 1; i <= desiredQueueSize; ++i)
        {
            testQueue.push(i);
        }
    }
protected:
    const size_t desiredQueueSize = 3;
    std::queue<int> testQueue;
};

TEST_F(StdQueueTest, TestPush3TimesIsSize3)
{
    EXPECT_EQ(testQueue.size(), 3);
}


// przetestowac inny kontener z std
