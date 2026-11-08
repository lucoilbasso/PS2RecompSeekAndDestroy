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

// Function: entry_00158ee0
// Address: 0x158ee0 - 0x158f88
void entry_00158ee0_0x158ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158ee0_0x158ee0");
#endif

    ctx->pc = 0x158ee0u;

    // 0x158ee0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x158EE0u;
    {
        const bool branch_taken_0x158ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EE0u;
        // 0x158ee4: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ee0) {
            ctx->pc = 0x158F88u;
            return;
        }
    }
    ctx->pc = 0x158EE8u;
    // 0x158ee8: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x158ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158eec: 0xc5020400  lwc1        $f2, 0x400($t0)
    ctx->pc = 0x158eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158ef0: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x158ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ef4: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x158ef4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x158ef8: 0xc5010408  lwc1        $f1, 0x408($t0)
    ctx->pc = 0x158ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158efc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x158efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x158f00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x158f00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158f04: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x158F04u;
    {
        const bool branch_taken_0x158f04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158f04) {
            ctx->pc = 0x158F88u;
            return;
        }
    }
    ctx->pc = 0x158F0Cu;
    // 0x158f0c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x158f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158f10: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x158f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x158f14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158f18: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x158F18u;
    {
        const bool branch_taken_0x158f18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F18u;
        // 0x158f1c: 0x25060410  addiu       $a2, $t0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f18) {
            ctx->pc = 0x158F88u;
            return;
        }
    }
    ctx->pc = 0x158F20u;
    // 0x158f20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158f24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158f2c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x158f2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158f30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158f30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158f34: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x158f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158f38: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158f3c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158f3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158f40: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158f40u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158f44: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158f44u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158f48: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158f48u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158f4c: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x158f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158f50: 0x25060420  addiu       $a2, $t0, 0x420
    ctx->pc = 0x158f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1056));
    // 0x158f54: 0xc5010404  lwc1        $f1, 0x404($t0)
    ctx->pc = 0x158f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158f58: 0xc5000408  lwc1        $f0, 0x408($t0)
    ctx->pc = 0x158f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158f5c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x158f5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158f60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x158f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158f64: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x158f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158f68: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158f6c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158f6cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158f70: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158f70u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158f74: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158f74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158f78: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158f78u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158f7c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x158F7Cu;
    {
        const bool branch_taken_0x158f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F7Cu;
        // 0x158f80: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f7c) {
            ctx->pc = 0x1590A4u;
            return;
        }
    }
    ctx->pc = 0x158F84u;
    // 0x158f84: 0x0  nop
    ctx->pc = 0x158f84u;
    // NOP
    ctx->pc = 0x158f88u;
}
