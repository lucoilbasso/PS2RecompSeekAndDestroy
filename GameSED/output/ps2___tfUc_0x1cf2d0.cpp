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

// Function: __tfUc
// Address: 0x1cf2d0 - 0x1cf304
void ps2___tfUc_0x1cf2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfUc_0x1cf2d0");
#endif

    ctx->pc = 0x1cf2d0u;

    // 0x1cf2d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cf2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cf2d4: 0x2445dea0  addiu       $a1, $v0, -0x2160
    ctx->pc = 0x1cf2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
    // 0x1cf2d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DEA0u));
    // 0x1cf2dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF2DCu;
    {
        const bool branch_taken_0x1cf2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2DCu;
        // 0x1cf2e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2dc) {
            ctx->pc = 0x1CF2FCu;
            goto label_1cf2fc;
        }
    }
    ctx->pc = 0x1CF2E4u;
    // 0x1cf2e4: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cf2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cf2e8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1cf2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1cf2ec: 0x2463c1e0  addiu       $v1, $v1, -0x3E20
    ctx->pc = 0x1cf2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951392));
    // 0x1cf2f0: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1cf2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x1cf2f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cf2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1cf2f8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1cf2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1cf2fc:
    // 0x1cf2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF304u;
}
