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

// Function: _Error
// Address: 0x1be280 - 0x1be2d4
void ps2__Error_0x1be280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Error_0x1be280");
#endif

    switch (ctx->pc) {
        case 0x1be2b8u: goto label_1be2b8;
        case 0x1be2c8u: goto label_1be2c8;
        default: break;
    }

    ctx->pc = 0x1be280u;

    // 0x1be280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1be284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1be288: 0x8c830858  lw          $v1, 0x858($a0)
    ctx->pc = 0x1be288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2136)));
    // 0x1be28c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE28Cu;
    {
        const bool branch_taken_0x1be28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be28c) {
            ctx->pc = 0x1BE2C0u;
            goto label_1be2c0;
        }
    }
    ctx->pc = 0x1BE294u;
    // 0x1be294: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE294u;
    {
        const bool branch_taken_0x1be294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be294) {
            ctx->pc = 0x1BE2C0u;
            goto label_1be2c0;
        }
    }
    ctx->pc = 0x1BE29Cu;
    // 0x1be29c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1be29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1be2a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE2A0u;
    {
        const bool branch_taken_0x1be2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2A0u;
        // 0x1be2a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2a0) {
            ctx->pc = 0x1BE2C0u;
            goto label_1be2c0;
        }
    }
    ctx->pc = 0x1BE2A8u;
    // 0x1be2a8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1be2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1be2ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1be2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1be2b0: 0xc06f684  jal         func_1BDA10
    ctx->pc = 0x1BE2B0u;
    SET_GPR_U32(ctx, 31, 0x1BE2B8u);
    ctx->pc = 0x1BE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE2B0u;
    // 0x1be2b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA10u, 0x1BE2B0u, 0x1BE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2B8u;
label_1be2b8:
    // 0x1be2b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE2B8u;
    {
        const bool branch_taken_0x1be2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2B8u;
        // 0x1be2bc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be2b8) {
            ctx->pc = 0x1BE2CCu;
            goto label_1be2cc;
        }
    }
    ctx->pc = 0x1BE2C0u;
label_1be2c0:
    // 0x1be2c0: 0xc06f88e  jal         func_1BE238
    ctx->pc = 0x1BE2C0u;
    SET_GPR_U32(ctx, 31, 0x1BE2C8u);
    ctx->pc = 0x1BE2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE2C0u;
    // 0x1be2c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE238u, 0x1BE2C0u, 0x1BE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE2C8u;
label_1be2c8:
    // 0x1be2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1be2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1be2cc:
    // 0x1be2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE2CCu;
        // 0x1be2d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE2D4u;
}
