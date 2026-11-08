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

// Function: entry_00123744
// Address: 0x123744 - 0x123808
void entry_00123744_0x123744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123744_0x123744");
#endif

    ctx->pc = 0x123744u;

    // 0x123744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x123744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x123748: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x123748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12374c: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x12374Cu;
    {
        const bool branch_taken_0x12374c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12374c) {
            ctx->pc = 0x123750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12374Cu;
            // 0x123750: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123808u;
            return;
        }
    }
    ctx->pc = 0x123754u;
    // 0x123754: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x123754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x123758: 0x8e2600e4  lw          $a2, 0xE4($s1)
    ctx->pc = 0x123758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x12375c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x123760: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x123760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x123764: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x123764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x123768: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x123768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x12376c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x12376cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x123770: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x123770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x123774: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x123774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x123778: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x123778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x12377c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x12377cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x123780: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x123780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x123784: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x123784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123788: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x123788u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12378c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12378cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x123790: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x123790u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x123794: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x123794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x123798: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x123798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x12379c: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x12379cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1237a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1237a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1237a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1237a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1237a8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1237a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1237ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1237acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1237b0: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x1237b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x1237b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1237b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1237b8: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x1237b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x1237bc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1237bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1237c0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1237c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x1237c4: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x1237c4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1237c8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x1237c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1237cc: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1237ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1237d0: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x1237d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1237d4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1237d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1237d8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1237d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1237dc: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1237dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1237e0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x1237e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1237e4: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x1237e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1237e8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1237e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1237ec: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x1237ecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1237f0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x1237f0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1237f4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x1237f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1237f8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1237f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1237fc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1237FCu;
    {
        const bool branch_taken_0x1237fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237FCu;
        // 0x123800: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237fc) {
            ctx->pc = 0x123858u;
            return;
        }
    }
    ctx->pc = 0x123804u;
    // 0x123804: 0x0  nop
    ctx->pc = 0x123804u;
    // NOP
    ctx->pc = 0x123808u;
}
