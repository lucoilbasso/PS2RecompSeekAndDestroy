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

// Function: InqHeroPanel__8ApcPaneli
// Address: 0x160ac8 - 0x160af8
void InqHeroPanel__8ApcPaneli_0x160ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InqHeroPanel__8ApcPaneli_0x160ac8");
#endif

    ctx->pc = 0x160ac8u;

    // 0x160ac8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x160ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x160acc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x160accu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x160ad0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x160ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x160ad4: 0x8c823630  lw          $v0, 0x3630($a0)
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13872)));
    // 0x160ad8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160AD8u;
    {
        const bool branch_taken_0x160ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ad8) {
            ctx->pc = 0x160ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160AD8u;
            // 0x160adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160AF0u;
            goto label_160af0;
        }
    }
    ctx->pc = 0x160AE0u;
    // 0x160ae0: 0x8c4301b0  lw          $v1, 0x1B0($v0)
    ctx->pc = 0x160ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x160ae4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x160AE4u;
    {
        const bool branch_taken_0x160ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AE4u;
        // 0x160ae8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ae4) {
            ctx->pc = 0x160AF0u;
            goto label_160af0;
        }
    }
    ctx->pc = 0x160AECu;
    // 0x160aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160af0:
    // 0x160af0: 0x3e00008  jr          $ra
    ctx->pc = 0x160AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160AF8u;
}
