import numpy
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        have_zero = False
        result = []
        producted = 1
        len_nums = len(nums)
        non_zero = numpy.count_nonzero(nums)
        zero = len_nums - non_zero
        if non_zero == 0:
            return nums
        elif non_zero < len_nums:
            have_zero = True
        
        if zero >= 2:
            return [0 for _ in range(len_nums)]
        else:
            for num in nums:
                if num != 0:
                    producted *= num


        for i, num in enumerate(nums):
            if have_zero and num != 0:
                except_multiply = 0
            elif have_zero and num == 0:
                if zero - 1 >= non_zero:
                    except_multiply = 0
                else:
                    except_multiply = producted
            elif have_zero is False and num == 0:
                except_multiply = producted
            else:
                except_multiply = producted // num

            result.append(except_multiply)
        return result
