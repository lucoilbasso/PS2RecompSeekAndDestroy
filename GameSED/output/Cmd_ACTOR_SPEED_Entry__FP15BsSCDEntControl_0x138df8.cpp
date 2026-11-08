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

// Function: Cmd_ACTOR_SPEED_Entry__FP15BsSCDEntControl
// Address: 0x138df8 - 0x138e38
void Cmd_ACTOR_SPEED_Entry__FP15BsSCDEntControl_0x138df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_SPEED_Entry__FP15BsSCDEntControl_0x138df8");
#endif

    switch (ctx->pc) {
        case 0x138e14u: goto label_138e14;
        default: break;
    }

    ctx->pc = 0x138df8u;

    // 0x138df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138dfc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138e00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x138e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138e04: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x138e04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x138e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138e0c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x138E0Cu;
    SET_GPR_U32(ctx, 31, 0x138E14u);
    ctx->pc = 0x138E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E0Cu;
    // 0x138e10: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x138E0Cu, 0x138E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E14u;
label_138e14:
    // 0x138e14: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x138e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x138e18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x138e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138e1c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x138e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x138e20: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x138e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x138e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x138e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x138e28: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x138e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x138e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138e30: 0x3e00008  jr          $ra
    ctx->pc = 0x138E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E30u;
        // 0x138e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138E38u;
}
