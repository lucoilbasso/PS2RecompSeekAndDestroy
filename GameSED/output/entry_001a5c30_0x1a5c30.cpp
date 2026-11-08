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

// Function: entry_001a5c30
// Address: 0x1a5c30 - 0x1a5c54
void entry_001a5c30_0x1a5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5c30_0x1a5c30");
#endif

    switch (ctx->pc) {
        case 0x1a5c50u: goto label_1a5c50;
        default: break;
    }

    ctx->pc = 0x1a5c30u;

    // 0x1a5c30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5c34: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a5c38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a5c3c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1a5c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5c40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5C40u;
    {
        const bool branch_taken_0x1a5c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C40u;
        // 0x1a5c44: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c40) {
            ctx->pc = 0x1A5C54u;
            return;
        }
    }
    ctx->pc = 0x1A5C48u;
    // 0x1a5c48: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A5C48u;
    SET_GPR_U32(ctx, 31, 0x1A5C50u);
    ctx->pc = 0x1A5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C48u;
    // 0x1a5c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A5C48u, 0x1A5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C50u;
label_1a5c50:
    // 0x1a5c50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a5c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a5c54u;
}
