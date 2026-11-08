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

// Function: Cmd_ACTOR_OPTION_Entry__FP15BsSCDEntControl
// Address: 0x132fc0 - 0x1331c8
void Cmd_ACTOR_OPTION_Entry__FP15BsSCDEntControl_0x132fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_OPTION_Entry__FP15BsSCDEntControl_0x132fc0");
#endif

    switch (ctx->pc) {
        case 0x132fe4u: goto label_132fe4;
        case 0x133024u: goto label_133024;
        case 0x133028u: goto label_133028;
        case 0x133038u: goto label_133038;
        case 0x133058u: goto label_133058;
        case 0x133070u: goto label_133070;
        case 0x1330bcu: goto label_1330bc;
        case 0x1330c4u: goto label_1330c4;
        case 0x1330d0u: goto label_1330d0;
        case 0x133114u: goto label_133114;
        case 0x13311cu: goto label_13311c;
        case 0x13315cu: goto label_13315c;
        case 0x133164u: goto label_133164;
        case 0x1331a0u: goto label_1331a0;
        case 0x1331a8u: goto label_1331a8;
        case 0x1331b4u: goto label_1331b4;
        default: break;
    }

    ctx->pc = 0x132fc0u;

    // 0x132fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132fc4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x132fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x132fc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132fcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x132fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132fd0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x132fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x132fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132fd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132fdc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x132FDCu;
    SET_GPR_U32(ctx, 31, 0x132FE4u);
    ctx->pc = 0x132FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132FDCu;
    // 0x132fe0: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132FDCu, 0x132FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132FE4u;
label_132fe4:
    // 0x132fe4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x132fe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132fe8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x132fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x132fec: 0x50400072  beql        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x132FECu;
    {
        const bool branch_taken_0x132fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132fec) {
            ctx->pc = 0x132FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132FECu;
            // 0x132ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1331B8u;
            goto label_1331b8;
        }
    }
    ctx->pc = 0x132FF4u;
    // 0x132ff4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x132ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x132ff8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x132ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x132ffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133000: 0x8c636430  lw          $v1, 0x6430($v1)
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25648)));
    // 0x133004: 0x600008  jr          $v1
    ctx->pc = 0x133004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133010u: goto label_133010;
            case 0x133098u: goto label_133098;
            case 0x1330F0u: goto label_1330f0;
            case 0x133138u: goto label_133138;
            case 0x133180u: goto label_133180;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133004u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13300Cu;
    // 0x13300c: 0x0  nop
    ctx->pc = 0x13300cu;
    // NOP
label_133010:
    // 0x133010: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x133010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x133014: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x133014u;
    {
        const bool branch_taken_0x133014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133014) {
            ctx->pc = 0x133018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133014u;
            // 0x133018: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133028u;
            goto label_133028;
        }
    }
    ctx->pc = 0x13301Cu;
    // 0x13301c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x13301Cu;
    SET_GPR_U32(ctx, 31, 0x133024u);
    ctx->pc = 0x133020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13301Cu;
    // 0x133020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x13301Cu, 0x133024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133024u;
label_133024:
    // 0x133024: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x133024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_133028:
    // 0x133028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13302c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x13302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x133030: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133030u;
    SET_GPR_U32(ctx, 31, 0x133038u);
    ctx->pc = 0x133034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133030u;
    // 0x133034: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133030u, 0x133038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133038u;
