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

// Function: ClassJobRelease__9ApcObjRsc
// Address: 0x1d78e0 - 0x1d791c
void ClassJobRelease__9ApcObjRsc_0x1d78e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobRelease__9ApcObjRsc_0x1d78e0");
#endif

    switch (ctx->pc) {
        case 0x1d7908u: goto label_1d7908;
        default: break;
    }

    ctx->pc = 0x1d78e0u;

    // 0x1d78e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d78e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d78e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d78e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d78e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d78e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d78ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d78f0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1d78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d78f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D78F4u;
    {
        const bool branch_taken_0x1d78f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78F4u;
        // 0x1d78f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78f4) {
            ctx->pc = 0x1D790Cu;
            goto label_1d790c;
        }
    }
    ctx->pc = 0x1D78FCu;
    // 0x1d78fc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1d78fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1d7900: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1D7900u;
    SET_GPR_U32(ctx, 31, 0x1D7908u);
    ctx->pc = 0x1D7904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7900u;
    // 0x1d7904: 0x248405e8  addiu       $a0, $a0, 0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1D7900u, 0x1D7908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7908u;
label_1d7908:
    // 0x1d7908: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1d7908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_1d790c:
    // 0x1d790c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d790cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7910: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7914: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7914u;
        // 0x1d7918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D791Cu;
}
