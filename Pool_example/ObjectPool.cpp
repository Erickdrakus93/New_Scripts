//
// Created by erick-hdz on 09/04/20.
//

#include "ObjectPool.h"
#include <"Resource.h">
#include <"Resource.cpp">
#include <iosteam>
#include <list>

using namespace std;
/**
 * This is the usual space
 * We can create another space
 */

class ObjectPool{
    std::list<Resource*> resources;
    static ObjectPool* instance; //Here we init ObjectPool instance as we can see in the next lines
    ObjectPool(){} //This is the empty constructor
public:
    /**
     * Static method for accessing class instance.
     * Part of the singleton design Patterns
     *
     * @return Pool instance
     */
     static ObjectPool* getInstance(){
         if (instance == 0){
             instance = new ObjectPool();
         }
        return instance;
     }

     /**
      * Returns instance of Resource
      *
      * New resource will be created if all resources
      * were used at the time of the request
      *
      * @return Resource instance
      */
      Resource* getResource(){
          if (resources.empty()){
              std::cout<< "Creating new." << std::endl;
              return new Resource;
          }
          else  {
              std::cout << "Reusing existing " << std::endl;
              Resource* resource = resources.front();
              resources.pop_front();
              return resource;
          }
      }

      /**
       * Return resource back to the pool
       *
       * The resource must be initialized back to
       * the default settings before someone else
       * attempts to use it.
       *
       * @param object Resource instance
       * @return void
       */
       void returnResource(Resource* object){
           object -> reset(); //This is the accessing to function members as we can see in the "->" operators
           resources.push_back(object);
       };

};
template <typename T>
void func(T const& param) // Here we can create the manner as we can see in the next lines
//As we can see in the next lines of the code as we 


int main(void) {
    ObjectPool *pool = ObjectPool::getInstance();
    Resource *one, two;

    one = pool->getResource();
    std::cout << "one = " << one->getValue() << "[" << one << "]" << std::endl;
    two = pool->getResource();
    std::cout << "two" << two->getValue() << "[" << two << "]" << std::endl;

    pool->returnResource(one);
    pool->returnResource(two);
    /**
     * Resources will be reused
     * Notice that the value of both resources were back to zero
     */
    one = pool->getResource();
    std::cout << "one = " << one->getValue() << "[" << one << "]" << std::endl;
    std::cout << "two = " << two->getValue() << "[" << two << "]" << std::endl;
    return 0;
}