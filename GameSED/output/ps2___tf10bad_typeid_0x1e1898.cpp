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

// Function: __tf10bad_typeid
// Address: 0x1e1898 - 0x1e18e8
void ps2___tf10bad_typeid_0x1e1898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf10bad_typeid_0x1e1898");
#endif

    switch (ctx->pc) {
        case 0x1e18bcu: goto label_1e18bc;
        case 0x1e18d4u: goto label_1e18d4;
        default: break;
    }

    ctx->pc = 0x1e1898u;

    // 0x1e1898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e189c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1e189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1e18a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e18a4: 0x245020d0  addiu       $s0, $v0, 0x20D0
    ctx->pc = 0x1e18a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8400));
    // 0x1e18a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4120D0u));
    // 0x1e18ac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E18ACu;
    {
        const bool branch_taken_0x1e18ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18ACu;
        // 0x1e18b0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18ac) {
            ctx->pc = 0x1E18D4u;
            goto label_1e18d4;
        }
    }
    ctx->pc = 0x1E18B4u;
    // 0x1e18b4: 0xc078718  jal         func_1E1C60
    ctx->pc = 0x1E18B4u;
    SET_GPR_U32(ctx, 31, 0x1E18BCu);
    ctx->pc = 0x1E1C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1C60u, 0x1E18B4u, 0x1E18BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18BCu;
label_1e18bc:
    // 0x1e18bc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e18bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e18c0: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x1e18c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x1e18c4: 0x24a5c0f0  addiu       $a1, $a1, -0x3F10
    ctx->pc = 0x1e18c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951152));
    // 0x1e18c8: 0x24c6da38  addiu       $a2, $a2, -0x25C8
    ctx->pc = 0x1e18c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957624));
    // 0x1e18cc: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1E18CCu;
    SET_GPR_U32(ctx, 31, 0x1E18D4u);
    ctx->pc = 0x1E18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E18CCu;
    // 0x1e18d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1E18CCu, 0x1E18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18D4u;
label_1e18d4:
    // 0x1e18d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e18d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e18d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e18dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e18dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e18e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E18E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E18E0u;
        // 0x1e18e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E18E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E18E8u;
}
