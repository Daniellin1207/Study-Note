#include <iostream>
#include <alloca.h>
// #include <
using namespace std;

enum{
    __Align=8
    };
enum{
    __MAX_BYTES=128
};
enum{
    __NFREELISTS=16
};

size_t RoundUp(size_t bytes){
    return (((bytes)+__Align-1)&~(__Align-1));
}

template <bool threads,int inst>
class alloc_t{
    private:
        static size_t RoundUp(size_t bytes){
            return (((bytes)+__Align-1)&~(__Align-1));
        }
    private:
        union obj{
            union obj* free_list_link;
        };
    private:
        // static obj* volatile free_list{__NFREELISTS};

        static obj** free_list{__NFREELISTS};
        static size_t FREELIST_INDEX(size_t bytes){
            return (((bytes)+__Align-1)/__Align-1);
        };
        static void *refill(size_t n);
        static char* chunk_alloc(size_t size,int &nobjs);

        static char* start_free;
        static char* end_free;
        static size_t heap_size;
    public:
        static void* allocate(size_t n){
            // obj* volatile *my_free_list; //obj**
            obj** my_free_list;
            obj* result;
            if(n>(size_t)__MAX_BYTES){
                // return (malloc_alloc::allocate(n));
            }
            my_free_list=free_list+FREELIST_INDEX(n);
            result=*my_free_list;
            if(result==0){
                void* r=refill(RoundUp(n));
                return r;
            }
            *my_free_list=result->free_list_link;
            return (result);
        }
        static void deallocate(void* p, size_t n){
            obj* q=(obj*)p;
            obj **my_free_list;
            if(n>(size_t)__MAX_BYTES){
                // malloc_alloc::deallocate(p,n);
                return ;
            }
            my_free_list=free_list+FREELIST_INDEX(n);
            q->free_list_link=*my_free_list;
            *my_free_list=q;
        }
        static void * reallocate(void* p,size_t old_sz,size_t new_sz);
};

template<bool threads,int inst>
void* alloc_t<threads,inst>::refill(size_t n){
    int nobjs=20;
    char* chunk=chunk_alloc(n,nobjs);
    obj* volatile *my_free_list;
    obj* result;

}

template<bool threads,int inst>
char* alloc_t<threads,inst>::chunk_alloc(size_t size,int& nobjs){
    
}

int main(){
    cout<<"hello t.cc"<<endl;
    size_t t=13;
    cout<<RoundUp(t)<<endl;
    return 0;
}