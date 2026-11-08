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

// Function: Cmd_GET_TARGET_Entry__FP15BsSCDEntControl
// Address: 0x1340e0 - 0x1346bc
void Cmd_GET_TARGET_Entry__FP15BsSCDEntControl_0x1340e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_TARGET_Entry__FP15BsSCDEntControl_0x1340e0");
#endif

    switch (ctx->pc) {
        case 0x134124u: goto label_134124;
        case 0x134174u: goto label_134174;
        case 0x134178u: goto label_134178;
        case 0x1341c4u: goto label_1341c4;
        case 0x1341c8u: goto label_1341c8;
        case 0x1341f0u: goto label_1341f0;
        case 0x1341fcu: goto label_1341fc;
        case 0x134240u: goto label_134240;
        case 0x134248u: goto label_134248;
        case 0x13426cu: goto label_13426c;
        case 0x134280u: goto label_134280;
        case 0x13428cu: goto label_13428c;
        case 0x1342b0u: goto label_1342b0;
        case 0x134310u: goto label_134310;
        case 0x13432cu: goto label_13432c;
        case 0x134344u: goto label_134344;
        case 0x13434cu: goto label_13434c;
        case 0x13436cu: goto label_13436c;
        case 0x134370u: goto label_134370;
        case 0x134398u: goto label_134398;
        case 0x1343e4u: goto label_1343e4;
        case 0x134400u: goto label_134400;
        case 0x134414u: goto label_134414;
        case 0x13443cu: goto label_13443c;
        case 0x134454u: goto label_134454;
        case 0x134490u: goto label_134490;
        case 0x134494u: goto label_134494;
        case 0x134498u: goto label_134498;
        case 0x1344b0u: goto label_1344b0;
        case 0x1344d4u: goto label_1344d4;
        case 0x1344f0u: goto label_1344f0;
        case 0x134508u: goto label_134508;
        case 0x134530u: goto label_134530;
        case 0x134534u: goto label_134534;
        case 0x13454cu: goto label_13454c;
        case 0x134598u: goto label_134598;
        case 0x1345b0u: goto label_1345b0;
        case 0x1345ccu: goto label_1345cc;
        case 0x1345d0u: goto label_1345d0;
        case 0x1345d4u: goto label_1345d4;
        case 0x1345ecu: goto label_1345ec;
        case 0x134600u: goto label_134600;
        case 0x134610u: goto label_134610;
        case 0x134638u: goto label_134638;
        case 0x13463cu: goto label_13463c;
        case 0x134658u: goto label_134658;
        case 0x134668u: goto label_134668;
        case 0x134680u: goto label_134680;
        case 0x13468cu: goto label_13468c;
        default: break;
    }

    ctx->pc = 0x1340e0u;

    // 0x1340e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1340e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1340e4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1340e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1340e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1340e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1340ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1340ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340f0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1340f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1340f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1340f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340f8: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1340f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1340fc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1340fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x134100: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x134100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x134104: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x134104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x134108: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x134108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x13410c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x13410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x134110: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x134110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x134114: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x134114u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x134118: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x134118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x13411c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13411Cu;
    SET_GPR_U32(ctx, 31, 0x134124u);
    ctx->pc = 0x134120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13411Cu;
    // 0x134120: 0x8c720040  lw          $s2, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13411Cu, 0x134124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134124u;
