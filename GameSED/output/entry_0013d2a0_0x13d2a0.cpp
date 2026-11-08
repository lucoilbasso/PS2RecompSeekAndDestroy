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

// Function: entry_0013d2a0
// Address: 0x13d2a0 - 0x13d2d8
void entry_0013d2a0_0x13d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d2a0_0x13d2a0");
#endif

    switch (ctx->pc) {
        case 0x13d2a8u: goto label_13d2a8;
        default: break;
    }

    ctx->pc = 0x13d2a0u;

label_13d2a0:
    // 0x13d2a0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x13D2A0u;
    SET_GPR_U32(ctx, 31, 0x13D2A8u);
    ctx->pc = 0x13D2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D2A0u;
    // 0x13d2a4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x13D2A0u, 0x13D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D2A8u;
label_13d2a8:
    // 0x13d2a8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x13d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x13d2ac: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x13D2ACu;
    {
        const bool branch_taken_0x13d2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2ACu;
        // 0x13d2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2ac) {
            ctx->pc = 0x13D2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d2a0;
        }
    }
    ctx->pc = 0x13D2B4u;
    // 0x13d2b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13d2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13d2b8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D2B8u;
    {
        const bool branch_taken_0x13d2b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2B8u;
        // 0x13d2bc: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2b8) {
            ctx->pc = 0x13D2D8u;
            return;
        }
    }
    ctx->pc = 0x13D2C0u;
    // 0x13d2c0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13d2c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x13d2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x13d2c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13d2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13d2cc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x13d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x13d2d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D2D0u;
    {
        const bool branch_taken_0x13d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D2D0u;
        // 0x13d2d4: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d2d0) {
            ctx->pc = 0x13D2E0u;
            return;
        }
    }
    ctx->pc = 0x13D2D8u;
}
