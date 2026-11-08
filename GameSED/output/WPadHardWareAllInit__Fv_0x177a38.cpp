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

// Function: WPadHardWareAllInit__Fv
// Address: 0x177a38 - 0x177a5c
void WPadHardWareAllInit__Fv_0x177a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WPadHardWareAllInit__Fv_0x177a38");
#endif

    switch (ctx->pc) {
        case 0x177a48u: goto label_177a48;
        case 0x177a50u: goto label_177a50;
        default: break;
    }

    ctx->pc = 0x177a38u;

    // 0x177a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177a40: 0xc05de98  jal         func_177A60
    ctx->pc = 0x177A40u;
    SET_GPR_U32(ctx, 31, 0x177A48u);
    ctx->pc = 0x177A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A40u;
    // 0x177a44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A60u, 0x177A40u, 0x177A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A48u;
label_177a48:
    // 0x177a48: 0xc05de98  jal         func_177A60
    ctx->pc = 0x177A48u;
    SET_GPR_U32(ctx, 31, 0x177A50u);
    ctx->pc = 0x177A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A48u;
    // 0x177a4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A60u, 0x177A48u, 0x177A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A50u;
label_177a50:
    // 0x177a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177a54: 0x3e00008  jr          $ra
    ctx->pc = 0x177A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A54u;
        // 0x177a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177A5Cu;
}