label_134124:
    // 0x134124: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x134124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134128: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x134128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x13412c: 0x10400155  beqz        $v0, . + 4 + (0x155 << 2)
    ctx->pc = 0x13412Cu;
    {
        const bool branch_taken_0x13412c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13412Cu;
        // 0x134130: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13412c) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x134134u;
    // 0x134134: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x134134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x134138: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x134138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x13413c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x134140: 0x8c6364f0  lw          $v1, 0x64F0($v1)
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25840)));
    // 0x134144: 0x600008  jr          $v1
    ctx->pc = 0x134144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134150u: goto label_134150;
            case 0x134158u: goto label_134158;
            case 0x134190u: goto label_134190;
            case 0x134220u: goto label_134220;
            case 0x1342B8u: goto label_1342b8;
            case 0x1342E0u: goto label_1342e0;
            case 0x134338u: goto label_134338;
            case 0x1343A0u: goto label_1343a0;
            case 0x1343D8u: goto label_1343d8;
            case 0x1343F0u: goto label_1343f0;
            case 0x134408u: goto label_134408;
            case 0x1344B8u: goto label_1344b8;
            case 0x134558u: goto label_134558;
            case 0x1345F8u: goto label_1345f8;
            case 0x134608u: goto label_134608;
            case 0x134618u: goto label_134618;
            case 0x134660u: goto label_134660;
            case 0x134670u: goto label_134670;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134144u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x13414Cu;
    // 0x13414c: 0x0  nop
    ctx->pc = 0x13414cu;
    // NOP
label_134150:
    // 0x134150: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x134150u;
    {
        const bool branch_taken_0x134150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134150u;
        // 0x134154: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134150) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x134158u;
label_134158:
    // 0x134158: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13415c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13415cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x134160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134164: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134164u;
    {
        const bool branch_taken_0x134164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x134168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134164u;
        // 0x134168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134164) {
            ctx->pc = 0x134178u;
            goto label_134178;
        }
    }
    ctx->pc = 0x13416Cu;
    // 0x13416c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13416Cu;
    SET_GPR_U32(ctx, 31, 0x134174u);
    ctx->pc = 0x134170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13416Cu;
    // 0x134170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13416Cu, 0x134174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134174u;
label_134174:
    // 0x134174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x134174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134178:
    // 0x134178: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x134178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x13417c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x13417cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x134180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134184: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x134184u;
    {
        const bool branch_taken_0x134184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134184u;
        // 0x134188: 0x8c513630  lw          $s1, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134184) {
            ctx->pc = 0x1343A4u;
            goto label_1343a4;
        }
    }
    ctx->pc = 0x13418Cu;
    // 0x13418c: 0x0  nop
    ctx->pc = 0x13418cu;
    // NOP
label_134190:
    // 0x134190: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x134190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x134194: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x134194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x134198: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x134198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13419c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x13419cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1341a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1341a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1341a4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1341a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1341a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1341a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1341ac: 0xa2880a  movz        $s1, $a1, $v0
    ctx->pc = 0x1341acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x1341b0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1341b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1341b4: 0x10930004  beq         $a0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1341B4u;
    {
        const bool branch_taken_0x1341b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x1341B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341B4u;
        // 0x1341b8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341b4) {
            ctx->pc = 0x1341C8u;
            goto label_1341c8;
        }
    }
    ctx->pc = 0x1341BCu;
    // 0x1341bc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1341BCu;
    SET_GPR_U32(ctx, 31, 0x1341C4u);
    ctx->pc = 0x1341C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341BCu;
    // 0x1341c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1341BCu, 0x1341C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341C4u;
label_1341c4:
    // 0x1341c4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1341c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1341c8:
    // 0x1341c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1341c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1341cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1341ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1341d0: 0x14730005  bne         $v1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1341D0u;
    {
        const bool branch_taken_0x1341d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1341D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341D0u;
        // 0x1341d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341d0) {
            ctx->pc = 0x1341E8u;
            goto label_1341e8;
        }
    }
    ctx->pc = 0x1341D8u;
    // 0x1341d8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1341d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1341dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1341dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1341E0u;
    {
        const bool branch_taken_0x1341e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1341E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341E0u;
        // 0x1341e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341e0) {
            ctx->pc = 0x134260u;
            goto label_134260;
        }
    }
    ctx->pc = 0x1341E8u;
label_1341e8:
    // 0x1341e8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1341E8u;
    SET_GPR_U32(ctx, 31, 0x1341F0u);
    ctx->pc = 0x1341ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341E8u;
    // 0x1341ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1341E8u, 0x1341F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341F0u;
