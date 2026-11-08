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

// Function: entry_001b5024
// Address: 0x1b5024 - 0x1b5038
void entry_001b5024_0x1b5024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5024_0x1b5024");
#endif

    switch (ctx->pc) {
        case 0x1b502cu: goto label_1b502c;
        case 0x1b5034u: goto label_1b5034;
        default: break;
    }

    ctx->pc = 0x1b5024u;

    // 0x1b5024: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B5024u;
    SET_GPR_U32(ctx, 31, 0x1B502Cu);
    ctx->pc = 0x1B5028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5024u;
    // 0x1b5028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B5024u, 0x1B502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B502Cu;
label_1b502c:
    // 0x1b502c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B502Cu;
    SET_GPR_U32(ctx, 31, 0x1B5034u);
    ctx->pc = 0x1B5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B502Cu;
    // 0x1b5030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B502Cu, 0x1B5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5034u;
label_1b5034:
    // 0x1b5034: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x1b5034u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b5038u;
}
