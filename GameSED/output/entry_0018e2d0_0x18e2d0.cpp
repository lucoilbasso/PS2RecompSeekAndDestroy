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

// Function: entry_0018e2d0
// Address: 0x18e2d0 - 0x18e318
void entry_0018e2d0_0x18e2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e2d0_0x18e2d0");
#endif

    switch (ctx->pc) {
        case 0x18e2f0u: goto label_18e2f0;
        default: break;
    }

    ctx->pc = 0x18e2d0u;

    // 0x18e2d0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x18e2d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18e2d4: 0x105e0010  beq         $v0, $fp, . + 4 + (0x10 << 2)
    ctx->pc = 0x18E2D4u;
    {
        const bool branch_taken_0x18e2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x18E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2D4u;
        // 0x18e2d8: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2d4) {
            ctx->pc = 0x18E318u;
            return;
        }
    }
    ctx->pc = 0x18E2DCu;
    // 0x18e2dc: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x18e2dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18e2e0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x18e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18e2e4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x18e2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18e2e8: 0xc05f2bc  jal         func_17CAF0
    ctx->pc = 0x18E2E8u;
    SET_GPR_U32(ctx, 31, 0x18E2F0u);
    ctx->pc = 0x18E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E2E8u;
    // 0x18e2ec: 0x8ea50020  lw          $a1, 0x20($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CAF0u, 0x18E2E8u, 0x18E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2F0u;
label_18e2f0:
    // 0x18e2f0: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x18e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x18e2f4: 0x14770008  bne         $v1, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x18E2F4u;
    {
        const bool branch_taken_0x18e2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x18E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2F4u;
        // 0x18e2f8: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2f4) {
            ctx->pc = 0x18E318u;
            return;
        }
    }
    ctx->pc = 0x18E2FCu;
    // 0x18e2fc: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x18e2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18e300: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x18E300u;
    {
        const bool branch_taken_0x18e300 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E300u;
        // 0x18e304: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e300) {
            ctx->pc = 0x18E318u;
            return;
        }
    }
    ctx->pc = 0x18E308u;
    // 0x18e308: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x18e308u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e30c: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x18e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x18e310: 0xc05f240  jal         func_17C900
    ctx->pc = 0x18E310u;
    SET_GPR_U32(ctx, 31, 0x18E318u);
    ctx->pc = 0x18E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E310u;
    // 0x18e314: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C900u, 0x18E310u, 0x18E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E318u;
}
