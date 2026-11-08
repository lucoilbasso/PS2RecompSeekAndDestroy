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

// Function: ClassJobRegist__9ApcObjRsc
// Address: 0x1d78a0 - 0x1d78e0
void ClassJobRegist__9ApcObjRsc_0x1d78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRegist__9ApcObjRsc_0x1d78a0");
#endif

    switch (ctx->pc) {
        case 0x1d78c8u: goto label_1d78c8;
        default: break;
    }

    ctx->pc = 0x1d78a0u;

    // 0x1d78a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d78a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d78a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d78a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d78a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d78a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d78acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d78b0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1d78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d78b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D78B4u;
    {
        const bool branch_taken_0x1d78b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D78B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78B4u;
        // 0x1d78b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78b4) {
            ctx->pc = 0x1D78D0u;
            goto label_1d78d0;
        }
    }
    ctx->pc = 0x1D78BCu;
    // 0x1d78bc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1d78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1d78c0: 0xc068584  jal         func_1A1610
    ctx->pc = 0x1D78C0u;
    SET_GPR_U32(ctx, 31, 0x1D78C8u);
    ctx->pc = 0x1D78C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78C0u;
    // 0x1d78c4: 0x248405e8  addiu       $a0, $a0, 0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1610u, 0x1D78C0u, 0x1D78C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78C8u;
label_1d78c8:
    // 0x1d78c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78cc: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1d78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1d78d0:
    // 0x1d78d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d78d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d78d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d78d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d78d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78D8u;
        // 0x1d78dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D78D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78E0u;
}
