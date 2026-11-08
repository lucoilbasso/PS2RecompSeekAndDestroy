#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ApBgscrSunPosition__FP8ApcFieldP12ApScreenWork
// Address: 0x147e68 - 0x1480f4
void ApBgscrSunPosition__FP8ApcFieldP12ApScreenWork_0x147e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBgscrSunPosition__FP8ApcFieldP12ApScreenWork_0x147e68");
#endif

    ctx->pc = 0x147e68u;

    // 0x147e68: 0x8ca704e4  lw          $a3, 0x4E4($a1)
    ctx->pc = 0x147e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1252)));
    // 0x147e6c: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x147e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x147e70: 0x8ca204d4  lw          $v0, 0x4D4($a1)
    ctx->pc = 0x147e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1236)));
    // 0x147e74: 0x2529f640  addiu       $t1, $t1, -0x9C0
    ctx->pc = 0x147e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964800));
    // 0x147e78: 0x8ca304d0  lw          $v1, 0x4D0($a1)
    ctx->pc = 0x147e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1232)));
    // 0x147e7c: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x147e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x147e80: 0x294821  addu        $t1, $at, $t1
    ctx->pc = 0x147e80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 9)));
    // 0x147e84: 0x8ca604e0  lw          $a2, 0x4E0($a1)
    ctx->pc = 0x147e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1248)));
    // 0x147e88: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x147e88u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147e8c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x147e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x147e90: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x147e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147e94: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x147e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x147e98: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x147e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x147e9c: 0x30c67fff  andi        $a2, $a2, 0x7FFF
    ctx->pc = 0x147e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x147ea0: 0x286a4000  slti        $t2, $v1, 0x4000
    ctx->pc = 0x147ea0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x147ea4: 0x24678000  addiu       $a3, $v1, -0x8000
    ctx->pc = 0x147ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x147ea8: 0x28c84000  slti        $t0, $a2, 0x4000
    ctx->pc = 0x147ea8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x147eac: 0x24c28000  addiu       $v0, $a2, -0x8000
    ctx->pc = 0x147eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x147eb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x147eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147eb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x147eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x147eb8: 0xea180a  movz        $v1, $a3, $t2
    ctx->pc = 0x147eb8u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x147ebc: 0x48300a  movz        $a2, $v0, $t0
    ctx->pc = 0x147ebcu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x147ec0: 0x0  nop
    ctx->pc = 0x147ec0u;
    // NOP
    // 0x147ec4: 0x0  nop
    ctx->pc = 0x147ec4u;
    // NOP
    // 0x147ec8: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x147ec8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x147ecc: 0x8ca204e8  lw          $v0, 0x4E8($a1)
    ctx->pc = 0x147eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1256)));
    // 0x147ed0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x147ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147ed4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x147ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x147ed8: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x147ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x147edc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x147edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x147ee0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x147ee0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147ee4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x147ee8: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x147ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x147eec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147ef0: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x147ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x147ef4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x147ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x147ef8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x147ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x147efc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x147efcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x147f00: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x147f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147f04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x147f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x147f08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x147f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x147f0c: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x147f0cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x147f10: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x147f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x147f14: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x147f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x147f18: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x147f18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x147f1c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x147f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x147f20: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x147f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x147f24: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x147f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x147f28: 0xc78681a0  lwc1        $f6, -0x7E60($gp)
    ctx->pc = 0x147f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x147f2c: 0x8da20164  lw          $v0, 0x164($t5)
    ctx->pc = 0x147f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 356)));
    // 0x147f30: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x147f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x147f34: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x147f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x147f38: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x147f38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x147f3c: 0x8c4401a0  lw          $a0, 0x1A0($v0)
    ctx->pc = 0x147f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x147f40: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x147f40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x147f44: 0x8c4601a4  lw          $a2, 0x1A4($v0)
    ctx->pc = 0x147f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x147f48: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x147f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x147f4c: 0x8c4801a8  lw          $t0, 0x1A8($v0)
    ctx->pc = 0x147f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x147f50: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x147f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x147f54: 0x8c4701ac  lw          $a3, 0x1AC($v0)
    ctx->pc = 0x147f54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x147f58: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x147f58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x147f5c: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x147f5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147f60: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x147f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x147f64: 0x460818c2  mul.s       $f3, $f3, $f8
    ctx->pc = 0x147f64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x147f68: 0xe4a204dc  swc1        $f2, 0x4DC($a1)
    ctx->pc = 0x147f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1244), bits); }
    // 0x147f6c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x147f6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x147f70: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x147f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x147f74: 0xe4a304d8  swc1        $f3, 0x4D8($a1)
    ctx->pc = 0x147f74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1240), bits); }
    // 0x147f78: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x147f78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x147f7c: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x147f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x147f80: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x147f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147f84: 0xc44101bc  lwc1        $f1, 0x1BC($v0)
    ctx->pc = 0x147f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147f88: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x147f88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x147f8c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x147f8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x147f90: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x147f90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x147f94: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x147f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x147f98: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x147f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x147f9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x147f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x147fa0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x147fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x147fa4: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x147fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x147fa8: 0x2489ff00  addiu       $t1, $a0, -0x100
    ctx->pc = 0x147fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x147fac: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x147facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x147fb0: 0x2489ff04  addiu       $t1, $a0, -0xFC
    ctx->pc = 0x147fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967044));
    // 0x147fb4: 0x24caff20  addiu       $t2, $a2, -0xE0
    ctx->pc = 0x147fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967072));
    // 0x147fb8: 0x12b102a  slt         $v0, $t1, $t3
    ctx->pc = 0x147fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x147fbc: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x147fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x147fc0: 0x24caff24  addiu       $t2, $a2, -0xDC
    ctx->pc = 0x147fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967076));
    // 0x147fc4: 0x2508fffb  addiu       $t0, $t0, -0x5
    ctx->pc = 0x147fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967291));
    // 0x147fc8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x147FC8u;
    {
        const bool branch_taken_0x147fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FC8u;
        // 0x147fcc: 0x24e7fffb  addiu       $a3, $a3, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fc8) {
            ctx->pc = 0x1480E0u;
            goto label_1480e0;
        }
    }
    ctx->pc = 0x147FD0u;
    // 0x147fd0: 0x168102a  slt         $v0, $t3, $t0
    ctx->pc = 0x147fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x147fd4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x147FD4u;
    {
        const bool branch_taken_0x147fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FD4u;
        // 0x147fd8: 0x14c102a  slt         $v0, $t2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fd4) {
            ctx->pc = 0x1480E0u;
            goto label_1480e0;
        }
    }
    ctx->pc = 0x147FDCu;
    // 0x147fdc: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x147FDCu;
    {
        const bool branch_taken_0x147fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FDCu;
        // 0x147fe0: 0x187102a  slt         $v0, $t4, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fdc) {
            ctx->pc = 0x1480E0u;
            goto label_1480e0;
        }
    }
    ctx->pc = 0x147FE4u;
    // 0x147fe4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x147FE4u;
    {
        const bool branch_taken_0x147fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147FE4u;
        // 0x147fe8: 0x1281021  addu        $v0, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147fe4) {
            ctx->pc = 0x1480E0u;
            goto label_1480e0;
        }
    }
    ctx->pc = 0x147FECu;
    // 0x147fec: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x147fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x147ff0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x147ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x147ff4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x147ff4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x147ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x147ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x148000: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x148000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148004: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x148004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x148008: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x148008u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x14800c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x14800cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x148010: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x148010u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x148014: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x148014u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x148018: 0xc78281a4  lwc1        $f2, -0x7E5C($gp)
    ctx->pc = 0x148018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14801c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x14801cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x148020: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x148020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x148024: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x148024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x148028: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x148028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14802c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14802cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x148030: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x148030u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x148034: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x148034u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x148038: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x148038u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14803c: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x14803cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x148040: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x148040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x148044: 0x1694823  subu        $t1, $t3, $t1
    ctx->pc = 0x148044u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x148048: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x148048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x14804c: 0x29240008  slti        $a0, $t1, 0x8
    ctx->pc = 0x14804cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x148050: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x148050u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x148054: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x148054u;
    {
        const bool branch_taken_0x148054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148054u;
        // 0x148058: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148054) {
            ctx->pc = 0x14806Cu;
            goto label_14806c;
        }
    }
    ctx->pc = 0x14805Cu;
    // 0x14805c: 0x91300  sll         $v0, $t1, 12
    ctx->pc = 0x14805cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 12));
    // 0x148060: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x148060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x148064: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x148064u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x148068: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x148068u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
