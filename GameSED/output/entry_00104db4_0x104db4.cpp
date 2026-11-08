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

// Function: entry_00104db4
// Address: 0x104db4 - 0x104dd0
void entry_00104db4_0x104db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104db4_0x104db4");
#endif

    switch (ctx->pc) {
        case 0x104dc4u: goto label_104dc4;
        default: break;
    }

    ctx->pc = 0x104db4u;

    // 0x104db4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x104db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104dbc: 0xc06a19a  jal         func_1A8668
    ctx->pc = 0x104DBCu;
    SET_GPR_U32(ctx, 31, 0x104DC4u);
    ctx->pc = 0x104DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104DBCu;
    // 0x104dc0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8668u, 0x104DBCu, 0x104DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DC4u;
label_104dc4:
    // 0x104dc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x104DC4u;
    {
        const bool branch_taken_0x104dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DC4u;
        // 0x104dc8: 0x24430004  addiu       $v1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dc4) {
            ctx->pc = 0x104DDCu;
            return;
        }
    }
    ctx->pc = 0x104DCCu;
    // 0x104dcc: 0x0  nop
    ctx->pc = 0x104dccu;
    // NOP
    ctx->pc = 0x104dd0u;
}
