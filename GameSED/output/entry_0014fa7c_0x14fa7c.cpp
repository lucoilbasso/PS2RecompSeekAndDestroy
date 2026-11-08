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

// Function: entry_0014fa7c
// Address: 0x14fa7c - 0x14fadc
void entry_0014fa7c_0x14fa7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa7c_0x14fa7c");
#endif

    switch (ctx->pc) {
        case 0x14fa88u: goto label_14fa88;
        case 0x14fab4u: goto label_14fab4;
        case 0x14fac4u: goto label_14fac4;
        case 0x14fad8u: goto label_14fad8;
        default: break;
    }

    ctx->pc = 0x14fa7cu;

    // 0x14fa7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fa80: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x14FA80u;
    SET_GPR_U32(ctx, 31, 0x14FA88u);
    ctx->pc = 0x14FA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA80u;
    // 0x14fa84: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1853D8u, 0x14FA80u, 0x14FA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA88u;
label_14fa88:
    // 0x14fa88: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x14fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14fa8c: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x14fa8cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
    // 0x14fa90: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x14fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14fa94: 0x46006845  abs.s       $f1, $f13
    ctx->pc = 0x14fa94u;
    ctx->f[1] = FPU_ABS_S(ctx->f[13]);
    // 0x14fa98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14fa98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14fa9c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x14fa9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14faa0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x14faa0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14faa4: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x14FAA4u;
    {
        const bool branch_taken_0x14faa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14faa4) {
            ctx->pc = 0x14FAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FAA4u;
            // 0x14faa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB14u;
            return;
        }
    }
    ctx->pc = 0x14FAACu;
    // 0x14faac: 0xc067a02  jal         func_19E808
    ctx->pc = 0x14FAACu;
    SET_GPR_U32(ctx, 31, 0x14FAB4u);
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x14FAACu, 0x14FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAB4u;
label_14fab4:
    // 0x14fab4: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x14fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x14fab8: 0x8e060310  lw          $a2, 0x310($s0)
    ctx->pc = 0x14fab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x14fabc: 0xc058562  jal         func_161588
    ctx->pc = 0x14FABCu;
    SET_GPR_U32(ctx, 31, 0x14FAC4u);
    ctx->pc = 0x14FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FABCu;
    // 0x14fac0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161588u, 0x14FABCu, 0x14FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAC4u;
label_14fac4:
    // 0x14fac4: 0x8e04076c  lw          $a0, 0x76C($s0)
    ctx->pc = 0x14fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
    // 0x14fac8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14FAC8u;
    {
        const bool branch_taken_0x14fac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fac8) {
            ctx->pc = 0x14FACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FAC8u;
            // 0x14facc: 0x8e020184  lw          $v0, 0x184($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FADCu;
            return;
        }
    }
    ctx->pc = 0x14FAD0u;
    // 0x14fad0: 0xc061944  jal         func_186510
    ctx->pc = 0x14FAD0u;
    SET_GPR_U32(ctx, 31, 0x14FAD8u);
    ctx->pc = 0x186510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186510u, 0x14FAD0u, 0x14FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAD8u;
label_14fad8:
    // 0x14fad8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x14fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    ctx->pc = 0x14fadcu;
}
