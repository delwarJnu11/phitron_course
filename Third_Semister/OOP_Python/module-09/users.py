from abc import ABC, abstractmethod
from datetime import datetime


class User(ABC):
    def __init__(self, name, email, nid,) -> None:
        super().__init__()
        self.name = name
        self.email = email
        self.__id = 0
        self.__nid = nid

    @abstractmethod
    def display_profile(self):
        raise NotImplemented


class Rider(User):
    def __init__(self, name, email, nid) -> None:
        super().__init__(name, email, nid)
        self.current_ride = None
        self.wallet = 0

    def display_profile(self):
        print(f'Rider -> Name {self.name} and email {self.email}')

    def cash_load(self, amount):
        if amount > 0:
            self.wallet += amount

    def ride_request(self, location, destination):
        if not self.current_ride:
            # Todo->set ride and set current ride match
            ride_request = None
            self.current_ride = None


class Driver(User):
    def __init__(self, name, email, nid, current_location) -> None:
        super().__init__(name, email, nid)
        self.current_location = current_location
        self.wallet = 0

    def display_profile(self):
        print(f'Rider -> Name {self.name} and email {self.email}')

    def accept_ride(self, ride):
        ride.set_dirver(self)


class Ride:
    def __init__(self, start_location, end_location) -> None:
        self.start_location = start_location
        self.end_location = end_location
        self.start_time = None
        self.end_time = None
        self.fare = None
        self.rider = None

    def set_driver(self, driver):
        self.driver = driver

    def start_ride(self):
        self.start_ride = datetime.now()

    def end_ride(self, rider, amount):
        self.end_ride = datetime.now()
        self.rider.wallet -= self.fare
        self.driver.wallet += self.fare
