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

// Function: entry_00113368
// Address: 0x113368 - 0x113394
void entry_00113368_0x113368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113368_0x113368");
#endif

    switch (ctx->pc) {
        case 0x11337cu: goto label_11337c;
        case 0x113390u: goto label_113390;
        default: break;
    }

    ctx->pc = 0x113368u;

label_113368:
    // 0x113368: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x113368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x11336c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11336cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x113370: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x113370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113374: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x113374u;
    SET_GPR_U32(ctx, 31, 0x11337Cu);
    ctx->pc = 0x113378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113374u;
    // 0x113378: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x113374u, 0x11337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11337Cu;
label_11337c:
    // 0x11337c: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11337Cu;
    {
        const bool branch_taken_0x11337c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x113380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11337Cu;
        // 0x113380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11337c) {
            ctx->pc = 0x113368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113368;
        }
    }
    ctx->pc = 0x113384u;
    // 0x113384: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x113384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113388: 0xc06723e  jal         func_19C8F8
    ctx->pc = 0x113388u;
    SET_GPR_U32(ctx, 31, 0x113390u);
    ctx->pc = 0x11338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113388u;
    // 0x11338c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x113388u, 0x113390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113390u;
label_113390:
    // 0x113390: 0x263233f0  addiu       $s2, $s1, 0x33F0
    ctx->pc = 0x113390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
    ctx->pc = 0x113394u;
}
