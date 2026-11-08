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

// Function: WFileStdReadSyncCallback__FPv
// Address: 0x17d018 - 0x17d038
void WFileStdReadSyncCallback__FPv_0x17d018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WFileStdReadSyncCallback__FPv_0x17d018");
#endif

    switch (ctx->pc) {
        case 0x17d02cu: goto label_17d02c;
        default: break;
    }

    ctx->pc = 0x17d018u;

    // 0x17d018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d01c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17d01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d024: 0xc05f2d6  jal         func_17CB58
    ctx->pc = 0x17D024u;
    SET_GPR_U32(ctx, 31, 0x17D02Cu);
    ctx->pc = 0x17D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D024u;
    // 0x17d028: 0x8ca4004c  lw          $a0, 0x4C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB58u, 0x17D024u, 0x17D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D02Cu;
label_17d02c:
    // 0x17d02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d030: 0x3e00008  jr          $ra
    ctx->pc = 0x17D030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D030u;
        // 0x17d034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D038u;
}
