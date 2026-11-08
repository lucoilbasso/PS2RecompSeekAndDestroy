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

// Function: entry_00158e48
// Address: 0x158e48 - 0x158ee0
void entry_00158e48_0x158e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158e48_0x158e48");
#endif

    ctx->pc = 0x158e48u;

    // 0x158e48: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x158e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x158e4c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x158E4Cu;
    {
        const bool branch_taken_0x158e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E4Cu;
        // 0x158e50: 0x30a20010  andi        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e4c) {
            ctx->pc = 0x158EE0u;
            return;
        }
    }
    ctx->pc = 0x158E54u;
    // 0x158e54: 0x460c3301  sub.s       $f12, $f6, $f12
    ctx->pc = 0x158e54u;
    ctx->f[12] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
    // 0x158e58: 0x460c2801  sub.s       $f0, $f5, $f12
    ctx->pc = 0x158e58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x158e5c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x158e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e60: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x158E60u;
    {
        const bool branch_taken_0x158e60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158e60) {
            ctx->pc = 0x158EE0u;
            return;
        }
    }
    ctx->pc = 0x158E68u;
    // 0x158e68: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x158e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x158e6c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x158e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158e70: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x158E70u;
    {
        const bool branch_taken_0x158e70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158E70u;
        // 0x158e74: 0x25060410  addiu       $a2, $t0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158e70) {
            ctx->pc = 0x158EE0u;
            return;
        }
    }
    ctx->pc = 0x158E78u;
    // 0x158e78: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x158e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x158e7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158e84: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x158e84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158e88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158e8c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x158e8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158e90: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158e94: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158e94u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158e98: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158e98u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158e9c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158e9cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158ea0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158ea4: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x158ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158ea8: 0x25060420  addiu       $a2, $t0, 0x420
    ctx->pc = 0x158ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
    // 0x158eac: 0xc5010404  lwc1        $f1, 0x404($t0)
    ctx->pc = 0x158eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158eb0: 0xc5000408  lwc1        $f0, 0x408($t0)
    ctx->pc = 0x158eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158eb4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x158eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158eb8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x158eb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158ebc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x158ebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158ec0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158ec4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158ec4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158ec8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158ec8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158ecc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158eccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158ed0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158ed4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x158ED4u;
    {
        const bool branch_taken_0x158ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ED4u;
        // 0x158ed8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ed4) {
            ctx->pc = 0x1590A4u;
            return;
        }
    }
    ctx->pc = 0x158EDCu;
    // 0x158edc: 0x0  nop
    ctx->pc = 0x158edcu;
    // NOP
    ctx->pc = 0x158ee0u;
}
