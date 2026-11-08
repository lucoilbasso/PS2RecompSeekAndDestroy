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

// Function: entry_001557f4
// Address: 0x1557f4 - 0x15580c
void entry_001557f4_0x1557f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001557f4_0x1557f4");
#endif

    switch (ctx->pc) {
        case 0x155800u: goto label_155800;
        default: break;
    }

    ctx->pc = 0x1557f4u;

    // 0x1557f4: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1557f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1557f8: 0xc0533a4  jal         func_14CE90
    ctx->pc = 0x1557F8u;
    SET_GPR_U32(ctx, 31, 0x155800u);
    ctx->pc = 0x1557FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1557F8u;
    // 0x1557fc: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CE90u, 0x1557F8u, 0x155800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155800u;
label_155800:
    // 0x155800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155804: 0x3e00008  jr          $ra
    ctx->pc = 0x155804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155804u;
        // 0x155808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15580Cu;
}
