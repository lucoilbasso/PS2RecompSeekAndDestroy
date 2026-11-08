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

// Function: GetRelHeight__8ApcRsc3DP9FVector32f
// Address: 0x1d8c88 - 0x1d8cc0
void GetRelHeight__8ApcRsc3DP9FVector32f_0x1d8c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRelHeight__8ApcRsc3DP9FVector32f_0x1d8c88");
#endif

    switch (ctx->pc) {
        case 0x1d8ca4u: goto label_1d8ca4;
        default: break;
    }

    ctx->pc = 0x1d8c88u;

    // 0x1d8c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d8c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8c94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d8c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8c9c: 0xc05129a  jal         func_144A68
    ctx->pc = 0x1D8C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D8CA4u);
    ctx->pc = 0x1D8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C9Cu;
    // 0x1d8ca0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x1D8C9Cu, 0x1D8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8CA4u;
label_1d8ca4:
    // 0x1d8ca4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1d8ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8ca8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8cac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d8cacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8cb4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x1d8cb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x1d8cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8CB8u;
        // 0x1d8cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8CC0u;
}
