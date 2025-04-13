n, k, m = gets.split

s = Set.new([])
k.to_i.times do |i|
    word = gets.chomp
    s.add(word)
end

h = []
m.to_i.times do |i|
    word = gets.chomp
    h.push(word)
end

q = []
n.to_i.times do |i|
    q.push(i + 1)
end

n.to_i.times do |i|
    person = q.shift
    h_word = h.shift
    if s.include?(h_word)
        q.push(person)
        s.delete(h_word)
    end
end
puts(s)
puts q.size

ans = q.sort!
ans.each do |i|
    puts i
end


