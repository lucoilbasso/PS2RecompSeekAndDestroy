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

// Function: entry_00159000
// Address: 0x159000 - 0x159074
void entry_00159000_0x159000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159000_0x159000");
#endif

    ctx->pc = 0x159000u;

    // 0x159000: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x159000u;
    {
        const bool branch_taken_0x159000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x159000) {
            ctx->pc = 0x159004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159000u;
            // 0x159004: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x159008u;
    // 0x159008: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x159008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15900c: 0xc5020408  lwc1        $f2, 0x408($t0)
    ctx->pc = 0x15900cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159010: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x159010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159014: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x159014u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x159018: 0xc5010400  lwc1        $f1, 0x400($t0)
    ctx->pc = 0x159018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15901c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x15901cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x159020: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x159020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159024: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x159024u;
    {
        const bool branch_taken_0x159024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159024) {
            ctx->pc = 0x159028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159024u;
            // 0x159028: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x15902Cu;
    // 0x15902c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x15902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159030: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x159030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x159034: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159038: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x159038u;
    {
        const bool branch_taken_0x159038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159038) {
            ctx->pc = 0x15903Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159038u;
            // 0x15903c: 0x8d030018  lw          $v1, 0x18($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1590B8u;
            return;
        }
    }
    ctx->pc = 0x159040u;
    // 0x159040: 0x25060410  addiu       $a2, $t0, 0x410
    ctx->pc = 0x159040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1040));
    // 0x159044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x159048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15904c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15904cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159050: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x159050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159054: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x159054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x159058: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x159058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15905c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15905cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x159060: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x159060u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x159064: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x159064u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x159068: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x159068u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x15906c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15906cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x159070: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x159070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    ctx->pc = 0x159074u;
}
