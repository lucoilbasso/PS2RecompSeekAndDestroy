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

// Function: __cplus_type_matcher
// Address: 0x1ccb58 - 0x1ccbb8
void ps2___cplus_type_matcher_0x1ccb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___cplus_type_matcher_0x1ccb58");
#endif

    switch (ctx->pc) {
        case 0x1ccb58u: goto label_1ccb58;
        case 0x1ccb5cu: goto label_1ccb5c;
        case 0x1ccb60u: goto label_1ccb60;
        case 0x1ccb64u: goto label_1ccb64;
        case 0x1ccb68u: goto label_1ccb68;
        case 0x1ccb6cu: goto label_1ccb6c;
        case 0x1ccb70u: goto label_1ccb70;
        case 0x1ccb74u: goto label_1ccb74;
        case 0x1ccb78u: goto label_1ccb78;
        case 0x1ccb7cu: goto label_1ccb7c;
        case 0x1ccb80u: goto label_1ccb80;
        case 0x1ccb84u: goto label_1ccb84;
        case 0x1ccb88u: goto label_1ccb88;
        case 0x1ccb8cu: goto label_1ccb8c;
        case 0x1ccb90u: goto label_1ccb90;
        case 0x1ccb94u: goto label_1ccb94;
        case 0x1ccb98u: goto label_1ccb98;
        case 0x1ccb9cu: goto label_1ccb9c;
        case 0x1ccba0u: goto label_1ccba0;
        case 0x1ccba4u: goto label_1ccba4;
        case 0x1ccba8u: goto label_1ccba8;
        case 0x1ccbacu: goto label_1ccbac;
        case 0x1ccbb0u: goto label_1ccbb0;
        case 0x1ccbb4u: goto label_1ccbb4;
        default: break;
    }

    ctx->pc = 0x1ccb58u;

label_1ccb58:
    // 0x1ccb58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ccb5c:
    // 0x1ccb5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ccb60:
    // 0x1ccb60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb64:
    // 0x1ccb64: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_1ccb68:
    if (ctx->pc == 0x1CCB68u) {
        ctx->pc = 0x1CCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB64u;
        // 0x1ccb68: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB6Cu;
        goto label_1ccb6c;
    }
    ctx->pc = 0x1CCB64u;
    {
        const bool branch_taken_0x1ccb64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB64u;
        // 0x1ccb68: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb64) {
            ctx->pc = 0x1CCB7Cu;
            goto label_1ccb7c;
        }
    }
    ctx->pc = 0x1CCB6Cu;
label_1ccb6c:
    // 0x1ccb6c: 0x84c40004  lh          $a0, 0x4($a2)
    ctx->pc = 0x1ccb6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_1ccb70:
    // 0x1ccb70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ccb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ccb74:
    // 0x1ccb74: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_1ccb78:
    if (ctx->pc == 0x1CCB78u) {
        ctx->pc = 0x1CCB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB74u;
        // 0x1ccb78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB7Cu;
        goto label_1ccb7c;
    }
    ctx->pc = 0x1CCB74u;
    {
        const bool branch_taken_0x1ccb74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CCB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB74u;
        // 0x1ccb78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb74) {
            ctx->pc = 0x1CCBA8u;
            goto label_1ccba8;
        }
    }
    ctx->pc = 0x1CCB7Cu;
label_1ccb7c:
    // 0x1ccb7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ccb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ccb80:
    // 0x1ccb80: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_1ccb84:
    if (ctx->pc == 0x1CCB84u) {
        ctx->pc = 0x1CCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB80u;
        // 0x1ccb84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB88u;
        goto label_1ccb88;
    }
    ctx->pc = 0x1CCB80u;
    {
        const bool branch_taken_0x1ccb80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB80u;
        // 0x1ccb84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb80) {
            ctx->pc = 0x1CCBA8u;
            goto label_1ccba8;
        }
    }
    ctx->pc = 0x1CCB88u;
label_1ccb88:
    // 0x1ccb88: 0xa0f809  jalr        $a1
label_1ccb8c:
    if (ctx->pc == 0x1CCB8Cu) {
        ctx->pc = 0x1CCB90u;
        goto label_1ccb90;
    }
    ctx->pc = 0x1CCB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1CCB90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCB88u, 0x1CCB90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCB90u;
label_1ccb90:
    // 0x1ccb90: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1ccb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ccb94:
    // 0x1ccb94: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x1ccb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ccb98:
    // 0x1ccb98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb9c:
    // 0x1ccb9c: 0xc073a08  jal         func_1CE820
label_1ccba0:
    if (ctx->pc == 0x1CCBA0u) {
        ctx->pc = 0x1CCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB9Cu;
        // 0x1ccba0: 0x26070008  addiu       $a3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBA4u;
        goto label_1ccba4;
    }
    ctx->pc = 0x1CCB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CCBA4u);
    ctx->pc = 0x1CCBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB9Cu;
    // 0x1ccba0: 0x26070008  addiu       $a3, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE820u, 0x1CCB9Cu, 0x1CCBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBA4u;
label_1ccba4:
    // 0x1ccba4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ccba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ccba8:
    // 0x1ccba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccbac:
    // 0x1ccbac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ccbb0:
    // 0x1ccbb0: 0x3e00008  jr          $ra
label_1ccbb4:
    if (ctx->pc == 0x1CCBB4u) {
        ctx->pc = 0x1CCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB0u;
        // 0x1ccbb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBB8u;
        goto label_fallthrough_0x1ccbb0;
    }
    ctx->pc = 0x1CCBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB0u;
        // 0x1ccbb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ccbb0:
    ctx->pc = 0x1CCBB8u;
}
