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

// Function: entry_001a70d8
// Address: 0x1a70d8 - 0x1a7100
void entry_001a70d8_0x1a70d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a70d8_0x1a70d8");
#endif

    switch (ctx->pc) {
        case 0x1a70fcu: goto label_1a70fc;
        default: break;
    }

    ctx->pc = 0x1a70d8u;

    // 0x1a70d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a70dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a70e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a70e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a70e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a70e8: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a70e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a70ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A70ECu;
    {
        const bool branch_taken_0x1a70ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70ECu;
        // 0x1a70f0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70ec) {
            ctx->pc = 0x1A7100u;
            return;
        }
    }
    ctx->pc = 0x1A70F4u;
    // 0x1a70f4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A70F4u;
    SET_GPR_U32(ctx, 31, 0x1A70FCu);
    ctx->pc = 0x1A70F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A70F4u;
    // 0x1a70f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A70F4u, 0x1A70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70FCu;
label_1a70fc:
    // 0x1a70fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a70fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a7100u;
}
