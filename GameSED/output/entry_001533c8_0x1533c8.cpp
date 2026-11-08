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

// Function: entry_001533c8
// Address: 0x1533c8 - 0x1533dc
void entry_001533c8_0x1533c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001533c8_0x1533c8");
#endif

    switch (ctx->pc) {
        case 0x1533d8u: goto label_1533d8;
        default: break;
    }

    ctx->pc = 0x1533c8u;

    // 0x1533c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1533c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1533ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533d0: 0xc04c5ac  jal         func_1316B0
    ctx->pc = 0x1533D0u;
    SET_GPR_U32(ctx, 31, 0x1533D8u);
    ctx->pc = 0x1533D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533D0u;
    // 0x1533d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1316B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1316B0u, 0x1533D0u, 0x1533D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533D8u;
label_1533d8:
    // 0x1533d8: 0xae021258  sw          $v0, 0x1258($s0)
    ctx->pc = 0x1533d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4696), GPR_U32(ctx, 2));
    ctx->pc = 0x1533dcu;
}
