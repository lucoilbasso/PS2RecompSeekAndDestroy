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

// Function: GetDrawGeneList__9ApcEfeGenUi
// Address: 0x1d83e8 - 0x1d8408
void GetDrawGeneList__9ApcEfeGenUi_0x1d83e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDrawGeneList__9ApcEfeGenUi_0x1d83e8");
#endif

    ctx->pc = 0x1d83e8u;

    // 0x1d83e8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d83ec: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x1d83ecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d83f0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1d83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d83f4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D83F4u;
    {
        const bool branch_taken_0x1d83f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83F4u;
        // 0x1d83f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d83f4) {
            ctx->pc = 0x1D8400u;
            goto label_1d8400;
        }
    }
    ctx->pc = 0x1D83FCu;
    // 0x1d83fc: 0x8c620190  lw          $v0, 0x190($v1)
    ctx->pc = 0x1d83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
label_1d8400:
    // 0x1d8400: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8408u;
}
