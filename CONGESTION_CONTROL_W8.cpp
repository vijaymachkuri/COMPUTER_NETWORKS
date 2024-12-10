#include<bits/stdc++.h>
using namespace std;

int main() {
    int no_of_queries, storage, output_pkt_size;
    int input_pkt_size, bucket_size, size_left;

    // Initial packets in the bucket
    storage = 0;

    // Total no. of times bucket content is checked
    no_of_queries = 4;

    // Total no. of packets that can be accommodated in the bucket
    bucket_size = 10;

    // No. of packets that enters the bucket at a time
    input_pkt_size = 4;

    // No. of packets that exits the bucket at a time
    output_pkt_size = 1;

    for (int i = 0; i < no_of_queries; i++) {
        // Space left
        size_left = bucket_size - storage;

        if (input_pkt_size <= size_left) {
            // Update storage
            storage += input_pkt_size;
            printf("Buffer size= %d out of bucket size= %d\n", storage, bucket_size);
        } else {
            printf("Packet loss = %d\n", (input_pkt_size - size_left));
            // Full size
            storage = bucket_size;
            printf("Buffer size= %d out of bucket size= %d\n", storage, bucket_size);
        }

        storage -= output_pkt_size;
    }

    return 0;
}
