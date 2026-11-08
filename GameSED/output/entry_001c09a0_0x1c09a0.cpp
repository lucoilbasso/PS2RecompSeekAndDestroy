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

// Function: entry_001c09a0
// Address: 0x1c09a0 - 0x1c09c8
void entry_001c09a0_0x1c09a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c09a0_0x1c09a0");
#endif

    ctx->pc = 0x1c09a0u;

    // 0x1c09a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1c09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c09a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C09A4u;
    {
        const bool branch_taken_0x1c09a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c09a4) {
            ctx->pc = 0x1C09C8u;
            return;
        }
    }
    ctx->pc = 0x1C09ACu;
    // 0x1c09ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c09acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c09b0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1c09b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1c09b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C09B4u;
    {
        const bool branch_taken_0x1c09b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09B4u;
        // 0x1c09b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09b4) {
            ctx->pc = 0x1C09C8u;
            return;
        }
    }
    ctx->pc = 0x1C09BCu;
    // 0x1c09bc: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x1c09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x1c09c0: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1C09C0u;
    SET_GPR_U32(ctx, 31, 0x1C09C8u);
    ctx->pc = 0x1C09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09C0u;
    // 0x1c09c4: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1C09C0u, 0x1C09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09C8u;
}