label_1341f0:
    // 0x1341f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1341f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341f4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1341F4u;
    SET_GPR_U32(ctx, 31, 0x1341FCu);
    ctx->pc = 0x1341F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341F4u;
    // 0x1341f8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1341F4u, 0x1341FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341FCu;
label_1341fc:
    // 0x1341fc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1341fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x134200: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x134200u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x134204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134208: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x134208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13420c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13420cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134210: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x134210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x134214: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x134214u;
    {
        const bool branch_taken_0x134214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134214u;
        // 0x134218: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134214) {
            ctx->pc = 0x1342A8u;
            goto label_1342a8;
        }
    }
    ctx->pc = 0x13421Cu;
    // 0x13421c: 0x0  nop
    ctx->pc = 0x13421cu;
    // NOP
label_134220:
    // 0x134220: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x134220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134224: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x134224u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x134228: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x134228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13422c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134230: 0x50510005  beql        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134230u;
    {
        const bool branch_taken_0x134230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x134230) {
            ctx->pc = 0x134234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134230u;
            // 0x134234: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134248u;
            goto label_134248;
        }
    }
    ctx->pc = 0x134238u;
    // 0x134238: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134238u;
    SET_GPR_U32(ctx, 31, 0x134240u);
    ctx->pc = 0x13423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134238u;
    // 0x13423c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134238u, 0x134240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134240u;
label_134240:
    // 0x134240: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x134240u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x134244: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_134248:
    // 0x134248: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13424c: 0x1471000a  bne         $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x13424Cu;
    {
        const bool branch_taken_0x13424c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x134250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13424Cu;
        // 0x134250: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13424c) {
            ctx->pc = 0x134278u;
            goto label_134278;
        }
    }
    ctx->pc = 0x134254u;
    // 0x134254: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x134258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13425c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x13425cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_134260:
    // 0x134260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x134260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134264: 0xc04e458  jal         func_139160
    ctx->pc = 0x134264u;
    SET_GPR_U32(ctx, 31, 0x13426Cu);
    ctx->pc = 0x134268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134264u;
    // 0x134268: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139160u, 0x134264u, 0x13426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13426Cu;
label_13426c:
    // 0x13426c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x13426Cu;
    {
        const bool branch_taken_0x13426c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13426Cu;
        // 0x134270: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13426c) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x134274u;
    // 0x134274: 0x0  nop
    ctx->pc = 0x134274u;
    // NOP
label_134278:
    // 0x134278: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134278u;
    SET_GPR_U32(ctx, 31, 0x134280u);
    ctx->pc = 0x13427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134278u;
    // 0x13427c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134278u, 0x134280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134280u;
label_134280:
    // 0x134280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134284: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134284u;
    SET_GPR_U32(ctx, 31, 0x13428Cu);
    ctx->pc = 0x134288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134284u;
    // 0x134288: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134284u, 0x13428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13428Cu;
label_13428c:
    // 0x13428c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x13428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x134290: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x134290u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x134294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134298: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x134298u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x13429c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13429cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1342a0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1342a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1342a4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1342a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1342a8:
    // 0x1342a8: 0xc04e47e  jal         func_1391F8
    ctx->pc = 0x1342A8u;
    SET_GPR_U32(ctx, 31, 0x1342B0u);
    ctx->pc = 0x1342ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342A8u;
    // 0x1342ac: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1391F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1391F8u, 0x1342A8u, 0x1342B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342B0u;
label_1342b0:
    // 0x1342b0: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1342B0u;
    {
        const bool branch_taken_0x1342b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342B0u;
        // 0x1342b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342b0) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x1342B8u;
label_1342b8:
    // 0x1342b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1342b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1342bc: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1342bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1342c0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1342c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1342c4: 0x144300ef  bne         $v0, $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x1342C4u;
    {
        const bool branch_taken_0x1342c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1342C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342C4u;
        // 0x1342c8: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342c4) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x1342CCu;
    // 0x1342cc: 0x8e420230  lw          $v0, 0x230($s2)
    ctx->pc = 0x1342ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 560)));
    // 0x1342d0: 0x5c4000eb  bgtzl       $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1342D0u;
    {
        const bool branch_taken_0x1342d0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1342d0) {
            ctx->pc = 0x1342D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1342D0u;
            // 0x1342d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x1342D8u;
    // 0x1342d8: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1342D8u;
    {
        const bool branch_taken_0x1342d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1342d8) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x1342E0u;
label_1342e0:
    // 0x1342e0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1342e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1342e4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1342e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1342e8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x1342e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x1342ec: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1342ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1342f0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1342f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1342f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1342f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1342f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1342f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1342fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1342fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134300: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134300u;
    {
        const bool branch_taken_0x134300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x134304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134300u;
        // 0x134304: 0xc2880a  movz        $s1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134300) {
            ctx->pc = 0x134310u;
            goto label_134310;
        }
    }
    ctx->pc = 0x134308u;
    // 0x134308: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134308u;
    SET_GPR_U32(ctx, 31, 0x134310u);
    ctx->pc = 0x13430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134308u;
    // 0x13430c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134308u, 0x134310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134310u;
