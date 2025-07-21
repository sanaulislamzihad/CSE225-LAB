 // SortedType<int> firstList2;
        // SortedType<int> secondList2;
        // SortedType<int> intersection;
    
        // // Re-initialize both lists again for fresh data
        // for (int val : firstValues) firstList2.Insert(val);
        // for (int val : secondValues) secondList2.Insert(val);
    
        // // Compute intersection
        // firstList2.Reset();
        // for (int i = 0; i < firstList2.Length(); i++) {
        //     firstList2.GetNext(num);
        //     secondList2.Search(num, found);
        //     if (found) {
        //         intersection.Search(num, found);  // avoid duplicates
        //         if (!found)
        //             intersection.Insert(num);
        //     }
        // }
    
        // // Display intersection
        // intersection.Reset();
        // cout << "Intersection (∩) = {";
        // for (int i = 0; i < intersection.Length(); i++) {
        //     intersection.GetNext(num);
        //     cout << num;
        //     if (i < intersection.Length() - 1)
        //         cout << ", ";
        // }
        // cout << "}" << endl;