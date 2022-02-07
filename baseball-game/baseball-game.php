class Solution {

    /**
     * @param String[] $ops
     * @return Integer
     */
    function calPoints($ops) {
        $points = [];
        foreach($ops AS $op){
            $max = count($points);
            switch($op){
                case '+':
                    $points[] = $points[$max-1] + $points[$max-2];
                    break;
                case 'C':
                    array_pop($points);
                    break;
                case 'D':
                    $points[] = (isset($points[$max-1]) ? $points[$max-1] * 2 : 0);
                    break;
                default:
                    $points[] = (int)$op;
            }
        }
        return array_sum($points);
    }
}