label_134310:
    // 0x134310: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x134314: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x134314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13431c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x13431cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x134320: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x134320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134324: 0xc04dee8  jal         func_137BA0
    ctx->pc = 0x134324u;
    SET_GPR_U32(ctx, 31, 0x13432Cu);
    ctx->pc = 0x134328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134324u;
    // 0x134328: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BA0u, 0x134324u, 0x13432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13432Cu;
label_13432c:
    // 0x13432c: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x13432Cu;
    {
        const bool branch_taken_0x13432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13432Cu;
        // 0x134330: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13432c) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x134334u;
    // 0x134334: 0x0  nop
    ctx->pc = 0x134334u;
    // NOP
label_134338:
    // 0x134338: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13433c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13433Cu;
    SET_GPR_U32(ctx, 31, 0x134344u);
    ctx->pc = 0x134340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13433Cu;
    // 0x134340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13433Cu, 0x134344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134344u;
label_134344:
    // 0x134344: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x134344u;
    SET_GPR_U32(ctx, 31, 0x13434Cu);
    ctx->pc = 0x134348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134344u;
    // 0x134348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x134344u, 0x13434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13434Cu;
label_13434c:
    // 0x13434c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13434cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x134350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134354: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13435c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13435Cu;
    {
        const bool branch_taken_0x13435c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13435c) {
            ctx->pc = 0x134370u;
            goto label_134370;
        }
    }
    ctx->pc = 0x134364u;
    // 0x134364: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134364u;
    SET_GPR_U32(ctx, 31, 0x13436Cu);
    ctx->pc = 0x134368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134364u;
    // 0x134368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134364u, 0x13436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13436Cu;
label_13436c:
    // 0x13436c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13436cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_134370:
    // 0x134370: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134370u;
    {
        const bool branch_taken_0x134370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x134374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134370u;
        // 0x134374: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134370) {
            ctx->pc = 0x134388u;
            goto label_134388;
        }
    }
    ctx->pc = 0x134378u;
    // 0x134378: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13437c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134380: 0x247100d0  addiu       $s1, $v1, 0xD0
    ctx->pc = 0x134380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x134384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134388:
    // 0x134388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13438c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13438cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134390: 0xc04e4be  jal         func_1392F8
    ctx->pc = 0x134390u;
    SET_GPR_U32(ctx, 31, 0x134398u);
    ctx->pc = 0x134394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134390u;
    // 0x134394: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1392F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1392F8u, 0x134390u, 0x134398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134398u;
