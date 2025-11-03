# Comparison between *Generalization* and *Specialization* in DBMS (ER modeling):  

| *Feature*              | *Specialization*                                    | *Generalization*                                     |
|--------------------------|------------------------------------------------------|--------------------------------------------------------|
| *Definition*           | Process of creating *subtypes* from a *single entity* based on some distinguishing characteristics. | Process of creating a *supertype* from *multiple entities* based on common characteristics. |
| *Direction*            | Top → Down (from supertype to subtype)             | Bottom → Up (from multiple entities to supertype)    |
| *Purpose*              | To capture *specific differences* among entities  | To capture *common properties* among entities       |
| *Hierarchy*            | Subtypes inherit attributes from supertype         | Supertype has attributes common to all subtypes       |
| *Example*              | Vehicle → Car, Truck                                 | Car, Truck, Bike → Vehicle                            |

✅ *Quick Tip:*
- *Specialization = Divide (Super → Sub)*  
- *Generalization = Combine (Sub → Super)*  