label_133038:
    // 0x133038: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x133038u;
    {
        const bool branch_taken_0x133038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133038u;
        // 0x13303c: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133038) {
            ctx->pc = 0x1331B4u;
            goto label_1331b4;
        }
    }
    ctx->pc = 0x133040u;
    // 0x133040: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x133040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133044: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x133044u;
    {
        const bool branch_taken_0x133044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x133048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133044u;
        // 0x133048: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133044) {
            ctx->pc = 0x133050u;
            goto label_133050;
        }
    }
    ctx->pc = 0x13304Cu;
    // 0x13304c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13304cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_133050:
    // 0x133050: 0xc068086  jal         func_1A0218
    ctx->pc = 0x133050u;
    SET_GPR_U32(ctx, 31, 0x133058u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x133050u, 0x133058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133058u;
label_133058:
    // 0x133058: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x133058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x13305c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13305cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x133060: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x133060u;
    {
        const bool branch_taken_0x133060 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x133064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133060u;
        // 0x133064: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133060) {
            ctx->pc = 0x1331B4u;
            goto label_1331b4;
        }
    }
    ctx->pc = 0x133068u;
    // 0x133068: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x133068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13306c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13306cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133070:
    // 0x133070: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x133070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x133074: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x133074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x133078: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x133078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13307c: 0x0  nop
    ctx->pc = 0x13307cu;
    // NOP
    // 0x133080: 0x0  nop
    ctx->pc = 0x133080u;
    // NOP
    // 0x133084: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x133084u;
    {
        const bool branch_taken_0x133084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133084u;
        // 0x133088: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133084) {
            ctx->pc = 0x133070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133070;
        }
    }
    ctx->pc = 0x13308Cu;
    // 0x13308c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x13308Cu;
    {
        const bool branch_taken_0x13308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13308Cu;
        // 0x133090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13308c) {
            ctx->pc = 0x1331B8u;
            goto label_1331b8;
        }
    }
    ctx->pc = 0x133094u;
    // 0x133094: 0x0  nop
    ctx->pc = 0x133094u;
    // NOP
label_133098:
    // 0x133098: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13309c: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x13309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1330a0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1330a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1330a4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1330A4u;
    {
        const bool branch_taken_0x1330a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1330A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330A4u;
        // 0x1330a8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330a4) {
            ctx->pc = 0x1330BCu;
            goto label_1330bc;
        }
    }
    ctx->pc = 0x1330ACu;
    // 0x1330ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1330acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330b0: 0x24a563e8  addiu       $a1, $a1, 0x63E8
    ctx->pc = 0x1330b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25576));
    // 0x1330b4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1330B4u;
    SET_GPR_U32(ctx, 31, 0x1330BCu);
    ctx->pc = 0x1330B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1330B4u;
    // 0x1330b8: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1330B4u, 0x1330BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330BCu;
label_1330bc:
    // 0x1330bc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1330BCu;
    SET_GPR_U32(ctx, 31, 0x1330C4u);
    ctx->pc = 0x1330C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1330BCu;
    // 0x1330c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1330BCu, 0x1330C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330C4u;
label_1330c4:
    // 0x1330c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1330c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330c8: 0xc052abc  jal         func_14AAF0
    ctx->pc = 0x1330C8u;
    SET_GPR_U32(ctx, 31, 0x1330D0u);
    ctx->pc = 0x1330CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1330C8u;
    // 0x1330cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AAF0u, 0x1330C8u, 0x1330D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330D0u;
label_1330d0:
    // 0x1330d0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1330d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1330d4: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x1330d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1330d8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1330d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1330dc: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x1330dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x1330e0: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x1330e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1330e4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1330E4u;
    {
        const bool branch_taken_0x1330e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1330E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330E4u;
        // 0x1330e8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330e4) {
            ctx->pc = 0x1331B4u;
            goto label_1331b4;
        }
    }
    ctx->pc = 0x1330ECu;
    // 0x1330ec: 0x0  nop
    ctx->pc = 0x1330ecu;
    // NOP
label_1330f0:
    // 0x1330f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330f4: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1330f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1330f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1330f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1330fc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1330FCu;
    {
        const bool branch_taken_0x1330fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x133100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330FCu;
        // 0x133100: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330fc) {
            ctx->pc = 0x133114u;
            goto label_133114;
        }
    }
    ctx->pc = 0x133104u;
    // 0x133104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133108: 0x24a563f8  addiu       $a1, $a1, 0x63F8
    ctx->pc = 0x133108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25592));
    // 0x13310c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13310Cu;
    SET_GPR_U32(ctx, 31, 0x133114u);
    ctx->pc = 0x133110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13310Cu;
    // 0x133110: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13310Cu, 0x133114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133114u;