label_134398:
    // 0x134398: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x134398u;
    {
        const bool branch_taken_0x134398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134398u;
        // 0x13439c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134398) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x1343A0u;
label_1343a0:
    // 0x1343a0: 0x8e510074  lw          $s1, 0x74($s2)
    ctx->pc = 0x1343a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_1343a4:
    // 0x1343a4: 0x122000b6  beqz        $s1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1343A4u;
    {
        const bool branch_taken_0x1343a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343A4u;
        // 0x1343a8: 0x24021118  addiu       $v0, $zero, 0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343a4) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x1343ACu;
    // 0x1343ac: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1343acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1343b0: 0x146200b4  bne         $v1, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1343B0u;
    {
        const bool branch_taken_0x1343b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1343B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343B0u;
        // 0x1343b4: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343b0) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x1343B8u;
    // 0x1343b8: 0x8e220688  lw          $v0, 0x688($s1)
    ctx->pc = 0x1343b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1672)));
    // 0x1343bc: 0x8e23068c  lw          $v1, 0x68C($s1)
    ctx->pc = 0x1343bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1676)));
    // 0x1343c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1343c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1343c4: 0x544000ae  bnel        $v0, $zero, . + 4 + (0xAE << 2)
    ctx->pc = 0x1343C4u;
    {
        const bool branch_taken_0x1343c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1343c4) {
            ctx->pc = 0x1343C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1343C4u;
            // 0x1343c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x1343CCu;
    // 0x1343cc: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1343CCu;
    {
        const bool branch_taken_0x1343cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1343cc) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x1343D4u;
    // 0x1343d4: 0x0  nop
    ctx->pc = 0x1343d4u;
    // NOP
label_1343d8:
    // 0x1343d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1343d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343dc: 0xc066800  jal         func_19A000
    ctx->pc = 0x1343DCu;
    SET_GPR_U32(ctx, 31, 0x1343E4u);
    ctx->pc = 0x1343E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343DCu;
    // 0x1343e0: 0x8e510074  lw          $s1, 0x74($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x1343DCu, 0x1343E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1343E4u;
label_1343e4:
    // 0x1343e4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1343E4u;
    {
        const bool branch_taken_0x1343e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343E4u;
        // 0x1343e8: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343e4) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x1343ECu;
    // 0x1343ec: 0x0  nop
    ctx->pc = 0x1343ecu;
    // NOP
label_1343f0:
    // 0x1343f0: 0x8f918a30  lw          $s1, -0x75D0($gp)
    ctx->pc = 0x1343f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x1343f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1343f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343f8: 0xc066810  jal         func_19A040
    ctx->pc = 0x1343F8u;
    SET_GPR_U32(ctx, 31, 0x134400u);
    ctx->pc = 0x1343FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343F8u;
    // 0x1343fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A040u, 0x1343F8u, 0x134400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134400u;
label_134400:
    // 0x134400: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x134400u;
    {
        const bool branch_taken_0x134400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134400u;
        // 0x134404: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134400) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x134408u;
label_134408:
    // 0x134408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13440c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13440Cu;
    SET_GPR_U32(ctx, 31, 0x134414u);
    ctx->pc = 0x134410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13440Cu;
    // 0x134410: 0x3c118000  lui         $s1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13440Cu, 0x134414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134414u;
label_134414:
    // 0x134414: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134418: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x134418u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13441c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134420: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x134420u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134424: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x134424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13442c: 0x10710019  beq         $v1, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x13442Cu;
    {
        const bool branch_taken_0x13442c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x134430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13442Cu;
        // 0x134430: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13442c) {
            ctx->pc = 0x134494u;
            goto label_134494;
        }
    }
    ctx->pc = 0x134434u;
    // 0x134434: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134434u;
    SET_GPR_U32(ctx, 31, 0x13443Cu);
    ctx->pc = 0x134438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134434u;
    // 0x134438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134434u, 0x13443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13443Cu;
label_13443c:
    // 0x13443c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134440: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134444: 0x10710013  beq         $v1, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x134444u;
    {
        const bool branch_taken_0x134444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x134448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134444u;
        // 0x134448: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134444) {
            ctx->pc = 0x134494u;
            goto label_134494;
        }
    }
    ctx->pc = 0x13444Cu;
    // 0x13444c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13444Cu;
    SET_GPR_U32(ctx, 31, 0x134454u);
    ctx->pc = 0x134450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13444Cu;
    // 0x134450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13444Cu, 0x134454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134454u;
label_134454:
    // 0x134454: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x134454u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134458: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13445c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134460: 0x1071000d  beq         $v1, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x134460u;
    {
        const bool branch_taken_0x134460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x134464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134460u;
        // 0x134464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134460) {
            ctx->pc = 0x134498u;
            goto label_134498;
        }
    }
    ctx->pc = 0x134468u;
    // 0x134468: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x134468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x13446c: 0x8c83b830  lw          $v1, -0x47D0($a0)
    ctx->pc = 0x13446cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134470: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x134470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134474: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x134474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x134478: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x134478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13447c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134480: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x134480u;
    {
        const bool branch_taken_0x134480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x134484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134480u;
        // 0x134484: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134480) {
            ctx->pc = 0x134494u;
            goto label_134494;
        }
    }
    ctx->pc = 0x134488u;
    // 0x134488: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134488u;
    SET_GPR_U32(ctx, 31, 0x134490u);
    ctx->pc = 0x13448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134488u;
    // 0x13448c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134488u, 0x134490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134490u;
