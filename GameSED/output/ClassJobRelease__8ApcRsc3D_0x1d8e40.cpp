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

// Function: ClassJobRelease__8ApcRsc3D
// Address: 0x1d8e40 - 0x1d8e64
void ClassJobRelease__8ApcRsc3D_0x1d8e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRelease__8ApcRsc3D_0x1d8e40");
#endif

    switch (ctx->pc) {
        case 0x1d8e58u: goto label_1d8e58;
        default: break;
    }

    ctx->pc = 0x1d8e40u;

    // 0x1d8e40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d8e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8e44: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1d8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1d8e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8e4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8e50: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1D8E50u;
    SET_GPR_U32(ctx, 31, 0x1D8E58u);
    ctx->pc = 0x1D8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8E50u;
    // 0x1d8e54: 0x24840fa0  addiu       $a0, $a0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1D8E50u, 0x1D8E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8E58u;
label_1d8e58:
    // 0x1d8e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8E5Cu;
        // 0x1d8e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8E64u;
}
