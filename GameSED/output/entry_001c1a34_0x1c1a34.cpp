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

// Function: entry_001c1a34
// Address: 0x1c1a34 - 0x1c1a5c
void entry_001c1a34_0x1c1a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a34_0x1c1a34");
#endif

    switch (ctx->pc) {
        case 0x1c1a3cu: goto label_1c1a3c;
        case 0x1c1a54u: goto label_1c1a54;
        default: break;
    }

    ctx->pc = 0x1c1a34u;

    // 0x1c1a34: 0xc07071a  jal         func_1C1C68
    ctx->pc = 0x1C1A34u;
    SET_GPR_U32(ctx, 31, 0x1C1A3Cu);
    ctx->pc = 0x1C1A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A34u;
    // 0x1c1a38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1C68u, 0x1C1A34u, 0x1C1A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A3Cu;
label_1c1a3c:
    // 0x1c1a3c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1A3Cu;
    {
        const bool branch_taken_0x1c1a3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A3Cu;
        // 0x1c1a40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a3c) {
            ctx->pc = 0x1C1A5Cu;
            return;
        }
    }
    ctx->pc = 0x1C1A44u;
    // 0x1c1a44: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A44u;
    {
        const bool branch_taken_0x1c1a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A44u;
        // 0x1c1a48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a44) {
            ctx->pc = 0x1C1A5Cu;
            return;
        }
    }
    ctx->pc = 0x1C1A4Cu;
    // 0x1c1a4c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C1A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A54u);
    ctx->pc = 0x1C1A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A4Cu;
    // 0x1c1a50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C1A4Cu, 0x1C1A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A54u;
label_1c1a54:
    // 0x1c1a54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1A54u;
    {
        const bool branch_taken_0x1c1a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A54u;
        // 0x1c1a58: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a54) {
            ctx->pc = 0x1C1A60u;
            return;
        }
    }
    ctx->pc = 0x1C1A5Cu;
}
