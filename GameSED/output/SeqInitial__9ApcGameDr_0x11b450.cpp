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

// Function: SeqInitial__9ApcGameDr
// Address: 0x11b450 - 0x11b478
void SeqInitial__9ApcGameDr_0x11b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqInitial__9ApcGameDr_0x11b450");
#endif

    switch (ctx->pc) {
        case 0x11b46cu: goto label_11b46c;
        default: break;
    }

    ctx->pc = 0x11b450u;

    // 0x11b450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b458: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11b45c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B45Cu;
    {
        const bool branch_taken_0x11b45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B45Cu;
        // 0x11b460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b45c) {
            ctx->pc = 0x11B46Cu;
            goto label_11b46c;
        }
    }
    ctx->pc = 0x11B464u;
    // 0x11b464: 0xc060e88  jal         func_183A20
    ctx->pc = 0x11B464u;
    SET_GPR_U32(ctx, 31, 0x11B46Cu);
    ctx->pc = 0x11B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B464u;
    // 0x11b468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x11B464u, 0x11B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B46Cu;
label_11b46c:
    // 0x11b46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b470: 0x3e00008  jr          $ra
    ctx->pc = 0x11B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B470u;
        // 0x11b474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B478u;
}
