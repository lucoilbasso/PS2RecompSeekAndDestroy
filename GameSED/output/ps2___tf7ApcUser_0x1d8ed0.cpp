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

// Function: __tf7ApcUser
// Address: 0x1d8ed0 - 0x1d8f1c
void ps2___tf7ApcUser_0x1d8ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7ApcUser_0x1d8ed0");
#endif

    switch (ctx->pc) {
        case 0x1d8ef4u: goto label_1d8ef4;
        case 0x1d8f08u: goto label_1d8f08;
        default: break;
    }

    ctx->pc = 0x1d8ed0u;

    // 0x1d8ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8ed4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d8ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8edc: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x1d8edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x1d8ee0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d8ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x410FC8u));
    // 0x1d8ee4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8EE4u;
    {
        const bool branch_taken_0x1d8ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8EE4u;
        // 0x1d8ee8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ee4) {
            ctx->pc = 0x1D8F08u;
            goto label_1d8f08;
        }
    }
    ctx->pc = 0x1D8EECu;
    // 0x1d8eec: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1D8EECu;
    SET_GPR_U32(ctx, 31, 0x1D8EF4u);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1D8EECu, 0x1D8EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8EF4u;
label_1d8ef4:
    // 0x1d8ef4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d8ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d8ef8: 0x24a56c28  addiu       $a1, $a1, 0x6C28
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27688));
    // 0x1d8efc: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1d8efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1d8f00: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D8F00u;
    SET_GPR_U32(ctx, 31, 0x1D8F08u);
    ctx->pc = 0x1D8F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8F00u;
    // 0x1d8f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D8F00u, 0x1D8F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8F08u;
label_1d8f08:
    // 0x1d8f08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d8f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8f10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8F14u;
        // 0x1d8f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8F1Cu;
}
