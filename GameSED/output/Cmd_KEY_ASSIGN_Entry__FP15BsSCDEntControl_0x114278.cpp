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

// Function: Cmd_KEY_ASSIGN_Entry__FP15BsSCDEntControl
// Address: 0x114278 - 0x114370
void Cmd_KEY_ASSIGN_Entry__FP15BsSCDEntControl_0x114278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_KEY_ASSIGN_Entry__FP15BsSCDEntControl_0x114278");
#endif

    switch (ctx->pc) {
        case 0x1142a0u: goto label_1142a0;
        case 0x1142c8u: goto label_1142c8;
        case 0x1142d0u: goto label_1142d0;
        default: break;
    }

    ctx->pc = 0x114278u;

    // 0x114278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11427c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114280: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x114288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11428c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x114290: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x114290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x114294: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x114294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x114298: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x114298u;
    SET_GPR_U32(ctx, 31, 0x1142A0u);
    ctx->pc = 0x11429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114298u;
    // 0x11429c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x114298u, 0x1142A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142A0u;
label_1142a0:
    // 0x1142a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1142a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142a4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1142a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1142a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1142a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1142ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1142acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1142b0: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1142B0u;
    {
        const bool branch_taken_0x1142b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1142B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142B0u;
        // 0x1142b4: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142b0) {
            ctx->pc = 0x1142F0u;
            goto label_1142f0;
        }
    }
    ctx->pc = 0x1142B8u;
    // 0x1142b8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1142b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1142bc: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x1142bcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x1142c0: 0x2453c058  addiu       $s3, $v0, -0x3FA8
    ctx->pc = 0x1142c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951000));
    // 0x1142c4: 0x0  nop
    ctx->pc = 0x1142c4u;
    // NOP
label_1142c8:
    // 0x1142c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1142C8u;
    SET_GPR_U32(ctx, 31, 0x1142D0u);
    ctx->pc = 0x1142CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1142C8u;
    // 0x1142cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1142C8u, 0x1142D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142D0u;
label_1142d0:
    // 0x1142d0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1142d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1142d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1142d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1142d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1142d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1142dc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1142dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1142e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1142e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1142e4: 0x14b4fff8  bne         $a1, $s4, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1142E4u;
    {
        const bool branch_taken_0x1142e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        ctx->pc = 0x1142E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E4u;
        // 0x1142e8: 0x2238825  or          $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142e4) {
            ctx->pc = 0x1142C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1142c8;
        }
    }
    ctx->pc = 0x1142ECu;
    // 0x1142ec: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1142ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1142f0:
    // 0x1142f0: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1142F0u;
    {
        const bool branch_taken_0x1142f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1142F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F0u;
        // 0x1142f4: 0x2a420016  slti        $v0, $s2, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f0) {
            ctx->pc = 0x114330u;
            goto label_114330;
        }
    }
    ctx->pc = 0x1142F8u;
    // 0x1142f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1142F8u;
    {
        const bool branch_taken_0x1142f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F8u;
        // 0x1142fc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f8) {
            ctx->pc = 0x114318u;
            goto label_114318;
        }
    }
    ctx->pc = 0x114300u;
    // 0x114300: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x114300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x114304: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x114304u;
    {
        const bool branch_taken_0x114304 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x114308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114304u;
        // 0x114308: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114304) {
            ctx->pc = 0x114328u;
            goto label_114328;
        }
    }
    ctx->pc = 0x11430Cu;
    // 0x11430c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11430Cu;
    {
        const bool branch_taken_0x11430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11430Cu;
        // 0x114310: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11430c) {
            ctx->pc = 0x114358u;
            goto label_114358;
        }
    }
    ctx->pc = 0x114314u;
    // 0x114314: 0x0  nop
    ctx->pc = 0x114314u;
    // NOP
label_114318:
    // 0x114318: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114318u;
    {
        const bool branch_taken_0x114318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x11431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114318u;
        // 0x11431c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114318) {
            ctx->pc = 0x114338u;
            goto label_114338;
        }
    }
    ctx->pc = 0x114320u;
    // 0x114320: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x114320u;
    {
        const bool branch_taken_0x114320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114320u;
        // 0x114324: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114320) {
            ctx->pc = 0x114358u;
            goto label_114358;
        }
    }
    ctx->pc = 0x114328u;
label_114328:
    // 0x114328: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x114328u;
    {
        const bool branch_taken_0x114328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114328u;
        // 0x11432c: 0xaf918920  sw          $s1, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114328) {
            ctx->pc = 0x114350u;
            goto label_114350;
        }
    }
    ctx->pc = 0x114330u;
label_114330:
    // 0x114330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x114330u;
    {
        const bool branch_taken_0x114330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114330u;
        // 0x114334: 0xaf918924  sw          $s1, -0x76DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114330) {
            ctx->pc = 0x114350u;
            goto label_114350;
        }
    }
    ctx->pc = 0x114338u;
label_114338:
    // 0x114338: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x114338u;
    {
        const bool branch_taken_0x114338 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x114338) {
            ctx->pc = 0x11433Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114338u;
            // 0x11433c: 0xaf918928  sw          $s1, -0x76D8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114350u;
            goto label_114350;
        }
    }
    ctx->pc = 0x114340u;
    // 0x114340: 0x8f828920  lw          $v0, -0x76E0($gp)
    ctx->pc = 0x114340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x114344: 0x8f838924  lw          $v1, -0x76DC($gp)
    ctx->pc = 0x114344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
    // 0x114348: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11434c: 0xaf828928  sw          $v0, -0x76D8($gp)
    ctx->pc = 0x11434cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 2));
label_114350:
    // 0x114350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_114358:
    // 0x114358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x114358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11435c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11435cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x114360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x114360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114364: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x114364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x114368: 0x3e00008  jr          $ra
    ctx->pc = 0x114368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114368u;
        // 0x11436c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114370u;
}
