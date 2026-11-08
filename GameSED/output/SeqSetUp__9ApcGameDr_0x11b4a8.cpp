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

// Function: SeqSetUp__9ApcGameDr
// Address: 0x11b4a8 - 0x11b4e0
void SeqSetUp__9ApcGameDr_0x11b4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqSetUp__9ApcGameDr_0x11b4a8");
#endif

    switch (ctx->pc) {
        case 0x11b4d4u: goto label_11b4d4;
        default: break;
    }

    ctx->pc = 0x11b4a8u;

    // 0x11b4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b4b0: 0x8c8640ac  lw          $a2, 0x40AC($a0)
    ctx->pc = 0x11b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16556)));
    // 0x11b4b4: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B4B4u;
    {
        const bool branch_taken_0x11b4b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b4b4) {
            ctx->pc = 0x11B4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B4B4u;
            // 0x11b4b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B4D8u;
            goto label_11b4d8;
        }
    }
    ctx->pc = 0x11B4BCu;
    // 0x11b4bc: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x11b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x11b4c0: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x11b4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x11b4c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B4C4u;
    {
        const bool branch_taken_0x11b4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4C4u;
        // 0x11b4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4c4) {
            ctx->pc = 0x11B4D4u;
            goto label_11b4d4;
        }
    }
    ctx->pc = 0x11B4CCu;
    // 0x11b4cc: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B4CCu;
    SET_GPR_U32(ctx, 31, 0x11B4D4u);
    ctx->pc = 0x11B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4CCu;
    // 0x11b4d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B4CCu, 0x11B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B4D4u;
label_11b4d4:
    // 0x11b4d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b4d8:
    // 0x11b4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4D8u;
        // 0x11b4dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B4E0u;
}
