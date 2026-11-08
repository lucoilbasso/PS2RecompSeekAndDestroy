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

// Function: entry_0010b2c8
// Address: 0x10b2c8 - 0x10b2f4
void entry_0010b2c8_0x10b2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b2c8_0x10b2c8");
#endif

    switch (ctx->pc) {
        case 0x10b2d0u: goto label_10b2d0;
        case 0x10b2f0u: goto label_10b2f0;
        default: break;
    }

    ctx->pc = 0x10b2c8u;

    // 0x10b2c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B2C8u;
    SET_GPR_U32(ctx, 31, 0x10B2D0u);
    ctx->pc = 0x10B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B2C8u;
    // 0x10b2cc: 0x3c148000  lui         $s4, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B2C8u, 0x10B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2D0u;
label_10b2d0:
    // 0x10b2d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b2d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2d8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x10b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b2dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b2e0: 0x10740004  beq         $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B2E0u;
    {
        const bool branch_taken_0x10b2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x10B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2E0u;
        // 0x10b2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2e0) {
            ctx->pc = 0x10B2F4u;
            return;
        }
    }
    ctx->pc = 0x10B2E8u;
    // 0x10b2e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B2E8u;
    SET_GPR_U32(ctx, 31, 0x10B2F0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B2E8u, 0x10B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2F0u;
label_10b2f0:
    // 0x10b2f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10b2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10b2f4u;
}
