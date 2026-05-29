The practical Webull workflow is:

Use the stock chart for your trade levels. Draw or mark the stock-price level where you would exit, add, trim, or move your stop. You can also use Webull alerts so you are notified when selected market conditions are met.
Use the option position/order panel for execution. When the stock hits your planned level, sell-to-close, trim, or add through the option ticket.
Use an option chart separately if you want to see the contract’s own price action. Webull’s web options interface says it supports comparing the underlying ticker’s chart and the option contract chart side by side, which is probably the closest built-in view to what you are describing.
For automated exits, be careful what price the order is based on. Webull’s option Take-Profit/Stop-Loss feature is based on the option price reaching a specified price, not the stock crossing your chart level. Webull states that an option stop-loss is designed to trigger once the option price reaches the specified price and is filled as a market order.
Check whether Conditional Orders solve your exact use case. Webull says conditional orders can trigger based on movement in stocks, indexes, or options contracts, but they are mobile-only and only work during regular trading hours. In the app, see whether you can set: “If underlying stock hits $X, then place sell-to-close order on my option.” I would test this with a tiny/paper trade first, because Webull’s public help page does not clearly document every cross-instrument combination.

A simple way to think about it:

Your thesis and stop are usually on the stock chart. Your actual fill and risk are in the option contract.

Example: You buy an AAPL call because AAPL is breaking above $200. Your stop is not “sell the option at $1.35” unless that is your plan. Your real chart plan might be: “I’m out if AAPL loses $198.80.” So you mark/alert $198.80 on AAPL, then sell the option when AAPL violates that level.

One warning: converting a stock stop into an option stop price is imperfect. Delta, gamma, implied volatility, spread, and time decay can all change the option price even if the stock moves as expected. Webull’s Options Calculator can estimate a contract’s theoretical value by changing underlying price, date, implied volatility, and other inputs, but Webull also notes that the result is theoretical and can differ from the actual market price.

So the answer is: turn on positions/orders on charts, use side-by-side stock and option charts, and manage the trade from stock-chart levels—but don’t expect your option position to appear as a useful “entry/stop line” directly on the stock chart.
