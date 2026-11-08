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

// Function: SetTLBEntry
// Address: 0x1b8298 - 0x1b82c8
void SetTLBEntry_0x1b8298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTLBEntry_0x1b8298");
#endif

    switch (ctx->pc) {
        case 0x1b82bcu: goto label_1b82bc;
        default: break;
    }

    ctx->pc = 0x1b8298u;

    // 0x1b8298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b829c: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x1b829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x1b82a0: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x1b82a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x1b82a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B82A4u;
    {
        const bool branch_taken_0x1b82a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82A4u;
        // 0x1b82a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82a4) {
            ctx->pc = 0x1B82B4u;
            goto label_1b82b4;
        }
    }
    ctx->pc = 0x1B82ACu;
    // 0x1b82ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B82ACu;
    {
        const bool branch_taken_0x1b82ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82ACu;
        // 0x1b82b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82ac) {
            ctx->pc = 0x1B82BCu;
            goto label_1b82bc;
        }
    }
    ctx->pc = 0x1B82B4u;
label_1b82b4:
    // 0x1b82b4: 0xc06e0a2  jal         func_1B8288
    ctx->pc = 0x1B82B4u;
    SET_GPR_U32(ctx, 31, 0x1B82BCu);
    ctx->pc = 0x1B8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8288u, 0x1B82B4u, 0x1B82BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82BCu;
label_1b82bc:
    // 0x1b82bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b82bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b82c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B82C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82C0u;
        // 0x1b82c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B82C8u;
}