label_134490:
    // 0x134490: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x134490u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134494:
    // 0x134494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134498:
    // 0x134498: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134498u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13449c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13449cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1344a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344a4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1344a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344a8: 0xc04df1c  jal         func_137C70
    ctx->pc = 0x1344A8u;
    SET_GPR_U32(ctx, 31, 0x1344B0u);
    ctx->pc = 0x1344ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344A8u;
    // 0x1344ac: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137C70u, 0x1344A8u, 0x1344B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344B0u;
label_1344b0:
    // 0x1344b0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1344B0u;
    {
        const bool branch_taken_0x1344b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1344B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344B0u;
        // 0x1344b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344b0) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x1344B8u;
label_1344b8:
    // 0x1344b8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1344b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1344bc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1344bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1344c0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1344c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1344c4: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x1344c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1344c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1344c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344cc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1344CCu;
    SET_GPR_U32(ctx, 31, 0x1344D4u);
    ctx->pc = 0x1344D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344CCu;
    // 0x1344d0: 0x3c138000  lui         $s3, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1344CCu, 0x1344D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344D4u;
label_1344d4:
    // 0x1344d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1344d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1344d8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1344d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1344dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1344dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1344e0: 0x50730014  beql        $v1, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1344E0u;
    {
        const bool branch_taken_0x1344e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x1344e0) {
            ctx->pc = 0x1344E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1344E0u;
            // 0x1344e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134534u;
            goto label_134534;
        }
    }
    ctx->pc = 0x1344E8u;
    // 0x1344e8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1344E8u;
    SET_GPR_U32(ctx, 31, 0x1344F0u);
    ctx->pc = 0x1344ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1344E8u;
    // 0x1344ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1344E8u, 0x1344F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1344F0u;
label_1344f0:
    // 0x1344f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1344f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1344f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1344f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1344f8: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1344F8u;
    {
        const bool branch_taken_0x1344f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x1344FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344F8u;
        // 0x1344fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344f8) {
            ctx->pc = 0x134530u;
            goto label_134530;
        }
    }
    ctx->pc = 0x134500u;
    // 0x134500: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134500u;
    SET_GPR_U32(ctx, 31, 0x134508u);
    ctx->pc = 0x134504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134500u;
    // 0x134504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134500u, 0x134508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134508u;
