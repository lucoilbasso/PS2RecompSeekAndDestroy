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

// Function: __tf7ApcTank
// Address: 0x1d9620 - 0x1d9670
void ps2___tf7ApcTank_0x1d9620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7ApcTank_0x1d9620");
#endif

    switch (ctx->pc) {
        case 0x1d9644u: goto label_1d9644;
        case 0x1d965cu: goto label_1d965c;
        default: break;
    }

    ctx->pc = 0x1d9620u;

    // 0x1d9620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9624: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d9624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d9628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d962c: 0x24500ff0  addiu       $s0, $v0, 0xFF0
    ctx->pc = 0x1d962cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4080));
    // 0x1d9630: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d9630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410FF0u));
    // 0x1d9634: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D9634u;
    {
        const bool branch_taken_0x1d9634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9634u;
        // 0x1d9638: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9634) {
            ctx->pc = 0x1D965Cu;
            goto label_1d965c;
        }
    }
    ctx->pc = 0x1D963Cu;
    // 0x1d963c: 0xc0763c8  jal         func_1D8F20
    ctx->pc = 0x1D963Cu;
    SET_GPR_U32(ctx, 31, 0x1D9644u);
    ctx->pc = 0x1D8F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8F20u, 0x1D963Cu, 0x1D9644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9644u;
label_1d9644:
    // 0x1d9644: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d9644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d9648: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d9648u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d964c: 0x24a56e10  addiu       $a1, $a1, 0x6E10
    ctx->pc = 0x1d964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
    // 0x1d9650: 0x24c60fb8  addiu       $a2, $a2, 0xFB8
    ctx->pc = 0x1d9650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4024));
    // 0x1d9654: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D9654u;
    SET_GPR_U32(ctx, 31, 0x1D965Cu);
    ctx->pc = 0x1D9658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9654u;
    // 0x1d9658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D9654u, 0x1D965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D965Cu;
label_1d965c:
    // 0x1d965c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d965cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9664: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9668: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9668u;
        // 0x1d966c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9670u;
}
