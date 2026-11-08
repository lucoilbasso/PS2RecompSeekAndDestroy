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

// Function: kCopy
// Address: 0x1b72a8 - 0x1b72e0
void kCopy_0x1b72a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kCopy_0x1b72a8");
#endif

    switch (ctx->pc) {
        case 0x1b72b8u: goto label_1b72b8;
        default: break;
    }

    ctx->pc = 0x1b72a8u;

    // 0x1b72a8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1b72a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1b72ac: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1B72ACu;
    {
        const bool branch_taken_0x1b72ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B72B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72ACu;
        // 0x1b72b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72ac) {
            ctx->pc = 0x1B72D8u;
            goto label_1b72d8;
        }
    }
    ctx->pc = 0x1B72B4u;
    // 0x1b72b4: 0x0  nop
    ctx->pc = 0x1b72b4u;
    // NOP
label_1b72b8:
    // 0x1b72b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b72bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b72bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b72c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b72c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b72c4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1b72c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b72c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b72cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1b72d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B72D0u;
    {
        const bool branch_taken_0x1b72d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b72d0) {
            ctx->pc = 0x1B72B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b72b8;
        }
    }
    ctx->pc = 0x1B72D8u;
label_1b72d8:
    // 0x1b72d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B72D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72D8u;
        // 0x1b72dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B72D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B72E0u;
}
