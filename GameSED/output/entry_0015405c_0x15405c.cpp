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

// Function: entry_0015405c
// Address: 0x15405c - 0x1540a8
void entry_0015405c_0x15405c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015405c_0x15405c");
#endif

    switch (ctx->pc) {
        case 0x15407cu: goto label_15407c;
        case 0x154084u: goto label_154084;
        default: break;
    }

    ctx->pc = 0x15405cu;

    // 0x15405c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15405cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x154060: 0x46000505  abs.s       $f20, $f0
    ctx->pc = 0x154060u;
    ctx->f[20] = FPU_ABS_S(ctx->f[0]);
    // 0x154064: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x154064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x154068: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x154068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15406c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x15406cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x154070: 0xc620085c  lwc1        $f0, 0x85C($s1)
    ctx->pc = 0x154070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154074: 0xc04c99a  jal         func_132668
    ctx->pc = 0x154074u;
    SET_GPR_U32(ctx, 31, 0x15407Cu);
    ctx->pc = 0x154078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154074u;
    // 0x154078: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x132668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132668u, 0x154074u, 0x15407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15407Cu;
label_15407c:
    // 0x15407c: 0xc04c9a6  jal         func_132698
    ctx->pc = 0x15407Cu;
    SET_GPR_U32(ctx, 31, 0x154084u);
    ctx->pc = 0x154080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15407Cu;
    // 0x154080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132698u, 0x15407Cu, 0x154084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154084u;
label_154084:
    // 0x154084: 0xc78082e8  lwc1        $f0, -0x7D18($gp)
    ctx->pc = 0x154084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154088: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x154088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15408c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x15408Cu;
    {
        const bool branch_taken_0x15408c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x154090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15408Cu;
        // 0x154090: 0x240400af  addiu       $a0, $zero, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15408c) {
            ctx->pc = 0x1540A8u;
            return;
        }
    }
    ctx->pc = 0x154094u;
    // 0x154094: 0xc78082ec  lwc1        $f0, -0x7D14($gp)
    ctx->pc = 0x154094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154098: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x154098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15409c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15409Cu;
    {
        const bool branch_taken_0x15409c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1540A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15409Cu;
        // 0x1540a0: 0x240400ad  addiu       $a0, $zero, 0xAD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15409c) {
            ctx->pc = 0x1540C0u;
            return;
        }
    }
    ctx->pc = 0x1540A4u;
    // 0x1540a4: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1540a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    ctx->pc = 0x1540a8u;
}
