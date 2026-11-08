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

// Function: entry_001d6e60
// Address: 0x1d6e60 - 0x1d6e84
void entry_001d6e60_0x1d6e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6e60_0x1d6e60");
#endif

    switch (ctx->pc) {
        case 0x1d6e68u: goto label_1d6e68;
        default: break;
    }

    ctx->pc = 0x1d6e60u;

    // 0x1d6e60: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D6E60u;
    SET_GPR_U32(ctx, 31, 0x1D6E68u);
    ctx->pc = 0x1D6E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6E60u;
    // 0x1d6e64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D6E60u, 0x1D6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E68u;
label_1d6e68:
    // 0x1d6e68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d6e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6e6c: 0x26a51998  addiu       $a1, $s5, 0x1998
    ctx->pc = 0x1d6e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 6552));
    // 0x1d6e70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d6e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6E74u;
    {
        const bool branch_taken_0x1d6e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E74u;
        // 0x1d6e78: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e74) {
            ctx->pc = 0x1D6E84u;
            return;
        }
    }
    ctx->pc = 0x1D6E7Cu;
    // 0x1d6e7c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D6E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6E84u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D6E7Cu, 0x1D6E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6E84u;
}
