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

// Function: entry_001a8d60
// Address: 0x1a8d60 - 0x1a8d90
void entry_001a8d60_0x1a8d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8d60_0x1a8d60");
#endif

    switch (ctx->pc) {
        case 0x1a8d8cu: goto label_1a8d8c;
        default: break;
    }

    ctx->pc = 0x1a8d60u;

    // 0x1a8d60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8d64: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1a8d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d68: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a8d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8d70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8d74: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8d78: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a8d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8D7Cu;
    {
        const bool branch_taken_0x1a8d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D7Cu;
        // 0x1a8d80: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d7c) {
            ctx->pc = 0x1A8D90u;
            return;
        }
    }
    ctx->pc = 0x1A8D84u;
    // 0x1a8d84: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8D84u;
    SET_GPR_U32(ctx, 31, 0x1A8D8Cu);
    ctx->pc = 0x1A8D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D84u;
    // 0x1a8d88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8D84u, 0x1A8D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D8Cu;
label_1a8d8c:
    // 0x1a8d8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a8d90u;
}
