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

// Function: entry_0018a664
// Address: 0x18a664 - 0x18a678
void entry_0018a664_0x18a664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a664_0x18a664");
#endif

    switch (ctx->pc) {
        case 0x18a674u: goto label_18a674;
        default: break;
    }

    ctx->pc = 0x18a664u;

    // 0x18a664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a66c: 0xc061372  jal         func_184DC8
    ctx->pc = 0x18A66Cu;
    SET_GPR_U32(ctx, 31, 0x18A674u);
    ctx->pc = 0x18A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A66Cu;
    // 0x18a670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x18A66Cu, 0x18A674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A674u;
label_18a674:
    // 0x18a674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18a674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x18a678u;
}
