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

// Function: EffectSetPosition__FP9FVector32
// Address: 0x132698 - 0x1326e4
void EffectSetPosition__FP9FVector32_0x132698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSetPosition__FP9FVector32_0x132698");
#endif

    switch (ctx->pc) {
        case 0x132698u: goto label_132698;
        case 0x13269cu: goto label_13269c;
        case 0x1326a0u: goto label_1326a0;
        case 0x1326a4u: goto label_1326a4;
        case 0x1326a8u: goto label_1326a8;
        case 0x1326acu: goto label_1326ac;
        case 0x1326b0u: goto label_1326b0;
        case 0x1326b4u: goto label_1326b4;
        case 0x1326b8u: goto label_1326b8;
        case 0x1326bcu: goto label_1326bc;
        case 0x1326c0u: goto label_1326c0;
        case 0x1326c4u: goto label_1326c4;
        case 0x1326c8u: goto label_1326c8;
        case 0x1326ccu: goto label_1326cc;
        case 0x1326d0u: goto label_1326d0;
        case 0x1326d4u: goto label_1326d4;
        case 0x1326d8u: goto label_1326d8;
        case 0x1326dcu: goto label_1326dc;
        case 0x1326e0u: goto label_1326e0;
        default: break;
    }

    ctx->pc = 0x132698u;

label_132698:
    // 0x132698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13269c:
    // 0x13269c: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x13269cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_1326a0:
    // 0x1326a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1326a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1326a4:
    // 0x1326a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1326a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1326a8:
    // 0x1326a8: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x1326a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
label_1326ac:
    // 0x1326ac: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1326acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_1326b0:
    // 0x1326b0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1326b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1326b4:
    // 0x1326b4: 0x8c8602f8  lw          $a2, 0x2F8($a0)
    ctx->pc = 0x1326b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
label_1326b8:
    // 0x1326b8: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
label_1326bc:
    if (ctx->pc == 0x1326BCu) {
        ctx->pc = 0x1326BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326B8u;
        // 0x1326bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1326C0u;
        goto label_1326c0;
    }
    ctx->pc = 0x1326B8u;
    {
        const bool branch_taken_0x1326b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1326b8) {
            ctx->pc = 0x1326BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1326B8u;
            // 0x1326bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1326DCu;
            goto label_1326dc;
        }
    }
    ctx->pc = 0x1326C0u;
label_1326c0:
    // 0x1326c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1326c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1326c4:
    // 0x1326c4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1326c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1326c8:
    // 0x1326c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1326c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1326cc:
    // 0x1326cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1326ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1326d0:
    // 0x1326d0: 0x60f809  jalr        $v1
label_1326d4:
    if (ctx->pc == 0x1326D4u) {
        ctx->pc = 0x1326D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326D0u;
        // 0x1326d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1326D8u;
        goto label_1326d8;
    }
    ctx->pc = 0x1326D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1326D8u);
        ctx->pc = 0x1326D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326D0u;
        // 0x1326d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1326D0u, 0x1326D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1326D8u;
label_1326d8:
    // 0x1326d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1326d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1326dc:
    // 0x1326dc: 0x3e00008  jr          $ra
label_1326e0:
    if (ctx->pc == 0x1326E0u) {
        ctx->pc = 0x1326E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326DCu;
        // 0x1326e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1326E4u;
        goto label_fallthrough_0x1326dc;
    }
    ctx->pc = 0x1326DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1326E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326DCu;
        // 0x1326e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1326DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1326dc:
    ctx->pc = 0x1326E4u;
}
