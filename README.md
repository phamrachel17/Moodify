# Moodify
 
 > Authors: \<[Harchet Singh](https://github.com/hsing067)\> \<[Gency Dela Torre](https://github.com/gen-cy)\> \<[Rachel Pham](https://github.com/phamrachel17)\> \<[Adrian Khor](https://github.com/akhor005)\>
 
 
 > ## Expectations
 > * Incorporate **at least one** design pattern
 >   * It is recommended that you include a design pattern that we will teach this session (Composite, Strategy, or Visitor)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * Each member of the group must actively participate in the Github Project board and reviewing commited code.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two scrum/check-in meetings with your lab TA/reader in two different weeks in addition to the final demo.


## Project Description
 > Our project will be a website that gathers data using API’s from your Spotify history to display data from Spotify wrapped and a mood/aesthetic board of pictures from Pinterest or Google. 
 >   * This project is interesting to us because Spotify wrapped is only released once per year and it would be useful to access it at any time. Furthermore, we want to add a mood/aesthetic board feature to the Spotify wrapped data which will allow us to express our feelings through music and images.
 >   * The languages we plan to use are React JS and HTML/CSS to code the website interface and also C++ for the backend data. The tools we will use are Git/GitHub, Figma, Spotify APIs, Pinterest APIs, and Google APIs.
 >   * This project will produce a summary of your Spotify activity that you can access all year round. The summary will include your top listener, most played songs, most played genres, how long you listened to music in minutes, and a pinterest mood/aesthetic board based on your listening. The input values will be your login credentials and Spotify API’s. 
 
 > ## Phase II

## Class Diagram
 > ![image](https://user-images.githubusercontent.com/97139147/153347192-5a64b9bc-c3e1-4d72-ad86-c8c24ed4cd5b.png)
 > The picture above depicts our UML diagram for the project. We will have separate classes for each panel of the Spotify statistics which all inherit from the original Panel class. Then, the MoodBoard class takes information from the most listened genre and uses that to generate a collage of pictures.

 
 > ## Phase III
 ![image](https://user-images.githubusercontent.com/56899845/155667217-468b2216-b339-4ca2-8f10-6bb0018c8b64.png)
 UPDATED UML DIAGRAM ABOVE

We chose to use a structural design pattern, specifically the composite pattern as most of our implemented classes serve as the foundation for other sibling class attributes. The way the classes interact is mostly through inheritance and composition, so we figured behavioral and creational design patterns would not be appropriate. In our application, songs, artists, and genres are all separate classes that inherit from Panel, but they all contain instances of one another. There are many potential features that can use this, but for this application, displaying a song will return its title, artist and genre. Furthermore, we will use these attributes to generate the appropriate images to display. Although the MoodBoard class does not inherit from the Panel class, its display elements are all subclasses of Panel which makes displaying easier. As shown in our UML diagram, the mood board inherits information from the genre class.
 >     

Another design pattern that we implemented is a use case behavioral UML diagram. We chose to use this diagram to help us understand our workflow to show how different objects interact with each other; for example, the login button leads to the Spotify Authentication page which ultimately gives us the ability to gather the user's information. This UML diagram helped us to differentiate between the objects throughout the various pages. Doing this diagram made working with the API simple and concise since we can see a clear connection between the API we use and the objects. Therefore, it will help us write code that is easier for the a person to understand the workflow. 
 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > To use Spotify Login Button, you need to run npm install --save styled-components
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
