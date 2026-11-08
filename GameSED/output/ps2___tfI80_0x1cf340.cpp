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

// Function: __tfI80
// Address: 0x1cf340 - 0x1cf374
void ps2___tfI80_0x1cf340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tfI80_0x1cf340");
#endif

    ctx->pc = 0x1cf340u;

    // 0x1cf340: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cf340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cf344: 0x2445deb0  addiu       $a1, $v0, -0x2150
    ctx->pc = 0x1cf344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
    // 0x1cf348: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cf348u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24DEB0u));
    // 0x1cf34c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF34Cu;
    {
        const bool branch_taken_0x1cf34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF34Cu;
        // 0x1cf350: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf34c) {
            ctx->pc = 0x1CF36Cu;
            goto label_1cf36c;
        }
    }
    ctx->pc = 0x1CF354u;
    // 0x1cf354: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1cf354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1cf358: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1cf358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1cf35c: 0x2463c1f0  addiu       $v1, $v1, -0x3E10
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951408));
    // 0x1cf360: 0x24840d70  addiu       $a0, $a0, 0xD70
    ctx->pc = 0x1cf360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    // 0x1cf364: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cf364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1cf368: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1cf368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1cf36c:
    // 0x1cf36c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF374u;
}
