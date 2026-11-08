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

// Function: Init__9ApcTestDrP9ApcStudioPc
// Address: 0x11ac88 - 0x11acb4
void Init__9ApcTestDrP9ApcStudioPc_0x11ac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcTestDrP9ApcStudioPc_0x11ac88");
#endif

    switch (ctx->pc) {
        case 0x11ac9cu: goto label_11ac9c;
        default: break;
    }

    ctx->pc = 0x11ac88u;

    // 0x11ac88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ac88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ac8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ac90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11ac94: 0xc066546  jal         func_199518
    ctx->pc = 0x11AC94u;
    SET_GPR_U32(ctx, 31, 0x11AC9Cu);
    ctx->pc = 0x11AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AC94u;
    // 0x11ac98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199518u, 0x11AC94u, 0x11AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC9Cu;
label_11ac9c:
    // 0x11ac9c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x11ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11aca0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11aca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11aca4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x11aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x11aca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11aca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11acac: 0x3e00008  jr          $ra
    ctx->pc = 0x11ACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ACACu;
        // 0x11acb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ACACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ACB4u;
}
