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

// Function: entry_001bdea0
// Address: 0x1bdea0 - 0x1bdeac
void entry_001bdea0_0x1bdea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdea0_0x1bdea0");
#endif

    switch (ctx->pc) {
        case 0x1bdea8u: goto label_1bdea8;
        default: break;
    }

    ctx->pc = 0x1bdea0u;

    // 0x1bdea0: 0xc06f756  jal         func_1BDD58
    ctx->pc = 0x1BDEA0u;
    SET_GPR_U32(ctx, 31, 0x1BDEA8u);
    ctx->pc = 0x1BDEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDEA0u;
    // 0x1bdea4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD58u, 0x1BDEA0u, 0x1BDEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEA8u;
label_1bdea8:
    // 0x1bdea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1bdeacu;
}
