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

// Function: entry_001a0ae8
// Address: 0x1a0ae8 - 0x1a0b00
void entry_001a0ae8_0x1a0ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0ae8_0x1a0ae8");
#endif

    switch (ctx->pc) {
        case 0x1a0af8u: goto label_1a0af8;
        default: break;
    }

    ctx->pc = 0x1a0ae8u;

    // 0x1a0ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0aec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a0aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a0af0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1A0AF0u;
    SET_GPR_U32(ctx, 31, 0x1A0AF8u);
    ctx->pc = 0x1A0AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0AF0u;
    // 0x1a0af4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1A0AF0u, 0x1A0AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AF8u;
label_1a0af8:
    // 0x1a0af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a0b00u;
}
