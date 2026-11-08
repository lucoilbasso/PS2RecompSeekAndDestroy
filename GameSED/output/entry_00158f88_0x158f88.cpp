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

// Function: entry_00158f88
// Address: 0x158f88 - 0x159000
void entry_00158f88_0x158f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158f88_0x158f88");
#endif

    ctx->pc = 0x158f88u;

    // 0x158f88: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x158F88u;
    {
        const bool branch_taken_0x158f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F88u;
        // 0x158f8c: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f88) {
            ctx->pc = 0x159000u;
            return;
        }
    }
    ctx->pc = 0x158F90u;
    // 0x158f90: 0xc5010408  lwc1        $f1, 0x408($t0)
    ctx->pc = 0x158f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158f94: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x158f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158f98: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x158f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158f9c: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x158f9cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x158fa0: 0xc5010400  lwc1        $f1, 0x400($t0)
    ctx->pc = 0x158fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158fa4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x158fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x158fa8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x158fa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158fac: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x158FACu;
    {
        const bool branch_taken_0x158fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158fac) {
            ctx->pc = 0x159000u;
            return;
        }
    }
    ctx->pc = 0x158FB4u;
    // 0x158fb4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x158fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158fb8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x158fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x158fbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x158fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158fc0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x158FC0u;
    {
        const bool branch_taken_0x158fc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FC0u;
        // 0x158fc4: 0x25060410  addiu       $a2, $t0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fc0) {
            ctx->pc = 0x159000u;
            return;
        }
    }
    ctx->pc = 0x158FC8u;
    // 0x158fc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158fcc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x158fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x158fd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158fd4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x158fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x158fd8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158fd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158fdc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x158fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x158fe0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x158fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x158fe4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x158fe4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x158fe8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x158fe8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x158fec: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x158fecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x158ff0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x158ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x158ff4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x158FF4u;
    {
        const bool branch_taken_0x158ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FF4u;
        // 0x158ff8: 0xc5420008  lwc1        $f2, 0x8($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ff4) {
            ctx->pc = 0x159074u;
            return;
        }
    }
    ctx->pc = 0x158FFCu;
    // 0x158ffc: 0x0  nop
    ctx->pc = 0x158ffcu;
    // NOP
    ctx->pc = 0x159000u;
}