label_134508:
    // 0x134508: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x134508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13450c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134510: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134514: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x134514u;
    {
        const bool branch_taken_0x134514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x134518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134514u;
        // 0x134518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134514) {
            ctx->pc = 0x134534u;
            goto label_134534;
        }
    }
    ctx->pc = 0x13451Cu;
    // 0x13451c: 0xfa200000  sqc2        $vf0, 0x0($s1)
    ctx->pc = 0x13451cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134520: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x134520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134528: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134528u;
    SET_GPR_U32(ctx, 31, 0x134530u);
    ctx->pc = 0x13452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134528u;
    // 0x13452c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134528u, 0x134530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134530u;
label_134530:
    // 0x134530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134534:
    // 0x134534: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134534u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134538: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x134538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13453c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x13453cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134540: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x134540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134544: 0xc04dfac  jal         func_137EB0
    ctx->pc = 0x134544u;
    SET_GPR_U32(ctx, 31, 0x13454Cu);
    ctx->pc = 0x134548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134544u;
    // 0x134548: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137EB0u, 0x134544u, 0x13454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13454Cu;
label_13454c:
    // 0x13454c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x13454Cu;
    {
        const bool branch_taken_0x13454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13454Cu;
        // 0x134550: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13454c) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x134554u;
    // 0x134554: 0x0  nop
    ctx->pc = 0x134554u;
    // NOP
label_134558:
    // 0x134558: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13455c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x13455cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134560: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x134560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134564: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x134564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x134568: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x134568u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13456c: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x13456cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x134570: 0x8ca3b830  lw          $v1, -0x47D0($a1)
    ctx->pc = 0x134570u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134574: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x134574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134578: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x134578u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13457c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x13457cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134580: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x134580u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x134584: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134588: 0x50510012  beql        $v0, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x134588u;
    {
        const bool branch_taken_0x134588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x134588) {
            ctx->pc = 0x13458Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134588u;
            // 0x13458c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1345D4u;
            goto label_1345d4;
        }
    }
    ctx->pc = 0x134590u;
    // 0x134590: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134590u;
    SET_GPR_U32(ctx, 31, 0x134598u);
    ctx->pc = 0x134594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134590u;
    // 0x134594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134590u, 0x134598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134598u;
label_134598:
    // 0x134598: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13459c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1345a0: 0x1071000b  beq         $v1, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1345A0u;
    {
        const bool branch_taken_0x1345a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1345A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345A0u;
        // 0x1345a4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345a0) {
            ctx->pc = 0x1345D0u;
            goto label_1345d0;
        }
    }
    ctx->pc = 0x1345A8u;
    // 0x1345a8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1345A8u;
    SET_GPR_U32(ctx, 31, 0x1345B0u);
    ctx->pc = 0x1345ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345A8u;
    // 0x1345ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1345A8u, 0x1345B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345B0u;
label_1345b0:
    // 0x1345b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1345b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345b4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1345b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1345b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1345b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1345bc: 0x50710005  beql        $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1345BCu;
    {
        const bool branch_taken_0x1345bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1345bc) {
            ctx->pc = 0x1345C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1345BCu;
            // 0x1345c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1345D4u;
            goto label_1345d4;
        }
    }
    ctx->pc = 0x1345C4u;
    // 0x1345c4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1345C4u;
    SET_GPR_U32(ctx, 31, 0x1345CCu);
    ctx->pc = 0x1345C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345C4u;
    // 0x1345c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1345C4u, 0x1345CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345CCu;
label_1345cc:
    // 0x1345cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1345ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1345d0:
    // 0x1345d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1345d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1345d4:
    // 0x1345d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1345d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1345d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1345d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1345dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345e0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1345e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1345e4: 0xc04e0ba  jal         func_1382E8
    ctx->pc = 0x1345E4u;
    SET_GPR_U32(ctx, 31, 0x1345ECu);
    ctx->pc = 0x1345E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345E4u;
    // 0x1345e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1382E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1382E8u, 0x1345E4u, 0x1345ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345ECu;
