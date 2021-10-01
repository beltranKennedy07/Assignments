angular.module('myWeb', []);

angular.module('myWeb').controller ('myController', function ($scope) {var customers = [
    { name: "Samantha", pin: 0703, account: "K7P3K7", balance: 30000 },
    { name: "Clowie", account: "P3K27", pin: 2727, balance: 2000000}];

$scope.authenticated = false;
$scope.findAccount = function() 
    { $scope.customer = _.find(customers,function(customer) {
        return customer.account == $scope.accountNumber;});

if ($scope.customer) {
    $scope.accountFound = true;
}};

$scope.checkPin = function() {
    if ($scope.customer.pin == $scope.pin) 
    { $scope.authenticated= true;

} else {
    $scope.invalidPin = true;
}
};

$scope.balance = function() {
    { $scope.processMessage = 'Current balance:' + $scope.customer.balance;
}
}
});