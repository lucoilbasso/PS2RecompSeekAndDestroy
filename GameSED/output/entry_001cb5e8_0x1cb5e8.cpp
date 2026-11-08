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

// Function: entry_001cb5e8
// Address: 0x1cb5e8 - 0x1cb600
void entry_001cb5e8_0x1cb5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb5e8_0x1cb5e8");
#endif

    switch (ctx->pc) {
        case 0x1cb5f0u: goto label_1cb5f0;
        default: break;
    }

    ctx->pc = 0x1cb5e8u;

    // 0x1cb5e8: 0xc0729c8  jal         func_1CA720
    ctx->pc = 0x1CB5E8u;
    SET_GPR_U32(ctx, 31, 0x1CB5F0u);
    ctx->pc = 0x1CB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB5E8u;
    // 0x1cb5ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA720u, 0x1CB5E8u, 0x1CB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5F0u;
label_1cb5f0:
    // 0x1cb5f0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x1cb5f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb5f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5fc: 0xa62303f8  sh          $v1, 0x3F8($s1)
    ctx->pc = 0x1cb5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1cb600u;
}