label_1345ec:
    // 0x1345ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1345ECu;
    {
        const bool branch_taken_0x1345ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345ECu;
        // 0x1345f0: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345ec) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x1345F4u;
    // 0x1345f4: 0x0  nop
    ctx->pc = 0x1345f4u;
    // NOP
label_1345f8:
    // 0x1345f8: 0xc04e4a8  jal         func_1392A0
    ctx->pc = 0x1345F8u;
    SET_GPR_U32(ctx, 31, 0x134600u);
    ctx->pc = 0x1392A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1392A0u, 0x1345F8u, 0x134600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134600u;
label_134600:
    // 0x134600: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x134600u;
    {
        const bool branch_taken_0x134600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134600u;
        // 0x134604: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134600) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x134608u;
label_134608:
    // 0x134608: 0xc04e4d4  jal         func_139350
    ctx->pc = 0x134608u;
    SET_GPR_U32(ctx, 31, 0x134610u);
    ctx->pc = 0x13460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134608u;
    // 0x13460c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139350u, 0x134608u, 0x134610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134610u;
label_134610:
    // 0x134610: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x134610u;
    {
        const bool branch_taken_0x134610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134610u;
        // 0x134614: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134610) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x134618u;
label_134618:
    // 0x134618: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13461c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13461cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x134620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134628: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134628u;
    {
        const bool branch_taken_0x134628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x134628) {
            ctx->pc = 0x13462Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134628u;
            // 0x13462c: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13463Cu;
            goto label_13463c;
        }
    }
    ctx->pc = 0x134630u;
    // 0x134630: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134630u;
    SET_GPR_U32(ctx, 31, 0x134638u);
    ctx->pc = 0x134634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134630u;
    // 0x134634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134630u, 0x134638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134638u;
label_134638:
    // 0x134638: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_13463c:
    // 0x13463c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13463cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134640: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x134640u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x134644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x134644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134648: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x134648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13464c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13464cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134650: 0xc04e120  jal         func_138480
    ctx->pc = 0x134650u;
    SET_GPR_U32(ctx, 31, 0x134658u);
    ctx->pc = 0x134654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134650u;
    // 0x134654: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x134650u, 0x134658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134658u;
label_134658:
    // 0x134658: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x134658u;
    {
        const bool branch_taken_0x134658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134658u;
        // 0x13465c: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134658) {
            ctx->pc = 0x134684u;
            goto label_134684;
        }
    }
    ctx->pc = 0x134660u;
label_134660:
    // 0x134660: 0xc04e4e4  jal         func_139390
    ctx->pc = 0x134660u;
    SET_GPR_U32(ctx, 31, 0x134668u);
    ctx->pc = 0x139390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139390u, 0x134660u, 0x134668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134668u;
label_134668:
    // 0x134668: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134668u;
    {
        const bool branch_taken_0x134668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134668u;
        // 0x13466c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134668) {
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x134670u;
label_134670:
    // 0x134670: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x134670u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x134674: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x134674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x134678: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x134678u;
    {
        const bool branch_taken_0x134678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x134678) {
            ctx->pc = 0x13467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134678u;
            // 0x13467c: 0x8e510260  lw          $s1, 0x260($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134680u;
            goto label_134680;
        }
    }
    ctx->pc = 0x134680u;
label_134680:
    // 0x134680: 0x11202b  sltu        $a0, $zero, $s1
    ctx->pc = 0x134680u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_134684:
    // 0x134684: 0xc04171a  jal         func_105C68
    ctx->pc = 0x134684u;
    SET_GPR_U32(ctx, 31, 0x13468Cu);
    ctx->pc = 0x134688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134684u;
    // 0x134688: 0xaf918a30  sw          $s1, -0x75D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x134684u, 0x13468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13468Cu;
label_13468c:
    // 0x13468c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x13468cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134690: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x134690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x134694: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x134694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134698: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x134698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13469c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x13469cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1346a0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1346a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1346a4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1346a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1346a8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1346a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1346ac: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1346acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1346b0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1346b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1346b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1346B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1346B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346B4u;
        // 0x1346b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1346B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1346BCu;
}
