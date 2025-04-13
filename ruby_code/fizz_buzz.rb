n = gets.to_i
n += 1
n.times do |i|
    if i == 0
        next
    end
    
    if i % 3 == 0 && i % 5 == 0
        puts "Fizz Buzz"
    elsif i % 3 == 0 && i % 5 != 0
        puts "Fizz"
    elsif i % 3 != 0 && i % 5 == 0
        puts "Buzz"
    else
        puts i
    end
end