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

// Function: _Light_Free__7WcWorld
// Address: 0x1ddb48 - 0x1ddbf4
void ps2__Light_Free__7WcWorld_0x1ddb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Light_Free__7WcWorld_0x1ddb48");
#endif

    switch (ctx->pc) {
        case 0x1ddb48u: goto label_1ddb48;
        case 0x1ddb4cu: goto label_1ddb4c;
        case 0x1ddb50u: goto label_1ddb50;
        case 0x1ddb54u: goto label_1ddb54;
        case 0x1ddb58u: goto label_1ddb58;
        case 0x1ddb5cu: goto label_1ddb5c;
        case 0x1ddb60u: goto label_1ddb60;
        case 0x1ddb64u: goto label_1ddb64;
        case 0x1ddb68u: goto label_1ddb68;
        case 0x1ddb6cu: goto label_1ddb6c;
        case 0x1ddb70u: goto label_1ddb70;
        case 0x1ddb74u: goto label_1ddb74;
        case 0x1ddb78u: goto label_1ddb78;
        case 0x1ddb7cu: goto label_1ddb7c;
        case 0x1ddb80u: goto label_1ddb80;
        case 0x1ddb84u: goto label_1ddb84;
        case 0x1ddb88u: goto label_1ddb88;
        case 0x1ddb8cu: goto label_1ddb8c;
        case 0x1ddb90u: goto label_1ddb90;
        case 0x1ddb94u: goto label_1ddb94;
        case 0x1ddb98u: goto label_1ddb98;
        case 0x1ddb9cu: goto label_1ddb9c;
        case 0x1ddba0u: goto label_1ddba0;
        case 0x1ddba4u: goto label_1ddba4;
        case 0x1ddba8u: goto label_1ddba8;
        case 0x1ddbacu: goto label_1ddbac;
        case 0x1ddbb0u: goto label_1ddbb0;
        case 0x1ddbb4u: goto label_1ddbb4;
        case 0x1ddbb8u: goto label_1ddbb8;
        case 0x1ddbbcu: goto label_1ddbbc;
        case 0x1ddbc0u: goto label_1ddbc0;
        case 0x1ddbc4u: goto label_1ddbc4;
        case 0x1ddbc8u: goto label_1ddbc8;
        case 0x1ddbccu: goto label_1ddbcc;
        case 0x1ddbd0u: goto label_1ddbd0;
        case 0x1ddbd4u: goto label_1ddbd4;
        case 0x1ddbd8u: goto label_1ddbd8;
        case 0x1ddbdcu: goto label_1ddbdc;
        case 0x1ddbe0u: goto label_1ddbe0;
        case 0x1ddbe4u: goto label_1ddbe4;
        case 0x1ddbe8u: goto label_1ddbe8;
        case 0x1ddbecu: goto label_1ddbec;
        case 0x1ddbf0u: goto label_1ddbf0;
        default: break;
    }

    ctx->pc = 0x1ddb48u;

label_1ddb48:
    // 0x1ddb48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ddb4c:
    // 0x1ddb4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ddb50:
    // 0x1ddb50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ddb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb54:
    // 0x1ddb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ddb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ddb58:
    // 0x1ddb58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ddb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ddb5c:
    // 0x1ddb5c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1ddb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1ddb60:
    // 0x1ddb60: 0x21643  sra         $v0, $v0, 25
    ctx->pc = 0x1ddb60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 25));
label_1ddb64:
    // 0x1ddb64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ddb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ddb68:
    // 0x1ddb68: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_1ddb6c:
    if (ctx->pc == 0x1DDB6Cu) {
        ctx->pc = 0x1DDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB68u;
        // 0x1ddb6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB70u;
        goto label_1ddb70;
    }
    ctx->pc = 0x1DDB68u;
    {
        const bool branch_taken_0x1ddb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddb68) {
            ctx->pc = 0x1DDB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDB68u;
            // 0x1ddb6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDBE4u;
            goto label_1ddbe4;
        }
    }
    ctx->pc = 0x1DDB70u;
