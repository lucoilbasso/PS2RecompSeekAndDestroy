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

// Function: SeqCleanUp__9ApcGameDr
// Address: 0x11b4e0 - 0x11b510
void SeqCleanUp__9ApcGameDr_0x11b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqCleanUp__9ApcGameDr_0x11b4e0");
#endif

    switch (ctx->pc) {
        case 0x11b504u: goto label_11b504;
        default: break;
    }

    ctx->pc = 0x11b4e0u;

    // 0x11b4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b4e8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11b4ec: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x11b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x11b4f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B4F0u;
    {
        const bool branch_taken_0x11b4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4F0u;
        // 0x11b4f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4f0) {
            ctx->pc = 0x11B504u;
            goto label_11b504;
        }
    }
    ctx->pc = 0x11B4F8u;
    // 0x11b4f8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x11b4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b4fc: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B4FCu;
    SET_GPR_U32(ctx, 31, 0x11B504u);
    ctx->pc = 0x11B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4FCu;
    // 0x11b500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B4FCu, 0x11B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B504u;
label_11b504:
    // 0x11b504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b508: 0x3e00008  jr          $ra
    ctx->pc = 0x11B508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B508u;
        // 0x11b50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B510u;
}
