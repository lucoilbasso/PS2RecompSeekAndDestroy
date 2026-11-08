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

// Function: entry_001323b0
// Address: 0x1323b0 - 0x1323c8
void entry_001323b0_0x1323b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001323b0_0x1323b0");
#endif

    switch (ctx->pc) {
        case 0x1323b8u: goto label_1323b8;
        default: break;
    }

    ctx->pc = 0x1323b0u;

    // 0x1323b0: 0xc04844a  jal         func_121128
    ctx->pc = 0x1323B0u;
    SET_GPR_U32(ctx, 31, 0x1323B8u);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1323B0u, 0x1323B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323B8u;
label_1323b8:
    // 0x1323b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1323b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1323bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1323BCu;
    {
        const bool branch_taken_0x1323bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1323C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323BCu;
        // 0x1323c0: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323bc) {
            ctx->pc = 0x1323C8u;
            return;
        }
    }
    ctx->pc = 0x1323C4u;
    // 0x1323c4: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x1323c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    ctx->pc = 0x1323c8u;
}
