//This is the controller and route(Axios) in frontend , Rest API for GET http method

RestAPI
representational state transfer - use https method to communicate 

SPRINGBOOT:

@RestController
@RequestMapping("/api/users")
@RequiredArgsConstructor
  public class UserController {
    private final UserService service;
    @GetMapping
    public List<User> getAllUsers(){
        return service.getAllUsers();
    }
  }

FRONTEND:

import axios from 'axios';
export const api = axios.create({
    baseURL: 'http://localhost:8080/api/users';
});


const getUsers = async () => {
    const response = await api.get("/users");
    return response.data;
}


