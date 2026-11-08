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

// Function: $L5
// Address: 0x1d5250 - 0x1d5274
void ps2__L5_0x1d5250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L5_0x1d5250");
#endif

    ctx->pc = 0x1d5250u;

label_1d5250:
    // 0x1d5250: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1d5250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1d5254: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d5254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d5258: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d5258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d525c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d5260: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1d5260u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d5264: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5264u;
    {
        const bool branch_taken_0x1d5264 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d5264) {
            ctx->pc = 0x1D5250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5250;
        }
    }
    ctx->pc = 0x1D526Cu;
    // 0x1d526c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D526Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D526Cu;
        // 0x1d5270: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D526Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5274u;
}
