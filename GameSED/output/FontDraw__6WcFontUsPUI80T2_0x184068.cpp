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

// Function: FontDraw__6WcFontUsPUI80T2
// Address: 0x184068 - 0x184164
void FontDraw__6WcFontUsPUI80T2_0x184068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontDraw__6WcFontUsPUI80T2_0x184068");
#endif

    switch (ctx->pc) {
        case 0x1840b8u: goto label_1840b8;
        case 0x18410cu: goto label_18410c;
        case 0x184140u: goto label_184140;
        default: break;
    }

    ctx->pc = 0x184068u;

    // 0x184068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18406c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x184070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x184070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x184074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x184078: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x184078u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18407c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x184080: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x184080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184084: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x184084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x184088: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x184088u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18408c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x184090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184094: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x184094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x184098: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x184098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18409c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x18409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1840a0: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1840A0u;
    {
        const bool branch_taken_0x1840a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1840A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840A0u;
        // 0x1840a4: 0x8e250040  lw          $a1, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840a0) {
            ctx->pc = 0x1840E4u;
            goto label_1840e4;
        }
    }
    ctx->pc = 0x1840A8u;
    // 0x1840a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1840a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840ac: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x1840acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1840b0: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x1840b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1840b4: 0x0  nop
    ctx->pc = 0x1840b4u;
    // NOP
label_1840b8:
    // 0x1840b8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1840b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1840bc: 0x1067000a  beq         $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1840BCu;
    {
        const bool branch_taken_0x1840bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1840C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840BCu;
        // 0x1840c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840bc) {
            ctx->pc = 0x1840E8u;
            goto label_1840e8;
        }
    }
    ctx->pc = 0x1840C4u;
    // 0x1840c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1840c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1840c8: 0x10680007  beq         $v1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1840C8u;
    {
        const bool branch_taken_0x1840c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1840CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1840C8u;
        // 0x1840cc: 0x86102a  slt         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840c8) {
            ctx->pc = 0x1840E8u;
            goto label_1840e8;
        }
    }
    ctx->pc = 0x1840D0u;
    // 0x1840d0: 0x0  nop
    ctx->pc = 0x1840d0u;
    // NOP
    // 0x1840d4: 0x0  nop
    ctx->pc = 0x1840d4u;
    // NOP
    // 0x1840d8: 0x0  nop
    ctx->pc = 0x1840d8u;
    // NOP
    // 0x1840dc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1840DCu;
    {
        const bool branch_taken_0x1840dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1840dc) {
            ctx->pc = 0x1840E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1840DCu;
            // 0x1840e0: 0x94a30004  lhu         $v1, 0x4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1840B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1840b8;
        }
    }
    ctx->pc = 0x1840E4u;
label_1840e4:
    // 0x1840e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1840e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1840e8:
    // 0x1840e8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1840ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1840ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1840f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1840F0u;
    {
        const bool branch_taken_0x1840f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1840f0) {
            ctx->pc = 0x1840F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1840F0u;
            // 0x1840f4: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184110u;
            goto label_184110;
        }
    }
    ctx->pc = 0x1840F8u;
    // 0x1840f8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1840f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1840fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1840fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184100: 0x24a57e60  addiu       $a1, $a1, 0x7E60
    ctx->pc = 0x184100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32352));
    // 0x184104: 0xc068186  jal         func_1A0618
    ctx->pc = 0x184104u;
    SET_GPR_U32(ctx, 31, 0x18410Cu);
    ctx->pc = 0x184108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184104u;
    // 0x184108: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x184104u, 0x18410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18410Cu;
label_18410c:
    // 0x18410c: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x18410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_184110:
    // 0x184110: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x184110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x184114: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x184114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x184118: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x184118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18411c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x18411cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x184120: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x184120u;
    {
        const bool branch_taken_0x184120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x184120) {
            ctx->pc = 0x184124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184120u;
            // 0x184124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184144u;
            goto label_184144;
        }
    }
    ctx->pc = 0x184128u;
    // 0x184128: 0xa4920004  sh          $s2, 0x4($a0)
    ctx->pc = 0x184128u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x18412c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18412cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184130: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x184130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184134: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x184134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184138: 0xc06105a  jal         func_184168
    ctx->pc = 0x184138u;
    SET_GPR_U32(ctx, 31, 0x184140u);
    ctx->pc = 0x18413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184138u;
    // 0x18413c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184168u, 0x184138u, 0x184140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184140u;
label_184140:
    // 0x184140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x184140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184144:
    // 0x184144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x184148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18414c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18414cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184150: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x184150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x184154: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x184154u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184158: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x184158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18415c: 0x3e00008  jr          $ra
    ctx->pc = 0x18415Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18415Cu;
        // 0x184160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18415Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184164u;
}
