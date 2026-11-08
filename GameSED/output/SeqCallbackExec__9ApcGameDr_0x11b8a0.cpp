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

// Function: SeqCallbackExec__9ApcGameDr
// Address: 0x11b8a0 - 0x11b8e8
void SeqCallbackExec__9ApcGameDr_0x11b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeqCallbackExec__9ApcGameDr_0x11b8a0");
#endif

    switch (ctx->pc) {
        case 0x11b8d4u: goto label_11b8d4;
        default: break;
    }

    ctx->pc = 0x11b8a0u;

    // 0x11b8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b8a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b8a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11b8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11b8b0: 0x8e0640a8  lw          $a2, 0x40A8($s0)
    ctx->pc = 0x11b8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16552)));
    // 0x11b8b4: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B8B4u;
    {
        const bool branch_taken_0x11b8b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b8b4) {
            ctx->pc = 0x11B8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B8B4u;
            // 0x11b8b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B8DCu;
            goto label_11b8dc;
        }
    }
    ctx->pc = 0x11B8BCu;
    // 0x11b8bc: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x11b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x11b8c0: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x11b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x11b8c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B8C4u;
    {
        const bool branch_taken_0x11b8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8C4u;
        // 0x11b8c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8c4) {
            ctx->pc = 0x11B8D4u;
            goto label_11b8d4;
        }
    }
    ctx->pc = 0x11B8CCu;
    // 0x11b8cc: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B8CCu;
    SET_GPR_U32(ctx, 31, 0x11B8D4u);
    ctx->pc = 0x11B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B8CCu;
    // 0x11b8d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B8CCu, 0x11B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B8D4u;
label_11b8d4:
    // 0x11b8d4: 0xae0040a8  sw          $zero, 0x40A8($s0)
    ctx->pc = 0x11b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16552), GPR_U32(ctx, 0));
    // 0x11b8d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b8dc:
    // 0x11b8dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8E0u;
        // 0x11b8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B8E8u;
}
