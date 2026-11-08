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

// Function: entry_0016aed0
// Address: 0x16aed0 - 0x16aef8
void entry_0016aed0_0x16aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aed0_0x16aed0");
#endif

    switch (ctx->pc) {
        case 0x16aedcu: goto label_16aedc;
        case 0x16aef4u: goto label_16aef4;
        default: break;
    }

    ctx->pc = 0x16aed0u;

    // 0x16aed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aed4: 0xc06164c  jal         func_185930
    ctx->pc = 0x16AED4u;
    SET_GPR_U32(ctx, 31, 0x16AEDCu);
    ctx->pc = 0x16AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AED4u;
    // 0x16aed8: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16AED4u, 0x16AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEDCu;
label_16aedc:
    // 0x16aedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16aee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aee4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16aee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aee8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16aee8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x16aeec: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x16AEECu;
    SET_GPR_U32(ctx, 31, 0x16AEF4u);
    ctx->pc = 0x16AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEECu;
    // 0x16aef0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x16AEECu, 0x16AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEF4u;
label_16aef4:
    // 0x16aef4: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x16aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    ctx->pc = 0x16aef8u;
}
