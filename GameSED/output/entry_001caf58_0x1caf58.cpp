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

// Function: entry_001caf58
// Address: 0x1caf58 - 0x1caf84
void entry_001caf58_0x1caf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caf58_0x1caf58");
#endif

    ctx->pc = 0x1caf58u;

    // 0x1caf58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1caf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1caf5c: 0x54510012  bnel        $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CAF5Cu;
    {
        const bool branch_taken_0x1caf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1caf5c) {
            ctx->pc = 0x1CAF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAF5Cu;
            // 0x1caf60: 0x26030014  addiu       $v1, $s0, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAFA8u;
            return;
        }
    }
    ctx->pc = 0x1CAF64u;
    // 0x1caf64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1caf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1caf68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1caf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1caf6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAF6Cu;
    {
        const bool branch_taken_0x1caf6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF6Cu;
        // 0x1caf70: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf6c) {
            ctx->pc = 0x1CAF84u;
            return;
        }
    }
    ctx->pc = 0x1CAF74u;
    // 0x1caf74: 0x10910003  beq         $a0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAF74u;
    {
        const bool branch_taken_0x1caf74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x1caf74) {
            ctx->pc = 0x1CAF84u;
            return;
        }
    }
    ctx->pc = 0x1CAF7Cu;
    // 0x1caf7c: 0xc073d72  jal         func_1CF5C8
    ctx->pc = 0x1CAF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAF84u);
    ctx->pc = 0x1CF5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF5C8u, 0x1CAF7Cu, 0x1CAF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF84u;
}
