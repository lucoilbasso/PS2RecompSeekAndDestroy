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

// Function: entry_00179cc0
// Address: 0x179cc0 - 0x179cf8
void entry_00179cc0_0x179cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179cc0_0x179cc0");
#endif

    switch (ctx->pc) {
        case 0x179cc8u: goto label_179cc8;
        case 0x179ce0u: goto label_179ce0;
        default: break;
    }

    ctx->pc = 0x179cc0u;

label_179cc0:
    // 0x179cc0: 0xc071794  jal         func_1C5E50
    ctx->pc = 0x179CC0u;
    SET_GPR_U32(ctx, 31, 0x179CC8u);
    ctx->pc = 0x179CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CC0u;
    // 0x179cc4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5E50u, 0x179CC0u, 0x179CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CC8u;
label_179cc8:
    // 0x179cc8: 0x5440fffd  bnel        $v0, $zero, . + 4 + (-0x3 << 2)
    ctx->pc = 0x179CC8u;
    {
        const bool branch_taken_0x179cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179cc8) {
            ctx->pc = 0x179CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179CC8u;
            // 0x179ccc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179cc0;
        }
    }
    ctx->pc = 0x179CD0u;
    // 0x179cd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179cd8: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179CD8u;
    SET_GPR_U32(ctx, 31, 0x179CE0u);
    ctx->pc = 0x179CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179CD8u;
    // 0x179cdc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179CD8u, 0x179CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179CE0u;
label_179ce0:
    // 0x179ce0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x179ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x179ce4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179CE4u;
    {
        const bool branch_taken_0x179ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CE4u;
        // 0x179ce8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ce4) {
            ctx->pc = 0x179CF8u;
            return;
        }
    }
    ctx->pc = 0x179CECu;
    // 0x179cec: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x179cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x179cf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179CF0u;
    {
        const bool branch_taken_0x179cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179CF0u;
        // 0x179cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179cf0) {
            ctx->pc = 0x179D08u;
            return;
        }
    }
    ctx->pc = 0x179CF8u;
}
