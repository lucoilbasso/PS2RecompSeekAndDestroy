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

// Function: ApSCDEntInqMessageLibTocParam32__Fii
// Address: 0x106208 - 0x106284
void ApSCDEntInqMessageLibTocParam32__Fii_0x106208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntInqMessageLibTocParam32__Fii_0x106208");
#endif

    switch (ctx->pc) {
        case 0x106258u: goto label_106258;
        case 0x106268u: goto label_106268;
        default: break;
    }

    ctx->pc = 0x106208u;

    // 0x106208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10620c: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x10620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x106210: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x106210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x106214: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x106214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106218: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x106218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10621c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10621cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106224: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x106224u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x106228: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x106228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10622c: 0x8c70038c  lw          $s0, 0x38C($v1)
    ctx->pc = 0x10622cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 908)));
    // 0x106230: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x106230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x106234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x106234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106238: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x106238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10623c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x10623cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x106240: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106240u;
    {
        const bool branch_taken_0x106240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106240u;
        // 0x106244: 0x668821  addu        $s1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106240) {
            ctx->pc = 0x106258u;
            goto label_106258;
        }
    }
    ctx->pc = 0x106248u;
    // 0x106248: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x106248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10624c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x10624cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x106250: 0xc068186  jal         func_1A0618
    ctx->pc = 0x106250u;
    SET_GPR_U32(ctx, 31, 0x106258u);
    ctx->pc = 0x106254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106250u;
    // 0x106254: 0x24a53858  addiu       $a1, $a1, 0x3858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x106250u, 0x106258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106258u;
label_106258:
    // 0x106258: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x106258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10625c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10625cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106260: 0xc06a19a  jal         func_1A8668
    ctx->pc = 0x106260u;
    SET_GPR_U32(ctx, 31, 0x106268u);
    ctx->pc = 0x106264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106260u;
    // 0x106264: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8668u, 0x106260u, 0x106268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106268u;
label_106268:
    // 0x106268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10626c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x10626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x106270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x106270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x106274: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x106274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106278: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x106278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10627c: 0x3e00008  jr          $ra
    ctx->pc = 0x10627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10627Cu;
        // 0x106280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10627Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106284u;
}
