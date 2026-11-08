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

// Function: entry_001a7840
// Address: 0x1a7840 - 0x1a7860
void entry_001a7840_0x1a7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7840_0x1a7840");
#endif

    ctx->pc = 0x1a7840u;

    // 0x1a7840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a7840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7844: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7848: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a7848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a784c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1a784cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a7850: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7850u;
    {
        const bool branch_taken_0x1a7850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7850u;
        // 0x1a7854: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7850) {
            ctx->pc = 0x1A7860u;
            return;
        }
    }
    ctx->pc = 0x1A7858u;
    // 0x1a7858: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7858u;
    SET_GPR_U32(ctx, 31, 0x1A7860u);
    ctx->pc = 0x1A785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7858u;
    // 0x1a785c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7858u, 0x1A7860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7860u;
}
