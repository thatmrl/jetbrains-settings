#if ($DEFAULT_RETURN_VALUE == "result")
$RETURN_TYPE result;
return result;
#elseif ($RETURN_TYPE != "void")
return $DEFAULT_RETURN_VALUE;
#end