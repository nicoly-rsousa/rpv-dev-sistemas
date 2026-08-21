import express from "express";
import cors from "cors";
import feriadosRoutes from "./routes/feriados.routes";
import dddRoutes from "./routes/ddd.routes";

const app = express();
const PORT = 5000;

app.use(express.json());
app.use(cors());

const corsOptions = {
    origin: "*"
}

app.use(cors(corsOptions));

app.get("/healthy", (req, res) => {
    res.status(200).json({ message: "Server is healthy" });
})

app.use("/api/v1/feriados", feriadosRoutes);
app.use("/api/v1/ddd", dddRoutes);

app.listen(PORT, () => {
    console.log(`Server is running on port ${PORT}`);
})
