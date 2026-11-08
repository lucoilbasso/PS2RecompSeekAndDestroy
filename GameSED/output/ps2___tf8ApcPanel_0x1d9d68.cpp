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

// Function: __tf8ApcPanel
// Address: 0x1d9d68 - 0x1d9db4
void ps2___tf8ApcPanel_0x1d9d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf8ApcPanel_0x1d9d68");
#endif

    switch (ctx->pc) {
        case 0x1d9d8cu: goto label_1d9d8c;
        case 0x1d9da0u: goto label_1d9da0;
        default: break;
    }

    ctx->pc = 0x1d9d68u;

    // 0x1d9d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9d6c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d9d70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d74: 0x245011b8  addiu       $s0, $v0, 0x11B8
    ctx->pc = 0x1d9d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4536));
    // 0x1d9d78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4111B8u));
    // 0x1d9d7c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9D7Cu;
    {
        const bool branch_taken_0x1d9d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D7Cu;
        // 0x1d9d80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d7c) {
            ctx->pc = 0x1D9DA0u;
            goto label_1d9da0;
        }
    }
    ctx->pc = 0x1D9D84u;
    // 0x1d9d84: 0xc0785a0  jal         func_1E1680
    ctx->pc = 0x1D9D84u;
    SET_GPR_U32(ctx, 31, 0x1D9D8Cu);
    ctx->pc = 0x1E1680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1680u, 0x1D9D84u, 0x1D9D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D8Cu;
label_1d9d8c:
    // 0x1d9d8c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d9d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d9d90: 0x24a56e78  addiu       $a1, $a1, 0x6E78
    ctx->pc = 0x1d9d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28280));
    // 0x1d9d94: 0x278691b8  addiu       $a2, $gp, -0x6E48
    ctx->pc = 0x1d9d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
    // 0x1d9d98: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D9D98u;
    SET_GPR_U32(ctx, 31, 0x1D9DA0u);
    ctx->pc = 0x1D9D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D98u;
    // 0x1d9d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D9D98u, 0x1D9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DA0u;
label_1d9da0:
    // 0x1d9da0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d9da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9da8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9dac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DACu;
        // 0x1d9db0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9DB4u;
}
