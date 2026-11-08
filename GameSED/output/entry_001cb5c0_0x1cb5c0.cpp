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

// Function: entry_001cb5c0
// Address: 0x1cb5c0 - 0x1cb5d4
void entry_001cb5c0_0x1cb5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb5c0_0x1cb5c0");
#endif

    switch (ctx->pc) {
        case 0x1cb5c8u: goto label_1cb5c8;
        default: break;
    }

    ctx->pc = 0x1cb5c0u;

    // 0x1cb5c0: 0xc0729c8  jal         func_1CA720
    ctx->pc = 0x1CB5C0u;
    SET_GPR_U32(ctx, 31, 0x1CB5C8u);
    ctx->pc = 0x1CB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5C0u;
    // 0x1cb5c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA720u, 0x1CB5C0u, 0x1CB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5C8u;
label_1cb5c8:
    // 0x1cb5c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5cc: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x1cb5ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb5d0: 0xa62203f8  sh          $v0, 0x3F8($s1)
    ctx->pc = 0x1cb5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cb5d4u;
}
