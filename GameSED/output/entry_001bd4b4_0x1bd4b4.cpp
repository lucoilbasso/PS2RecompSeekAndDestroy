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

// Function: entry_001bd4b4
// Address: 0x1bd4b4 - 0x1bd4d0
void entry_001bd4b4_0x1bd4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd4b4_0x1bd4b4");
#endif

    switch (ctx->pc) {
        case 0x1bd4c8u: goto label_1bd4c8;
        default: break;
    }

    ctx->pc = 0x1bd4b4u;

    // 0x1bd4b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BD4B4u;
    {
        const bool branch_taken_0x1bd4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4B4u;
        // 0x1bd4b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4b4) {
            ctx->pc = 0x1BD4F8u;
            return;
        }
    }
    ctx->pc = 0x1BD4BCu;
    // 0x1bd4bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd4c0: 0xc07105e  jal         func_1C4178
    ctx->pc = 0x1BD4C0u;
    SET_GPR_U32(ctx, 31, 0x1BD4C8u);
    ctx->pc = 0x1BD4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD4C0u;
    // 0x1bd4c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4178u, 0x1BD4C0u, 0x1BD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4C8u;
label_1bd4c8:
    // 0x1bd4c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BD4C8u;
    {
        const bool branch_taken_0x1bd4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4C8u;
        // 0x1bd4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4c8) {
            ctx->pc = 0x1BD4F8u;
            return;
        }
    }
    ctx->pc = 0x1BD4D0u;
}
