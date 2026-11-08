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

// Function: __tf9WcSpu2Man
// Address: 0x1dc598 - 0x1dc5e4
void ps2___tf9WcSpu2Man_0x1dc598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf9WcSpu2Man_0x1dc598");
#endif

    switch (ctx->pc) {
        case 0x1dc5bcu: goto label_1dc5bc;
        case 0x1dc5d0u: goto label_1dc5d0;
        default: break;
    }

    ctx->pc = 0x1dc598u;

    // 0x1dc598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc59c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1dc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1dc5a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc5a4: 0x245014c0  addiu       $s0, $v0, 0x14C0
    ctx->pc = 0x1dc5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x1dc5a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4114C0u));
    // 0x1dc5ac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC5ACu;
    {
        const bool branch_taken_0x1dc5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5ACu;
        // 0x1dc5b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5ac) {
            ctx->pc = 0x1DC5D0u;
            goto label_1dc5d0;
        }
    }
    ctx->pc = 0x1DC5B4u;
    // 0x1dc5b4: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1DC5B4u;
    SET_GPR_U32(ctx, 31, 0x1DC5BCu);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1DC5B4u, 0x1DC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC5BCu;
label_1dc5bc:
    // 0x1dc5bc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1dc5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1dc5c0: 0x24a57b00  addiu       $a1, $a1, 0x7B00
    ctx->pc = 0x1dc5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    // 0x1dc5c4: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1dc5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1dc5c8: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1DC5C8u;
    SET_GPR_U32(ctx, 31, 0x1DC5D0u);
    ctx->pc = 0x1DC5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC5C8u;
    // 0x1dc5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1DC5C8u, 0x1DC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC5D0u;
label_1dc5d0:
    // 0x1dc5d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc5d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc5d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5DCu;
        // 0x1dc5e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC5E4u;
}
