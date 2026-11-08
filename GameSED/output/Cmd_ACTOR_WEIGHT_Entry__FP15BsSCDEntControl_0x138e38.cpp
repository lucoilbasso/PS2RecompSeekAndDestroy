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

// Function: Cmd_ACTOR_WEIGHT_Entry__FP15BsSCDEntControl
// Address: 0x138e38 - 0x138e78
void Cmd_ACTOR_WEIGHT_Entry__FP15BsSCDEntControl_0x138e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_WEIGHT_Entry__FP15BsSCDEntControl_0x138e38");
#endif

    switch (ctx->pc) {
        case 0x138e54u: goto label_138e54;
        default: break;
    }

    ctx->pc = 0x138e38u;

    // 0x138e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138e3c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138e40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x138e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138e44: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x138e44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x138e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138e4c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x138E4Cu;
    SET_GPR_U32(ctx, 31, 0x138E54u);
    ctx->pc = 0x138E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E4Cu;
    // 0x138e50: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x138E4Cu, 0x138E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E54u;
label_138e54:
    // 0x138e54: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x138e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x138e58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x138e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138e5c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x138e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x138e60: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x138e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x138e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x138e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x138e68: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x138e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x138e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138e70: 0x3e00008  jr          $ra
    ctx->pc = 0x138E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E70u;
        // 0x138e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138E78u;
}
