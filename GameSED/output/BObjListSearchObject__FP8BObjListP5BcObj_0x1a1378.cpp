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

// Function: BObjListSearchObject__FP8BObjListP5BcObj
// Address: 0x1a1378 - 0x1a13b8
void BObjListSearchObject__FP8BObjListP5BcObj_0x1a1378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BObjListSearchObject__FP8BObjListP5BcObj_0x1a1378");
#endif

    switch (ctx->pc) {
        case 0x1a1388u: goto label_1a1388;
        default: break;
    }

    ctx->pc = 0x1a1378u;

    // 0x1a1378: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1378u;
    {
        const bool branch_taken_0x1a1378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1378u;
        // 0x1a137c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1378) {
            ctx->pc = 0x1A13B0u;
            goto label_1a13b0;
        }
    }
    ctx->pc = 0x1A1380u;
    // 0x1a1380: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1384: 0x0  nop
    ctx->pc = 0x1a1384u;
    // NOP
label_1a1388:
    // 0x1a1388: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1388u;
    {
        const bool branch_taken_0x1a1388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1388u;
        // 0x1a138c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1388) {
            ctx->pc = 0x1A13B0u;
            goto label_1a13b0;
        }
    }
    ctx->pc = 0x1A1390u;
    // 0x1a1390: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a1390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1394: 0x0  nop
    ctx->pc = 0x1a1394u;
    // NOP
    // 0x1a1398: 0x0  nop
    ctx->pc = 0x1a1398u;
    // NOP
    // 0x1a139c: 0x0  nop
    ctx->pc = 0x1a139cu;
    // NOP
    // 0x1a13a0: 0x0  nop
    ctx->pc = 0x1a13a0u;
    // NOP
    // 0x1a13a4: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A13A4u;
    {
        const bool branch_taken_0x1a13a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a13a4) {
            ctx->pc = 0x1A13A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A13A4u;
            // 0x1a13a8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1388;
        }
    }
    ctx->pc = 0x1A13ACu;
    // 0x1a13ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a13acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a13b0:
    // 0x1a13b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A13B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A13B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A13B8u;
}
