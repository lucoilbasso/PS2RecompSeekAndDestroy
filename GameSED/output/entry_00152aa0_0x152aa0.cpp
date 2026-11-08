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

// Function: entry_00152aa0
// Address: 0x152aa0 - 0x152ac0
void entry_00152aa0_0x152aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152aa0_0x152aa0");
#endif

    switch (ctx->pc) {
        case 0x152ab4u: goto label_152ab4;
        default: break;
    }

    ctx->pc = 0x152aa0u;

    // 0x152aa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x152aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x152aa4: 0x52820007  beql        $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152AA4u;
    {
        const bool branch_taken_0x152aa4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x152aa4) {
            ctx->pc = 0x152AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152AA4u;
            // 0x152aa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152AC4u;
            return;
        }
    }
    ctx->pc = 0x152AACu;
    // 0x152aac: 0xc059594  jal         func_165650
    ctx->pc = 0x152AACu;
    SET_GPR_U32(ctx, 31, 0x152AB4u);
    ctx->pc = 0x152AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AACu;
    // 0x152ab0: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165650u, 0x152AACu, 0x152AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AB4u;
label_152ab4:
    // 0x152ab4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x152ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x152ab8: 0x8c64b830  lw          $a0, -0x47D0($v1)
    ctx->pc = 0x152ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x152abc: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x152abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x152ac0u;
}
