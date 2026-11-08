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

// Function: entry_0012cc9c
// Address: 0x12cc9c - 0x12cd18
void entry_0012cc9c_0x12cc9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cc9c_0x12cc9c");
#endif

    ctx->pc = 0x12cc9cu;

    // 0x12cc9c: 0xc60500d4  lwc1        $f5, 0xD4($s0)
    ctx->pc = 0x12cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12cca0: 0x4605a034  c.lt.s      $f20, $f5
    ctx->pc = 0x12cca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cca4: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x12CCA4u;
    {
        const bool branch_taken_0x12cca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12cca4) {
            ctx->pc = 0x12CCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CCA4u;
            // 0x12cca8: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD18u;
            return;
        }
    }
    ctx->pc = 0x12CCACu;
    // 0x12ccac: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x12ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x12ccb0: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x12ccb4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x12ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12ccb8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x12ccb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12ccbc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x12ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12ccc0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x12ccc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12ccc4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x12ccc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x12ccc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12cccc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x12ccccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12ccd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12ccd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12ccd4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12ccd8: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x12ccd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x12ccdc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12ccdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12cce0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x12cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12cce4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12cce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12cce8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12cce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12ccec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12ccecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ccf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12ccf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12ccf4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x12ccf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x12ccf8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x12ccf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x12ccfc: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x12ccfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x12cd00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12cd00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12cd04: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x12cd04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x12cd08: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x12cd08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x12cd0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12CD0Cu;
    {
        const bool branch_taken_0x12cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD0Cu;
        // 0x12cd10: 0xe603011c  swc1        $f3, 0x11C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd0c) {
            ctx->pc = 0x12CD3Cu;
            return;
        }
    }
    ctx->pc = 0x12CD14u;
    // 0x12cd14: 0x0  nop
    ctx->pc = 0x12cd14u;
    // NOP
    ctx->pc = 0x12cd18u;
}
