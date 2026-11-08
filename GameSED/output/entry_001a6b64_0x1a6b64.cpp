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

// Function: entry_001a6b64
// Address: 0x1a6b64 - 0x1a6b90
void entry_001a6b64_0x1a6b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6b64_0x1a6b64");
#endif

    switch (ctx->pc) {
        case 0x1a6b74u: goto label_1a6b74;
        case 0x1a6b80u: goto label_1a6b80;
        default: break;
    }

    ctx->pc = 0x1a6b64u;

    // 0x1a6b64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a6b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b6c: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B74u);
    ctx->pc = 0x1A6B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B6Cu;
    // 0x1a6b70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1A6B6Cu, 0x1A6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B74u;
label_1a6b74:
    // 0x1a6b74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b78: 0xc07208c  jal         func_1C8230
    ctx->pc = 0x1A6B78u;
    SET_GPR_U32(ctx, 31, 0x1A6B80u);
    ctx->pc = 0x1A6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B78u;
    // 0x1a6b7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8230u, 0x1A6B78u, 0x1A6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B80u;
label_1a6b80:
    // 0x1a6b80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a6b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6b84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6b84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6b88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6B88u;
    {
        const bool branch_taken_0x1a6b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B88u;
        // 0x1a6b8c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b88) {
            ctx->pc = 0x1A6BA8u;
            return;
        }
    }
    ctx->pc = 0x1A6B90u;
}
