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

// Function: _d2b
// Address: 0x1d6070 - 0x1d61f4
void _d2b_0x1d6070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_d2b_0x1d6070");
#endif

    switch (ctx->pc) {
        case 0x1d60a4u: goto label_1d60a4;
        case 0x1d610cu: goto label_1d610c;
        case 0x1d6174u: goto label_1d6174;
        case 0x1d61c0u: goto label_1d61c0;
        default: break;
    }

    ctx->pc = 0x1d6070u;

    // 0x1d6070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d6070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d6074: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d6074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d6078: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d6078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d607c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d607cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6080: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d6080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d6084: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d6084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d6088: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d6088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1d608c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1d608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1d6090: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d6090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6094: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1d6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1d6098: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d6098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d609c: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D609Cu;
    SET_GPR_U32(ctx, 31, 0x1D60A4u);
    ctx->pc = 0x1D60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D609Cu;
    // 0x1d60a0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D609Cu, 0x1D60A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60A4u;
label_1d60a4:
    // 0x1d60a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d60a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d60a8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1d60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1d60ac: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x1d60acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1d60b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d60b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d60b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d60b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d60b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d60b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d60bc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d60bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d60c0: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1d60c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1d60c4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1d60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1d60c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d60c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d60cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d60ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d60d0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d60d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d60d4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1d60d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d60d8: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x1d60d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x1d60dc: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1d60dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x1d60e0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D60E0u;
    {
        const bool branch_taken_0x1d60e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60E0u;
        // 0x1d60e4: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60e0) {
            ctx->pc = 0x1D60F4u;
            goto label_1d60f4;
        }
    }
    ctx->pc = 0x1D60E8u;
    // 0x1d60e8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1d60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1d60ec: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1d60ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d60f0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1d60f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1d60f4:
    // 0x1d60f4: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x1d60f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d60f8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d60f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d60fc: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D60FCu;
    {
        const bool branch_taken_0x1d60fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60FCu;
        // 0x1d6100: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60fc) {
            ctx->pc = 0x1D6168u;
            goto label_1d6168;
        }
    }
    ctx->pc = 0x1D6104u;
    // 0x1d6104: 0xc0755ac  jal         func_1D56B0
    ctx->pc = 0x1D6104u;
    SET_GPR_U32(ctx, 31, 0x1D610Cu);
    ctx->pc = 0x1D6108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6104u;
    // 0x1d6108: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D56B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56B0u, 0x1D6104u, 0x1D610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D610Cu;
label_1d610c:
    // 0x1d610c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d610cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6110: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6110u;
    {
        const bool branch_taken_0x1d6110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6110u;
        // 0x1d6114: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6110) {
            ctx->pc = 0x1D6140u;
            goto label_1d6140;
        }
    }
    ctx->pc = 0x1D6118u;
    // 0x1d6118: 0x52023  negu        $a0, $a1
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1d611c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6120: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x1d6120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d6124: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d6124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d6128: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d6128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d612c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1d612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d6130: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x1d6130u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1d6134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6134u;
    {
        const bool branch_taken_0x1d6134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6134u;
        // 0x1d6138: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6134) {
            ctx->pc = 0x1D6148u;
            goto label_1d6148;
        }
    }
    ctx->pc = 0x1D613Cu;
    // 0x1d613c: 0x0  nop
    ctx->pc = 0x1d613cu;
    // NOP
label_1d6140:
    // 0x1d6140: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6144: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d6144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d6148:
    // 0x1d6148: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1d6148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d614c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6154: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1d6154u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d6158: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1d6158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1d615c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d615cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6160: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6160u;
    {
        const bool branch_taken_0x1d6160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6160u;
        // 0x1d6164: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6160) {
            ctx->pc = 0x1D6188u;
            goto label_1d6188;
        }
    }
    ctx->pc = 0x1D6168u;
label_1d6168:
    // 0x1d6168: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x1d6168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1d616c: 0xc0755ac  jal         func_1D56B0
    ctx->pc = 0x1D616Cu;
    SET_GPR_U32(ctx, 31, 0x1D6174u);
    ctx->pc = 0x1D6170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D616Cu;
    // 0x1d6170: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D56B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D56B0u, 0x1D616Cu, 0x1D6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6174u;
label_1d6174:
    // 0x1d6174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d6174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6178: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1d6178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1d617c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1d617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d6180: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d6180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d6184: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x1d6184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_1d6188:
    // 0x1d6188: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6188u;
    {
        const bool branch_taken_0x1d6188 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6188u;
        // 0x1d618c: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6188) {
            ctx->pc = 0x1D61A8u;
            goto label_1d61a8;
        }
    }
    ctx->pc = 0x1D6190u;
    // 0x1d6190: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x1d6190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1d6194: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1d6194u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d6198: 0x2442fbcd  addiu       $v0, $v0, -0x433
    ctx->pc = 0x1d6198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966221));
    // 0x1d619c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D619Cu;
    {
        const bool branch_taken_0x1d619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D619Cu;
        // 0x1d61a0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d619c) {
            ctx->pc = 0x1D61C8u;
            goto label_1d61c8;
        }
    }
    ctx->pc = 0x1D61A4u;
    // 0x1d61a4: 0x0  nop
    ctx->pc = 0x1d61a4u;
    // NOP
label_1d61a8:
    // 0x1d61a8: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x1d61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x1d61ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1d61acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d61b0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1d61b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1d61b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d61b8: 0xc07558c  jal         func_1D5630
    ctx->pc = 0x1D61B8u;
    SET_GPR_U32(ctx, 31, 0x1D61C0u);
    ctx->pc = 0x1D61BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D61B8u;
    // 0x1d61bc: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5630u, 0x1D61B8u, 0x1D61C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D61C0u;
label_1d61c0:
    // 0x1d61c0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1d61c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x1d61c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d61c8:
    // 0x1d61c8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1d61c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1d61cc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1d61ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d61d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d61d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d61d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d61d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d61d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d61dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d61dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d61e0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d61e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d61e4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d61e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d61e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d61e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d61ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D61ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61ECu;
        // 0x1d61f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D61ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D61F4u;
}
