import { Router } from "express";
import { listarTodosDdds, listarDddsPorUf, listarCidadesPorDdd } from "../controllers/ddd.controller";

const router = Router();

// GET /api/v1/ddd/
router.get("/", listarTodosDdds);

// GET /api/v1/ddd/cities/:uf -> precisa vir ANTES de /:uf,
// senao o Express interpreta "cities" como se fosse o valor de :uf
router.get("/cities/:uf", listarCidadesPorDdd);

// GET /api/v1/ddd/:uf
router.get("/:uf", listarDddsPorUf);

export default router;