label_14806c:
    // 0x14806c: 0x18a5023  subu        $t2, $t4, $t2
    ctx->pc = 0x14806cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x148070: 0x29420008  slti        $v0, $t2, 0x8
    ctx->pc = 0x148070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x148074: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x148074u;
    {
        const bool branch_taken_0x148074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148074) {
            ctx->pc = 0x148078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148074u;
            // 0x148078: 0x10b4023  subu        $t0, $t0, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148090u;
            goto label_148090;
        }
    }
    ctx->pc = 0x14807Cu;
    // 0x14807c: 0xa1300  sll         $v0, $t2, 12
    ctx->pc = 0x14807cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 12));
    // 0x148080: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x148080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x148084: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x148084u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x148088: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x148088u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x14808c: 0x10b4023  subu        $t0, $t0, $t3
    ctx->pc = 0x14808cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_148090:
    // 0x148090: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x148090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x148094: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x148094u;
    {
        const bool branch_taken_0x148094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148094) {
            ctx->pc = 0x148098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148094u;
            // 0x148098: 0xec3823  subu        $a3, $a3, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1480B0u;
            goto label_1480b0;
        }
    }
    ctx->pc = 0x14809Cu;
    // 0x14809c: 0x81300  sll         $v0, $t0, 12
    ctx->pc = 0x14809cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x1480a0: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1480a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1480a4: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x1480a4u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1480a8: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x1480a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x1480ac: 0xec3823  subu        $a3, $a3, $t4
    ctx->pc = 0x1480acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_1480b0:
    // 0x1480b0: 0x28e20008  slti        $v0, $a3, 0x8
    ctx->pc = 0x1480b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1480b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1480B4u;
    {
        const bool branch_taken_0x1480b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1480B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1480B4u;
        // 0x1480b8: 0x71300  sll         $v0, $a3, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1480b4) {
            ctx->pc = 0x1480C8u;
            goto label_1480c8;
        }
    }
    ctx->pc = 0x1480BCu;
    // 0x1480bc: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1480bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1480c0: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x1480c0u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1480c4: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x1480c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
label_1480c8:
    // 0x1480c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1480c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1480cc: 0x2d0821  addu        $at, $at, $t5
    ctx->pc = 0x1480ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 13)));
    // 0x1480d0: 0xac250210  sw          $a1, 0x210($at)
    ctx->pc = 0x1480d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 528), GPR_U32(ctx, 5));
    // 0x1480d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1480D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1480D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1480DCu;
    // 0x1480dc: 0x0  nop
    ctx->pc = 0x1480dcu;
    // NOP
label_1480e0:
    // 0x1480e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1480e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1480e4: 0x2d0821  addu        $at, $at, $t5
    ctx->pc = 0x1480e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 13)));
    // 0x1480e8: 0xac200210  sw          $zero, 0x210($at)
    ctx->pc = 0x1480e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 528), GPR_U32(ctx, 0));
    // 0x1480ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1480ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1480ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1480F4u;
}
