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

// Function: entry_001a7f20
// Address: 0x1a7f20 - 0x1a7f48
void entry_001a7f20_0x1a7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7f20_0x1a7f20");
#endif

    switch (ctx->pc) {
        case 0x1a7f3cu: goto label_1a7f3c;
        default: break;
    }

    ctx->pc = 0x1a7f20u;

    // 0x1a7f20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a7f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7f24: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a7f28: 0x2c5182a  slt         $v1, $s6, $a1
    ctx->pc = 0x1a7f28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a7f2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7F2Cu;
    {
        const bool branch_taken_0x1a7f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F2Cu;
        // 0x1a7f30: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f2c) {
            ctx->pc = 0x1A7F48u;
            return;
        }
    }
    ctx->pc = 0x1A7F34u;
    // 0x1a7f34: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7F34u;
    SET_GPR_U32(ctx, 31, 0x1A7F3Cu);
    ctx->pc = 0x1A7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F34u;
    // 0x1a7f38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7F34u, 0x1A7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7F3Cu;
label_1a7f3c:
    // 0x1a7f3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7F3Cu;
    {
        const bool branch_taken_0x1a7f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F3Cu;
        // 0x1a7f40: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f3c) {
            ctx->pc = 0x1A7F4Cu;
            return;
        }
    }
    ctx->pc = 0x1A7F44u;
    // 0x1a7f44: 0x0  nop
    ctx->pc = 0x1a7f44u;
    // NOP
    ctx->pc = 0x1a7f48u;
}