label_1ddb70:
    // 0x1ddb70: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x1ddb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_1ddb74:
    // 0x1ddb74: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_1ddb78:
    if (ctx->pc == 0x1DDB78u) {
        ctx->pc = 0x1DDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB74u;
        // 0x1ddb78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDB7Cu;
        goto label_1ddb7c;
    }
    ctx->pc = 0x1DDB74u;
    {
        const bool branch_taken_0x1ddb74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB74u;
        // 0x1ddb78: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb74) {
            ctx->pc = 0x1DDBBCu;
            goto label_1ddbbc;
        }
    }
    ctx->pc = 0x1DDB7Cu;
label_1ddb7c:
    // 0x1ddb7c: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x1ddb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_1ddb80:
    // 0x1ddb80: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ddb80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ddb84:
    // 0x1ddb84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ddb84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddb88:
    // 0x1ddb88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ddb8c:
    // 0x1ddb8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ddb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ddb90:
    // 0x1ddb90: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ddb90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ddb94:
    // 0x1ddb94: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1ddb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1ddb98:
    // 0x1ddb98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ddb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ddb9c:
    // 0x1ddb9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1ddb9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1ddba0:
    // 0x1ddba0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ddba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ddba4:
    // 0x1ddba4: 0x60f809  jalr        $v1
label_1ddba8:
    if (ctx->pc == 0x1DDBA8u) {
        ctx->pc = 0x1DDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBA4u;
        // 0x1ddba8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBACu;
        goto label_1ddbac;
    }
    ctx->pc = 0x1DDBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DDBACu);
        ctx->pc = 0x1DDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBA4u;
        // 0x1ddba8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDBA4u, 0x1DDBACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDBACu;
label_1ddbac:
    // 0x1ddbac: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x1ddbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_1ddbb0:
    // 0x1ddbb0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ddbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ddbb4:
    // 0x1ddbb4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_1ddbb8:
    if (ctx->pc == 0x1DDBB8u) {
        ctx->pc = 0x1DDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBB4u;
        // 0x1ddbb8: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBBCu;
        goto label_1ddbbc;
    }
    ctx->pc = 0x1DDBB4u;
    {
        const bool branch_taken_0x1ddbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbb4) {
            ctx->pc = 0x1DDBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDBB4u;
            // 0x1ddbb8: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddb80;
        }
    }
    ctx->pc = 0x1DDBBCu;
label_1ddbbc:
    // 0x1ddbbc: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x1ddbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_1ddbc0:
    // 0x1ddbc0: 0xc067f04  jal         func_19FC10
label_1ddbc4:
    if (ctx->pc == 0x1DDBC4u) {
        ctx->pc = 0x1DDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBC0u;
        // 0x1ddbc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBC8u;
        goto label_1ddbc8;
    }
    ctx->pc = 0x1DDBC0u;
    SET_GPR_U32(ctx, 31, 0x1DDBC8u);
    ctx->pc = 0x1DDBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDBC0u;
    // 0x1ddbc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1DDBC0u, 0x1DDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDBC8u;
label_1ddbc8:
    // 0x1ddbc8: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x1ddbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
label_1ddbcc:
    // 0x1ddbcc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1ddbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1ddbd0:
    // 0x1ddbd0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1ddbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
label_1ddbd4:
    // 0x1ddbd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1ddbd8:
    // 0x1ddbd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1ddbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ddbdc:
    // 0x1ddbdc: 0xae030150  sw          $v1, 0x150($s0)
    ctx->pc = 0x1ddbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 3));
label_1ddbe0:
    // 0x1ddbe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ddbe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ddbe4:
    // 0x1ddbe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddbe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ddbe8:
    // 0x1ddbe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ddbec:
    // 0x1ddbec: 0x3e00008  jr          $ra
label_1ddbf0:
    if (ctx->pc == 0x1DDBF0u) {
        ctx->pc = 0x1DDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBECu;
        // 0x1ddbf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBF4u;
        goto label_fallthrough_0x1ddbec;
    }
    ctx->pc = 0x1DDBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBECu;
        // 0x1ddbf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ddbec:
    ctx->pc = 0x1DDBF4u;
}
