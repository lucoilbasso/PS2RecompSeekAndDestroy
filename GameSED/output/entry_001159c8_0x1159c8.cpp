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

// Function: entry_001159c8
// Address: 0x1159c8 - 0x1159e4
void entry_001159c8_0x1159c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001159c8_0x1159c8");
#endif

    ctx->pc = 0x1159c8u;

    // 0x1159c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1159c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1159cc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1159CCu;
    {
        const bool branch_taken_0x1159cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1159D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159CCu;
        // 0x1159d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159cc) {
            ctx->pc = 0x1159E4u;
            return;
        }
    }
    ctx->pc = 0x1159D4u;
    // 0x1159d4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1159d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1159d8: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x1159d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1159dc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1159DCu;
    SET_GPR_U32(ctx, 31, 0x1159E4u);
    ctx->pc = 0x1159E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1159DCu;
    // 0x1159e0: 0x24a54390  addiu       $a1, $a1, 0x4390 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1159DCu, 0x1159E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159E4u;
}
