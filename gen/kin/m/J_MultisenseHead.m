function [output1] = J_MultisenseHead(var1)
    if coder.target('MATLAB')
        [output1] = J_MultisenseHead_mex(var1);
    else
        coder.cinclude('J_MultisenseHead_src.h');
        
        output1 = zeros(3, 20);

        
        coder.ceval('J_MultisenseHead_src' ...
            ,coder.wref(output1) ...
            ,coder.rref(var1) );
    end
end