label_133114:
    // 0x133114: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133114u;
    SET_GPR_U32(ctx, 31, 0x13311Cu);
    ctx->pc = 0x133118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133114u;
    // 0x133118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133114u, 0x13311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13311Cu;
label_13311c:
    // 0x13311c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13311cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13312c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133130: 0x805325c  j           func_14C970
    ctx->pc = 0x133130u;
    ctx->pc = 0x133134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133130u;
    // 0x133134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C970u;
    ApUnitSetOptionPos__FP7ApcUniti_0x14c970(rdram, ctx, runtime); return;
    ctx->pc = 0x133138u;
label_133138:
    // 0x133138: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13313c: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x13313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x133140: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x133140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x133144: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x133144u;
    {
        const bool branch_taken_0x133144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x133148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133144u;
        // 0x133148: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133144) {
            ctx->pc = 0x13315Cu;
            goto label_13315c;
        }
    }
    ctx->pc = 0x13314Cu;
    // 0x13314c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13314cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133150: 0x24a56408  addiu       $a1, $a1, 0x6408
    ctx->pc = 0x133150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25608));
    // 0x133154: 0xc068186  jal         func_1A0618
    ctx->pc = 0x133154u;
    SET_GPR_U32(ctx, 31, 0x13315Cu);
    ctx->pc = 0x133158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133154u;
    // 0x133158: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x133154u, 0x13315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13315Cu;
label_13315c:
    // 0x13315c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13315Cu;
    SET_GPR_U32(ctx, 31, 0x133164u);
    ctx->pc = 0x133160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13315Cu;
    // 0x133160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13315Cu, 0x133164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133164u;
label_133164:
    // 0x133164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13316c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13316cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133178: 0x8052aec  j           func_14ABB0
    ctx->pc = 0x133178u;
    ctx->pc = 0x13317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133178u;
    // 0x13317c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABB0u;
    ApUnitSetOptionSound__FP7ApcUniti_0x14abb0(rdram, ctx, runtime); return;
    ctx->pc = 0x133180u;
label_133180:
    // 0x133180: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x133180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133184: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x133184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x133188: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133188u;
    {
        const bool branch_taken_0x133188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133188u;
        // 0x13318c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133188) {
            ctx->pc = 0x1331A0u;
            goto label_1331a0;
        }
    }
    ctx->pc = 0x133190u;
    // 0x133190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133194: 0x24a56418  addiu       $a1, $a1, 0x6418
    ctx->pc = 0x133194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25624));
    // 0x133198: 0xc068186  jal         func_1A0618
    ctx->pc = 0x133198u;
    SET_GPR_U32(ctx, 31, 0x1331A0u);
    ctx->pc = 0x13319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133198u;
    // 0x13319c: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x133198u, 0x1331A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331A0u;
label_1331a0:
    // 0x1331a0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1331A0u;
    SET_GPR_U32(ctx, 31, 0x1331A8u);
    ctx->pc = 0x1331A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1331A0u;
    // 0x1331a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1331A0u, 0x1331A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331A8u;
label_1331a8:
    // 0x1331a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1331a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1331ac: 0xc05586e  jal         func_1561B8
    ctx->pc = 0x1331ACu;
    SET_GPR_U32(ctx, 31, 0x1331B4u);
    ctx->pc = 0x1331B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1331ACu;
    // 0x1331b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561B8u, 0x1331ACu, 0x1331B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331B4u;
label_1331b4:
    // 0x1331b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1331b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1331b8:
    // 0x1331b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1331b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1331bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1331bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1331c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1331C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1331C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331C0u;
        // 0x1331c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1331C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1331C8u;
}
