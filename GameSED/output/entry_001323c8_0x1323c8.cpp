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

// Function: entry_001323c8
// Address: 0x1323c8 - 0x1323e0
void entry_001323c8_0x1323c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001323c8_0x1323c8");
#endif

    switch (ctx->pc) {
        case 0x1323d0u: goto label_1323d0;
        default: break;
    }

    ctx->pc = 0x1323c8u;

    // 0x1323c8: 0xc04844a  jal         func_121128
    ctx->pc = 0x1323C8u;
    SET_GPR_U32(ctx, 31, 0x1323D0u);
    ctx->pc = 0x1323CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1323C8u;
    // 0x1323cc: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1323C8u, 0x1323D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323D0u;
label_1323d0:
    // 0x1323d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1323d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1323D4u;
    {
        const bool branch_taken_0x1323d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323D4u;
        // 0x1323d8: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323d4) {
            ctx->pc = 0x1323E0u;
            return;
        }
    }
    ctx->pc = 0x1323DCu;
    // 0x1323dc: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1323dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    ctx->pc = 0x1323e0u;
}
