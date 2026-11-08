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

// Function: SetDrawType__7WcBoardUi
// Address: 0x1913c8 - 0x191424
void SetDrawType__7WcBoardUi_0x1913c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDrawType__7WcBoardUi_0x1913c8");
#endif

    switch (ctx->pc) {
        case 0x191408u: goto label_191408;
        case 0x191414u: goto label_191414;
        default: break;
    }

    ctx->pc = 0x1913c8u;

    // 0x1913c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1913c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1913cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1913ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1913d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1913d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1913d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1913d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1913d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1913dc: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1913DCu;
    {
        const bool branch_taken_0x1913dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1913E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913DCu;
        // 0x1913e0: 0xae050270  sw          $a1, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913dc) {
            ctx->pc = 0x191414u;
            goto label_191414;
        }
    }
    ctx->pc = 0x1913E4u;
    // 0x1913e4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1913e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1913e8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1913E8u;
    {
        const bool branch_taken_0x1913e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1913e8) {
            ctx->pc = 0x1913ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1913E8u;
            // 0x1913ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191418u;
            goto label_191418;
        }
    }
    ctx->pc = 0x1913F0u;
    // 0x1913f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1913f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913f4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1913F4u;
    {
        const bool branch_taken_0x1913f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913F4u;
        // 0x1913f8: 0x240501e0  addiu       $a1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913f4) {
            ctx->pc = 0x191400u;
            goto label_191400;
        }
    }
    ctx->pc = 0x1913FCu;
    // 0x1913fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1913fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_191400:
    // 0x191400: 0xc068086  jal         func_1A0218
    ctx->pc = 0x191400u;
    SET_GPR_U32(ctx, 31, 0x191408u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x191400u, 0x191408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191408u;
label_191408:
    // 0x191408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19140c: 0xc06450a  jal         func_191428
    ctx->pc = 0x19140Cu;
    SET_GPR_U32(ctx, 31, 0x191414u);
    ctx->pc = 0x191410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19140Cu;
    // 0x191410: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191428u, 0x19140Cu, 0x191414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191414u;
label_191414:
    // 0x191414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_191418:
    // 0x191418: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x191418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19141c: 0x3e00008  jr          $ra
    ctx->pc = 0x19141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19141Cu;
        // 0x191420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191424u;
}
