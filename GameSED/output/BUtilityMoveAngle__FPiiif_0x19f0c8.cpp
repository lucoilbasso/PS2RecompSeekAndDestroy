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

// Function: BUtilityMoveAngle__FPiiif
// Address: 0x19f0c8 - 0x19f104
void BUtilityMoveAngle__FPiiif_0x19f0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BUtilityMoveAngle__FPiiif_0x19f0c8");
#endif

    switch (ctx->pc) {
        case 0x19f0e0u: goto label_19f0e0;
        default: break;
    }

    ctx->pc = 0x19f0c8u;

    // 0x19f0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19f0d8: 0xc0677e0  jal         func_19DF80
    ctx->pc = 0x19F0D8u;
    SET_GPR_U32(ctx, 31, 0x19F0E0u);
    ctx->pc = 0x19F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0D8u;
    // 0x19f0dc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF80u, 0x19F0D8u, 0x19F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0E0u;
label_19f0e0:
    // 0x19f0e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f0e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f0ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f0f0: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x19f0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19f0f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x19f0f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0FCu;
        // 0x19f100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F104u;
}
