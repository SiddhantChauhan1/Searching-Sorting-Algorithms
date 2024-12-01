<h1> Searching and Sorting Algorithms </h1>
<p> Algorithms for Searching and Sorting elements in an array in C language along with their respective space and time complexities</p>

<h2> Searching </h2>
<ol>
  <li><b> Linear Search </b> 
    <p>Simplest searching Algorithm, each element of the array is iterated one by one until the target element is found</p>
    <table>
      <tr>
        <th>Worst Case</th>
        <th>Average Case</th>
        <th>Best Case</th>
      </tr>
      <tr>
        <td>O(n)</td>
        <td>O(n)</td>
        <td>O(1)</td>
      </tr>
    </table>
  </li>

  <li><b> Binary Search </b>
    <p>Faster than Linear Search, but works only on sorted arrays</p>
    <table>
      <tr>
        <th>Worst Case</th>
        <th>Average Case</th>
        <th>Best Case</th>
      </tr>
      <tr>
        <td>O(log n)</td>
        <td>O(log n)</td>
        <td>O(1)</td>
      </tr>
    </table>
  </li>
</ol>


<h2> Sorting </h2>
<ol>
  <li><b> Bubble Sort </b>
    <p> Starts with the first element, if it's bigger than the next element, they are swapped. Repeats loop n times. Simple but has higher time complexity. </p>
    <table>
      <tr>
        <th>Worst Case</th>
        <th>Average Case</th>
        <th>Best Case</th>
      </tr>
      <tr>
        <td>O(n²)</td>
        <td>O(n²)</td>
        <td>O(n)</td>
      </tr>
    </table>
    <p>In place, O(1) Space complexity</p>
  </li>
  
  <li><b> Insertion Sort </b>
    <p> For each element in the array, keeps shifting it to the left until a smaller number is encountered. Simple but has higher time complexity. </p>
    <table>
      <tr>
        <th>Worst Case</th>
        <th>Average Case</th>
        <th>Best Case</th>
      </tr>
      <tr>
        <td>O(n²)</td>
        <td>O(n²)</td>
        <td>O(n)</td>
      </tr>
    </table>
    <p>In place, O(1) Space complexity</p>
  </li>

  <li><b> Selection Sort </b>
    <p> Selects the smallest element in the array and puts it in the first place. In the next iteration, selects the next smallest element and puts it in the second position. Does the same for every element </p>
    <table>
      <tr>
        <th>Worst Case</th>
        <th>Average Case</th>
        <th>Best Case</th>
      </tr>
      <tr>
        <td>O(n²)</td>
        <td>O(n²)</td>
        <td>O(n²)</td>
      </tr>
    </table>
    <p>In place, O(1) Space complexity</p>
  </li>

  <li><b> Merge Sort </b>
    <p> Keeps dividing the Array; after completely dividing, compares the single elements and merges them into a single sorted array one by one. Faster sorting at the cost of some extra memory. </p>
    <table>
      <tr>
        <th>Worst Case</th>
        <th>Average Case</th>
        <th>Best Case</th>
      </tr>
      <tr>
        <td>O( nlogn )</td>
        <td>O( nlogn )</td>
        <td>O( nlogn )</td>
      </tr>
    </table>
    <p> O(n) Space Complexity </p>
  </li>

  <li><b> Quick Sort </b>
    <table>
      <tr>
        <th>Worst Case</th>
        <th>Average Case</th>
        <th>Best Case</th>
      </tr>
      <tr>
        <td>O(nlogn)</td>
        <td>O(nlogn)</td>
        <td>O(nlogn)</td>
      </tr>
    </table>
  </li>

  <li><b> Heap Sort </b>
    <table>
      <tr>
        <th>Worst Case</th>
        <th>Average Case</th>
        <th>Best Case</th>
      </tr>
      <tr>
        <td>O( )</td>
        <td>O( )</td>
        <td>O( )</td>
      </tr>
    </table>
  </li>
</ol>
