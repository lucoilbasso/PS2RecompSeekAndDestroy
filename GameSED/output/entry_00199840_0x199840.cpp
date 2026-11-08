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

// Function: entry_00199840
// Address: 0x199840 - 0x199864
void entry_00199840_0x199840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199840_0x199840");
#endif

    switch (ctx->pc) {
        case 0x199850u: goto label_199850;
        case 0x19985cu: goto label_19985c;
        default: break;
    }

    ctx->pc = 0x199840u;

label_199840:
    // 0x199840: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x199840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x199844: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x199844u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x199848: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x199848u;
    SET_GPR_U32(ctx, 31, 0x199850u);
    ctx->pc = 0x19984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199848u;
    // 0x19984c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x199848u, 0x199850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199850u;
label_199850:
    // 0x199850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199854: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x199854u;
    SET_GPR_U32(ctx, 31, 0x19985Cu);
    ctx->pc = 0x199858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199854u;
    // 0x199858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x199854u, 0x19985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19985Cu;
label_19985c:
    // 0x19985c: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19985Cu;
    {
        const bool branch_taken_0x19985c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x19985c) {
            ctx->pc = 0x199860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19985Cu;
            // 0x199860: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199840;
        }
    }
    ctx->pc = 0x199864u;
}
