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

// Function: entry_001a6b90
// Address: 0x1a6b90 - 0x1a6ba8
void entry_001a6b90_0x1a6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6b90_0x1a6b90");
#endif

    switch (ctx->pc) {
        case 0x1a6b9cu: goto label_1a6b9c;
        default: break;
    }

    ctx->pc = 0x1a6b90u;

    // 0x1a6b90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a6b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6b94: 0xc07206e  jal         func_1C81B8
    ctx->pc = 0x1A6B94u;
    SET_GPR_U32(ctx, 31, 0x1A6B9Cu);
    ctx->pc = 0x1A6B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B94u;
    // 0x1a6b98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81B8u, 0x1A6B94u, 0x1A6B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B9Cu;
label_1a6b9c:
    // 0x1a6b9c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1a6b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x1a6ba0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6ba0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6ba4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1a6ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1a6ba8u;
}
