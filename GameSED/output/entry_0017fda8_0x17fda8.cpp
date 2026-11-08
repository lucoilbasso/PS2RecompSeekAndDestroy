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

// Function: entry_0017fda8
// Address: 0x17fda8 - 0x17fdc4
void entry_0017fda8_0x17fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fda8_0x17fda8");
#endif

    switch (ctx->pc) {
        case 0x17fdb0u: goto label_17fdb0;
        default: break;
    }

    ctx->pc = 0x17fda8u;

    // 0x17fda8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x17FDA8u;
    SET_GPR_U32(ctx, 31, 0x17FDB0u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x17FDA8u, 0x17FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDB0u;
label_17fdb0:
    // 0x17fdb0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x17fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17fdb4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FDB4u;
    {
        const bool branch_taken_0x17fdb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDB4u;
        // 0x17fdb8: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdb4) {
            ctx->pc = 0x17FDC4u;
            return;
        }
    }
    ctx->pc = 0x17FDBCu;
    // 0x17fdbc: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17FDBCu;
    {
        const bool branch_taken_0x17fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fdbc) {
            ctx->pc = 0x17FDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FDBCu;
            // 0x17fdc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FE00u;
            return;
        }
    }
    ctx->pc = 0x17FDC4u;
}
