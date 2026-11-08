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

// Function: GetLoadSaveList__8ApcMCard
// Address: 0x11c9e0 - 0x11ca24
void GetLoadSaveList__8ApcMCard_0x11c9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLoadSaveList__8ApcMCard_0x11c9e0");
#endif

    switch (ctx->pc) {
        case 0x11c9f8u: goto label_11c9f8;
        default: break;
    }

    ctx->pc = 0x11c9e0u;

    // 0x11c9e0: 0x24844604  addiu       $a0, $a0, 0x4604
    ctx->pc = 0x11c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17924));
    // 0x11c9e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11c9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c9f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c9f4: 0x0  nop
    ctx->pc = 0x11c9f4u;
    // NOP
label_11c9f8:
    // 0x11c9f8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x11c9fc: 0xc22804  sllv        $a1, $v0, $a2
    ctx->pc = 0x11c9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x11ca00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11ca00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11ca04: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CA04u;
    {
        const bool branch_taken_0x11ca04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x11CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA04u;
        // 0x11ca08: 0x28c30003  slti        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca04) {
            ctx->pc = 0x11CA10u;
            goto label_11ca10;
        }
    }
    ctx->pc = 0x11CA0Cu;
    // 0x11ca0c: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x11ca0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_11ca10:
    // 0x11ca10: 0x0  nop
    ctx->pc = 0x11ca10u;
    // NOP
    // 0x11ca14: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11CA14u;
    {
        const bool branch_taken_0x11ca14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ca14) {
            ctx->pc = 0x11CA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CA14u;
            // 0x11ca18: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c9f8;
        }
    }
    ctx->pc = 0x11CA1Cu;
    // 0x11ca1c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA1Cu;
        // 0x11ca20: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CA24u;
}
