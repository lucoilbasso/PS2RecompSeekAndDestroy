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

// Function: __tf5BcObj
// Address: 0x1e1680 - 0x1e16bc
void ps2___tf5BcObj_0x1e1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf5BcObj_0x1e1680");
#endif

    switch (ctx->pc) {
        case 0x1e16a8u: goto label_1e16a8;
        default: break;
    }

    ctx->pc = 0x1e1680u;

    // 0x1e1680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1688: 0x279091b8  addiu       $s0, $gp, -0x6E48
    ctx->pc = 0x1e1688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1e168c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1694: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1694u;
    {
        const bool branch_taken_0x1e1694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1694u;
        // 0x1e1698: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1694) {
            ctx->pc = 0x1E16A8u;
            goto label_1e16a8;
        }
    }
    ctx->pc = 0x1E169Cu;
    // 0x1e169c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e169cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e16a0: 0xc072f4a  jal         func_1CBD28
    ctx->pc = 0x1E16A0u;
    SET_GPR_U32(ctx, 31, 0x1E16A8u);
    ctx->pc = 0x1E16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E16A0u;
    // 0x1e16a4: 0x24a5d8d8  addiu       $a1, $a1, -0x2728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD28u, 0x1E16A0u, 0x1E16A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E16A8u;
label_1e16a8:
    // 0x1e16a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e16a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e16acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e16b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e16b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e16b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E16B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E16B4u;
        // 0x1e16b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E16B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E16BCu;
}
