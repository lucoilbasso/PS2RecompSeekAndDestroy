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

// Function: caseD_2
// Address: 0x110d38 - 0x110d50
void caseD_2_0x110d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x110d38");
#endif

    switch (ctx->pc) {
        case 0x110d44u: goto label_110d44;
        default: break;
    }

    ctx->pc = 0x110d38u;

    // 0x110d38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d3c: 0xc044302  jal         func_110C08
    ctx->pc = 0x110D3Cu;
    SET_GPR_U32(ctx, 31, 0x110D44u);
    ctx->pc = 0x110D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D3Cu;
    // 0x110d40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C08u, 0x110D3Cu, 0x110D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D44u;
label_110d44:
    // 0x110d44: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x110D44u;
    {
        const bool branch_taken_0x110d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D44u;
        // 0x110d48: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d44) {
            ctx->pc = 0x1110B0u;
            return;
        }
    }
    ctx->pc = 0x110D4Cu;
    // 0x110d4c: 0x0  nop
    ctx->pc = 0x110d4cu;
    // NOP
    ctx->pc = 0x110d50u;
}
