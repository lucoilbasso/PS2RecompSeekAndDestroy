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

// Function: __is_pointer__FPv
// Address: 0x1ced58 - 0x1ceda8
void ps2___is_pointer__FPv_0x1ced58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___is_pointer__FPv_0x1ced58");
#endif

    switch (ctx->pc) {
        case 0x1ced98u: goto label_1ced98;
        default: break;
    }

    ctx->pc = 0x1ced58u;

    // 0x1ced58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ced58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ced5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1ced5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ced60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ced64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ced64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced68: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CED68u;
    {
        const bool branch_taken_0x1ced68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED68u;
        // 0x1ced6c: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced68) {
            ctx->pc = 0x1CED98u;
            goto label_1ced98;
        }
    }
    ctx->pc = 0x1CED70u;
    // 0x1ced70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ced74: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1ced74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1ced78: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1ced78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1ced7c: 0x24a51de8  addiu       $a1, $a1, 0x1DE8
    ctx->pc = 0x1ced7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    // 0x1ced80: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1ced80u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced84: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x1ced84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x1ced88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1ced88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ced8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ced8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced90: 0xc073bbe  jal         func_1CEEF8
    ctx->pc = 0x1CED90u;
    SET_GPR_U32(ctx, 31, 0x1CED98u);
    ctx->pc = 0x1CED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED90u;
    // 0x1ced94: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEF8u, 0x1CED90u, 0x1CED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED98u;
label_1ced98:
    // 0x1ced98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ced98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ced9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ceda0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDA0u;
        // 0x1ceda4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEDA8u;
}
