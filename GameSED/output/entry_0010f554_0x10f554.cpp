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

// Function: entry_0010f554
// Address: 0x10f554 - 0x10f578
void entry_0010f554_0x10f554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f554_0x10f554");
#endif

    switch (ctx->pc) {
        case 0x10f560u: goto label_10f560;
        default: break;
    }

    ctx->pc = 0x10f554u;

    // 0x10f554: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f558: 0xc064a60  jal         func_192980
    ctx->pc = 0x10F558u;
    SET_GPR_U32(ctx, 31, 0x10F560u);
    ctx->pc = 0x10F55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F558u;
    // 0x10f55c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192980u, 0x10F558u, 0x10F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F560u;
label_10f560:
    // 0x10f560: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f564: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10f564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f568: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10f568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f56c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10f56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10f570: 0x3e00008  jr          $ra
    ctx->pc = 0x10F570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F570u;
        // 0x10f574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F578u;
}
