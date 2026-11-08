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

// Function: entry_001a0948
// Address: 0x1a0948 - 0x1a0970
void entry_001a0948_0x1a0948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0948_0x1a0948");
#endif

    switch (ctx->pc) {
        case 0x1a0950u: goto label_1a0950;
        default: break;
    }

    ctx->pc = 0x1a0948u;

    // 0x1a0948: 0xc05bcca  jal         func_16F328
    ctx->pc = 0x1A0948u;
    SET_GPR_U32(ctx, 31, 0x1A0950u);
    ctx->pc = 0x1A094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0948u;
    // 0x1a094c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F328u, 0x1A0948u, 0x1A0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0950u;
label_1a0950:
    // 0x1a0950: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x1a0950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a0954: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x1a0954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1a0958: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x1a0958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a095c: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x1a095cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1a0960: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x1a0960u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a0964: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x1a0964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1a0968: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0968u;
        // 0x1a096c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0970u;
}
