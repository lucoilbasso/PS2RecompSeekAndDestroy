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

// Function: entry_00134e08
// Address: 0x134e08 - 0x134e20
void entry_00134e08_0x134e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e08_0x134e08");
#endif

    switch (ctx->pc) {
        case 0x134e18u: goto label_134e18;
        default: break;
    }

    ctx->pc = 0x134e08u;

    // 0x134e08: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x134E08u;
    {
        const bool branch_taken_0x134e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x134E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E08u;
        // 0x134e0c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e08) {
            ctx->pc = 0x134E48u;
            return;
        }
    }
    ctx->pc = 0x134E10u;
    // 0x134e10: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x134E10u;
    SET_GPR_U32(ctx, 31, 0x134E18u);
    ctx->pc = 0x134E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E10u;
    // 0x134e14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x134E10u, 0x134E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E18u;
label_134e18:
    // 0x134e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x134e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x134e20u;
}
