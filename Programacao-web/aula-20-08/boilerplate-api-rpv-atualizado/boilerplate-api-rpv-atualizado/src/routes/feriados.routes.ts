import { Router } from "express";
import { listarFeriados } from "../controllers/feriados.controller";

const router = Router();

// GET /api/v1/feriados/2026?uf=SP
router.get("/:ano", listarFeriados);

export default router;
