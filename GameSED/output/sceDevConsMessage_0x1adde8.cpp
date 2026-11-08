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

// Function: sceDevConsMessage
// Address: 0x1adde8 - 0x1adf04
void sceDevConsMessage_0x1adde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsMessage_0x1adde8");
#endif

    switch (ctx->pc) {
        case 0x1ade20u: goto label_1ade20;
        case 0x1ade40u: goto label_1ade40;
        case 0x1ade64u: goto label_1ade64;
        case 0x1ade74u: goto label_1ade74;
        case 0x1adeb0u: goto label_1adeb0;
        case 0x1adec0u: goto label_1adec0;
        default: break;
    }

    ctx->pc = 0x1adde8u;

    // 0x1adde8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1adde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1addec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1addecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1addf0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1addf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1addf4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1addf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1addf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1addfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1addfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ade00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ade04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ade08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ade08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ade0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ade10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ade14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ade18: 0xc06b5cc  jal         func_1AD730
    ctx->pc = 0x1ADE18u;
    SET_GPR_U32(ctx, 31, 0x1ADE20u);
    ctx->pc = 0x1ADE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE18u;
    // 0x1ade1c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD730u, 0x1ADE18u, 0x1ADE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE20u;
label_1ade20:
    // 0x1ade20: 0x1600001e  bnez        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1ADE20u;
    {
        const bool branch_taken_0x1ade20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE20u;
        // 0x1ade24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade20) {
            ctx->pc = 0x1ADE9Cu;
            goto label_1ade9c;
        }
    }
    ctx->pc = 0x1ADE28u;
    // 0x1ade28: 0x24530002  addiu       $s3, $v0, 0x2
    ctx->pc = 0x1ade28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1ade2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ade2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ade30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ade34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade38: 0xc06b45c  jal         func_1AD170
    ctx->pc = 0x1ADE38u;
    SET_GPR_U32(ctx, 31, 0x1ADE40u);
    ctx->pc = 0x1ADE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE38u;
    // 0x1ade3c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD170u, 0x1ADE38u, 0x1ADE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE40u;
label_1ade40:
    // 0x1ade40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ade40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade44: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1ADE44u;
    {
        const bool branch_taken_0x1ade44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE44u;
        // 0x1ade48: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade44) {
            ctx->pc = 0x1ADEE8u;
            goto label_1adee8;
        }
    }
    ctx->pc = 0x1ADE4Cu;
    // 0x1ade4c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ade4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ade50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ade54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ade58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade5c: 0xc06b7c2  jal         func_1ADF08
    ctx->pc = 0x1ADE5Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE64u);
    ctx->pc = 0x1ADE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE5Cu;
    // 0x1ade60: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADF08u, 0x1ADE5Cu, 0x1ADE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE64u;
label_1ade64:
    // 0x1ade64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ade64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ade68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ade6c: 0xc06b662  jal         func_1AD988
    ctx->pc = 0x1ADE6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE74u);
    ctx->pc = 0x1ADE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE6Cu;
    // 0x1ade70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD988u, 0x1ADE6Cu, 0x1ADE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE74u;
label_1ade74:
    // 0x1ade74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ade74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ade78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ade7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ade80: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ade80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ade84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ade84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ade88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ade88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ade8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ade8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ade90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ade90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ade94: 0x806b5cc  j           func_1AD730
    ctx->pc = 0x1ADE94u;
    ctx->pc = 0x1ADE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE94u;
    // 0x1ade98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    sceDevConsPrintf_0x1ad730(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADE9Cu;
label_1ade9c:
    // 0x1ade9c: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x1ade9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1adea0: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x1adea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1adea4: 0x24470002  addiu       $a3, $v0, 0x2
    ctx->pc = 0x1adea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1adea8: 0xc06b7c2  jal         func_1ADF08
    ctx->pc = 0x1ADEA8u;
    SET_GPR_U32(ctx, 31, 0x1ADEB0u);
    ctx->pc = 0x1ADEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEA8u;
    // 0x1adeac: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADF08u, 0x1ADEA8u, 0x1ADEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEB0u;
label_1adeb0:
    // 0x1adeb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1adeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adeb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1adeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adeb8: 0xc06b662  jal         func_1AD988
    ctx->pc = 0x1ADEB8u;
    SET_GPR_U32(ctx, 31, 0x1ADEC0u);
    ctx->pc = 0x1ADEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEB8u;
    // 0x1adebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD988u, 0x1ADEB8u, 0x1ADEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEC0u;
label_1adec0:
    // 0x1adec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adec4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1adec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adec8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1adec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1adecc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1adeccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aded0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1aded0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aded4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aded4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aded8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aded8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adee0: 0x806b5cc  j           func_1AD730
    ctx->pc = 0x1ADEE0u;
    ctx->pc = 0x1ADEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEE0u;
    // 0x1adee4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD730u;
    sceDevConsPrintf_0x1ad730(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADEE8u;
label_1adee8:
    // 0x1adee8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1adee8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1adeec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1adeecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adef0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adef4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1adef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adefc: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEFCu;
        // 0x1adf00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADF04u;
}
