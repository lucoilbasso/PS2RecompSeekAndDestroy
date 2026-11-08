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

// Function: caseD_9
// Address: 0x110dd8 - 0x110e08
void caseD_9_0x110dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x110dd8");
#endif

    switch (ctx->pc) {
        case 0x110de0u: goto label_110de0;
        case 0x110e04u: goto label_110e04;
        default: break;
    }

    ctx->pc = 0x110dd8u;

    // 0x110dd8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110DD8u;
    SET_GPR_U32(ctx, 31, 0x110DE0u);
    ctx->pc = 0x110DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DD8u;
    // 0x110ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110DD8u, 0x110DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DE0u;
label_110de0:
    // 0x110de0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110de4: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x110de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x110de8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x110DE8u;
    {
        const bool branch_taken_0x110de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110de8) {
            ctx->pc = 0x110DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110DE8u;
            // 0x110dec: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110E08u;
            return;
        }
    }
    ctx->pc = 0x110DF0u;
    // 0x110df0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110df8: 0x24a53e50  addiu       $a1, $a1, 0x3E50
    ctx->pc = 0x110df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15952));
    // 0x110dfc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x110DFCu;
    SET_GPR_U32(ctx, 31, 0x110E04u);
    ctx->pc = 0x110E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DFCu;
    // 0x110e00: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x110DFCu, 0x110E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E04u;
label_110e04:
    // 0x110e04: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x110e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x110e08u;
}
