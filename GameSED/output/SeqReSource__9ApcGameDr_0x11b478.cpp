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

// Function: SeqReSource__9ApcGameDr
// Address: 0x11b478 - 0x11b4a8
void SeqReSource__9ApcGameDr_0x11b478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqReSource__9ApcGameDr_0x11b478");
#endif

    switch (ctx->pc) {
        case 0x11b49cu: goto label_11b49c;
        default: break;
    }

    ctx->pc = 0x11b478u;

    // 0x11b478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b480: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11b480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11b484: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x11b484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x11b488: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B488u;
    {
        const bool branch_taken_0x11b488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B488u;
        // 0x11b48c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b488) {
            ctx->pc = 0x11B49Cu;
            goto label_11b49c;
        }
    }
    ctx->pc = 0x11B490u;
    // 0x11b490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11b490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b494: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B494u;
    SET_GPR_U32(ctx, 31, 0x11B49Cu);
    ctx->pc = 0x11B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B494u;
    // 0x11b498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B494u, 0x11B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B49Cu;
label_11b49c:
    // 0x11b49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4A0u;
        // 0x11b4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B4A8u;
}
