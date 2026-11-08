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

// Function: GdCellFontSearch__6WcFontUs
// Address: 0x183e78 - 0x183ed0
void GdCellFontSearch__6WcFontUs_0x183e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GdCellFontSearch__6WcFontUs_0x183e78");
#endif

    switch (ctx->pc) {
        case 0x183e98u: goto label_183e98;
        default: break;
    }

    ctx->pc = 0x183e78u;

    // 0x183e78: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x183e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x183e7c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x183e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x183e80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e84: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x183E84u;
    {
        const bool branch_taken_0x183e84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E84u;
        // 0x183e88: 0x8c870040  lw          $a3, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e84) {
            ctx->pc = 0x183EC4u;
            goto label_183ec4;
        }
    }
    ctx->pc = 0x183E8Cu;
    // 0x183e8c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x183e8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e90: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x183e90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x183e94: 0x94e40004  lhu         $a0, 0x4($a3)
    ctx->pc = 0x183e94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_183e98:
    // 0x183e98: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x183e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x183e9c: 0x1085000a  beq         $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x183E9Cu;
    {
        const bool branch_taken_0x183e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x183EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183E9Cu;
        // 0x183ea0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e9c) {
            ctx->pc = 0x183EC8u;
            goto label_183ec8;
        }
    }
    ctx->pc = 0x183EA4u;
    // 0x183ea4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183ea8: 0x10890007  beq         $a0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x183EA8u;
    {
        const bool branch_taken_0x183ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x183EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EA8u;
        // 0x183eac: 0xc8182a  slt         $v1, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ea8) {
            ctx->pc = 0x183EC8u;
            goto label_183ec8;
        }
    }
    ctx->pc = 0x183EB0u;
    // 0x183eb0: 0x0  nop
    ctx->pc = 0x183eb0u;
    // NOP
    // 0x183eb4: 0x0  nop
    ctx->pc = 0x183eb4u;
    // NOP
    // 0x183eb8: 0x0  nop
    ctx->pc = 0x183eb8u;
    // NOP
    // 0x183ebc: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x183EBCu;
    {
        const bool branch_taken_0x183ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183ebc) {
            ctx->pc = 0x183EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183EBCu;
            // 0x183ec0: 0x94e40004  lhu         $a0, 0x4($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183e98;
        }
    }
    ctx->pc = 0x183EC4u;
label_183ec4:
    // 0x183ec4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x183ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_183ec8:
    // 0x183ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x183EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183ED0u;
}
