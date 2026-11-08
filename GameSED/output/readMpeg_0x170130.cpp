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

// Function: readMpeg
// Address: 0x170130 - 0x17047c
void readMpeg_0x170130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readMpeg_0x170130");
#endif

    switch (ctx->pc) {
        case 0x170190u: goto label_170190;
        case 0x17019cu: goto label_17019c;
        case 0x17026cu: goto label_17026c;
        case 0x170274u: goto label_170274;
        case 0x17027cu: goto label_17027c;
        case 0x170288u: goto label_170288;
        case 0x1702acu: goto label_1702ac;
        case 0x1702c8u: goto label_1702c8;
        case 0x1702d4u: goto label_1702d4;
        case 0x1702e8u: goto label_1702e8;
        case 0x1702f4u: goto label_1702f4;
        case 0x170300u: goto label_170300;
        case 0x170324u: goto label_170324;
        case 0x170338u: goto label_170338;
        case 0x170340u: goto label_170340;
        case 0x170358u: goto label_170358;
        case 0x170368u: goto label_170368;
        case 0x170378u: goto label_170378;
        case 0x170390u: goto label_170390;
        case 0x1703acu: goto label_1703ac;
        case 0x1703c0u: goto label_1703c0;
        case 0x1703c8u: goto label_1703c8;
        case 0x1703d0u: goto label_1703d0;
        case 0x1703e0u: goto label_1703e0;
        case 0x1703f8u: goto label_1703f8;
        case 0x170400u: goto label_170400;
        case 0x170408u: goto label_170408;
        case 0x170418u: goto label_170418;
        case 0x170428u: goto label_170428;
        case 0x170440u: goto label_170440;
        case 0x170448u: goto label_170448;
        default: break;
    }

    ctx->pc = 0x170130u;

    // 0x170130: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x170130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x170134: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x170134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x170138: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x170138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17013c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x17013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x170140: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x170140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170144: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x170144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x170148: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x170148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17014c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x17014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x170150: 0x24157fff  addiu       $s5, $zero, 0x7FFF
    ctx->pc = 0x170150u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x170154: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x170154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x170158: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x170158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x17015c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x17015cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170160: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x170160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x170164: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x170164u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x170168: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x170168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17016c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x17016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x170170: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x170170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x170174: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x170174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x170178: 0x8cd40004  lw          $s4, 0x4($a2)
    ctx->pc = 0x170178u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x17017c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x17017cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x170180: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x170180u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170184: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x170184u;
    {
        const bool branch_taken_0x170184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170184u;
        // 0x170188: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170184) {
            ctx->pc = 0x170398u;
            goto label_170398;
        }
    }
    ctx->pc = 0x17018Cu;
    // 0x17018c: 0x0  nop
    ctx->pc = 0x17018cu;
    // NOP
label_170190:
    // 0x170190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170194: 0xc06e3ea  jal         func_1B8FA8
    ctx->pc = 0x170194u;
    SET_GPR_U32(ctx, 31, 0x17019Cu);
    ctx->pc = 0x170198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170194u;
    // 0x170198: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8FA8u, 0x170194u, 0x17019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17019Cu;
label_17019c:
    // 0x17019c: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17019Cu;
    {
        const bool branch_taken_0x17019c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17019c) {
            ctx->pc = 0x1701A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17019Cu;
            // 0x1701a0: 0xaf8091b0  sw          $zero, -0x6E50($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294939056), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1701BCu;
            goto label_1701bc;
        }
    }
    ctx->pc = 0x1701A4u;
    // 0x1701a4: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x1701a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1701a8: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x1701a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1701ac: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1701acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1701b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1701b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1701b4: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x1701b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)65535);
    // 0x1701b8: 0xaf8291b0  sw          $v0, -0x6E50($gp)
    ctx->pc = 0x1701b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939056), GPR_U32(ctx, 2));
label_1701bc:
    // 0x1701bc: 0x8f8491b0  lw          $a0, -0x6E50($gp)
    ctx->pc = 0x1701bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
    // 0x1701c0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1701c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1701c4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1701c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1701c8: 0xa41026  xor         $v0, $a1, $a0
    ctx->pc = 0x1701c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x1701cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1701ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1701d0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1701d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1701d4: 0x28630015  slti        $v1, $v1, 0x15
    ctx->pc = 0x1701d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1701d8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1701D8u;
    {
        const bool branch_taken_0x1701d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1701DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701D8u;
        // 0x1701dc: 0x304209f0  andi        $v0, $v0, 0x9F0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2544);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701d8) {
            ctx->pc = 0x170248u;
            goto label_170248;
        }
    }
    ctx->pc = 0x1701E0u;
    // 0x1701e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1701e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1701e4: 0x1243000c  beq         $s2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1701E4u;
    {
        const bool branch_taken_0x1701e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1701e4) {
            ctx->pc = 0x170218u;
            goto label_170218;
        }
    }
    ctx->pc = 0x1701ECu;
    // 0x1701ec: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1701ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1701f0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1701F0u;
    {
        const bool branch_taken_0x1701f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F0u;
        // 0x1701f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701f0) {
            ctx->pc = 0x17024Cu;
            goto label_17024c;
        }
    }
    ctx->pc = 0x1701F8u;
    // 0x1701f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1701f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1701fc: 0x5242000a  beql        $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1701FCu;
    {
        const bool branch_taken_0x1701fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1701fc) {
            ctx->pc = 0x170200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1701FCu;
            // 0x170200: 0x30830900  andi        $v1, $a0, 0x900 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2304);
            ctx->in_delay_slot = false;
            ctx->pc = 0x170228u;
            goto label_170228;
        }
    }
    ctx->pc = 0x170204u;
    // 0x170204: 0x125e000e  beq         $s2, $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x170204u;
    {
        const bool branch_taken_0x170204 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 30));
        ctx->pc = 0x170208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170204u;
        // 0x170208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170204) {
            ctx->pc = 0x170240u;
            goto label_170240;
        }
    }
    ctx->pc = 0x17020Cu;
    // 0x17020c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17020Cu;
    {
        const bool branch_taken_0x17020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17020c) {
            ctx->pc = 0x17024Cu;
            goto label_17024c;
        }
    }
    ctx->pc = 0x170214u;
    // 0x170214: 0x0  nop
    ctx->pc = 0x170214u;
    // NOP
label_170218:
    // 0x170218: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x170218u;
    {
        const bool branch_taken_0x170218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170218) {
            ctx->pc = 0x17021Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170218u;
            // 0x17021c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170248u;
            goto label_170248;
        }
    }
    ctx->pc = 0x170220u;
    // 0x170220: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x170220u;
    {
        const bool branch_taken_0x170220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170220u;
        // 0x170224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170220) {
            ctx->pc = 0x17024Cu;
            goto label_17024c;
        }
    }
    ctx->pc = 0x170228u;
label_170228:
    // 0x170228: 0x24020900  addiu       $v0, $zero, 0x900
    ctx->pc = 0x170228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x17022c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17022Cu;
    {
        const bool branch_taken_0x17022c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17022c) {
            ctx->pc = 0x170230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17022Cu;
            // 0x170230: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170248u;
            goto label_170248;
        }
    }
    ctx->pc = 0x170234u;
    // 0x170234: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x170234u;
    {
        const bool branch_taken_0x170234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170234u;
        // 0x170238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170234) {
            ctx->pc = 0x17024Cu;
            goto label_17024c;
        }
    }
    ctx->pc = 0x17023Cu;
    // 0x17023c: 0x0  nop
    ctx->pc = 0x17023cu;
    // NOP
label_170240:
    // 0x170240: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x170240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x170244: 0x62b80b  movn        $s7, $v1, $v0
    ctx->pc = 0x170244u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_170248:
    // 0x170248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17024c:
    // 0x17024c: 0x16e2000c  bne         $s7, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17024Cu;
    {
        const bool branch_taken_0x17024c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x170250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17024Cu;
        // 0x170250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17024c) {
            ctx->pc = 0x170280u;
            goto label_170280;
        }
    }
    ctx->pc = 0x170254u;
    // 0x170254: 0x26b5ff9c  addiu       $s5, $s5, -0x64
    ctx->pc = 0x170254u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967196));
    // 0x170258: 0x1ea00004  bgtz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x170258u;
    {
        const bool branch_taken_0x170258 = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x17025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170258u;
        // 0x17025c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170258) {
            ctx->pc = 0x17026Cu;
            goto label_17026c;
        }
    }
    ctx->pc = 0x170260u;
    // 0x170260: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x170260u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170264: 0xc05c5fa  jal         func_1717E8
    ctx->pc = 0x170264u;
    SET_GPR_U32(ctx, 31, 0x17026Cu);
    ctx->pc = 0x170268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170264u;
    // 0x170268: 0x24441368  addiu       $a0, $v0, 0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717E8u, 0x170264u, 0x17026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17026Cu;
label_17026c:
    // 0x17026c: 0xc05c57e  jal         func_1715F8
    ctx->pc = 0x17026Cu;
    SET_GPR_U32(ctx, 31, 0x170274u);
    ctx->pc = 0x170270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17026Cu;
    // 0x170270: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1715F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1715F8u, 0x17026Cu, 0x170274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170274u;
label_170274:
    // 0x170274: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x170274u;
    SET_GPR_U32(ctx, 31, 0x17027Cu);
    ctx->pc = 0x170278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170274u;
    // 0x170278: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x170274u, 0x17027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17027Cu;
label_17027c:
    // 0x17027c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170280:
    // 0x170280: 0xc05c332  jal         func_170CC8
    ctx->pc = 0x170280u;
    SET_GPR_U32(ctx, 31, 0x170288u);
    ctx->pc = 0x170284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170280u;
    // 0x170284: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170CC8u, 0x170280u, 0x170288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170288u;
label_170288:
    // 0x170288: 0x1ac00018  blez        $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x170288u;
    {
        const bool branch_taken_0x170288 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x17028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170288u;
        // 0x17028c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170288) {
            ctx->pc = 0x1702ECu;
            goto label_1702ec;
        }
    }
    ctx->pc = 0x170290u;
    // 0x170290: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x170290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x170294: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x170294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x170298: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x170298u;
    {
        const bool branch_taken_0x170298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170298u;
        // 0x17029c: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170298) {
            ctx->pc = 0x1702ECu;
            goto label_1702ec;
        }
    }
    ctx->pc = 0x1702A0u;
    // 0x1702a0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1702a4: 0xc05d3d6  jal         func_174F58
    ctx->pc = 0x1702A4u;
    SET_GPR_U32(ctx, 31, 0x1702ACu);
    ctx->pc = 0x1702A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702A4u;
    // 0x1702a8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F58u, 0x1702A4u, 0x1702ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702ACu;
label_1702ac:
    // 0x1702ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1702acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1702b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1702b4: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1702B4u;
    {
        const bool branch_taken_0x1702b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1702b4) {
            ctx->pc = 0x1702B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1702B4u;
            // 0x1702b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1702E0u;
            goto label_1702e0;
        }
    }
    ctx->pc = 0x1702BCu;
    // 0x1702bc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1702bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1702c0: 0xc05c5fa  jal         func_1717E8
    ctx->pc = 0x1702C0u;
    SET_GPR_U32(ctx, 31, 0x1702C8u);
    ctx->pc = 0x1702C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702C0u;
    // 0x1702c4: 0x24a41368  addiu       $a0, $a1, 0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717E8u, 0x1702C0u, 0x1702C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702C8u;
label_1702c8:
    // 0x1702c8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1702c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1702cc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1702CCu;
    SET_GPR_U32(ctx, 31, 0x1702D4u);
    ctx->pc = 0x1702D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702CCu;
    // 0x1702d0: 0x24447678  addiu       $a0, $v0, 0x7678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1702CCu, 0x1702D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702D4u;
label_1702d4:
    // 0x1702d4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1702D4u;
    {
        const bool branch_taken_0x1702d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1702d4) {
            ctx->pc = 0x1703C8u;
            goto label_1703c8;
        }
    }
    ctx->pc = 0x1702DCu;
    // 0x1702dc: 0x0  nop
    ctx->pc = 0x1702dcu;
    // NOP
label_1702e0:
    // 0x1702e0: 0xc05c342  jal         func_170D08
    ctx->pc = 0x1702E0u;
    SET_GPR_U32(ctx, 31, 0x1702E8u);
    ctx->pc = 0x1702E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702E0u;
    // 0x1702e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170D08u, 0x1702E0u, 0x1702E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702E8u;
label_1702e8:
    // 0x1702e8: 0x2d0b023  subu        $s6, $s6, $s0
    ctx->pc = 0x1702e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_1702ec:
    // 0x1702ec: 0xc05c120  jal         func_170480
    ctx->pc = 0x1702ECu;
    SET_GPR_U32(ctx, 31, 0x1702F4u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x1702ECu, 0x1702F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702F4u;
label_1702f4:
    // 0x1702f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1702f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702f8: 0xc05c35c  jal         func_170D70
    ctx->pc = 0x1702F8u;
    SET_GPR_U32(ctx, 31, 0x170300u);
    ctx->pc = 0x1702FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702F8u;
    // 0x1702fc: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170D70u, 0x1702F8u, 0x170300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170300u;
label_170300:
    // 0x170300: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170300u;
    {
        const bool branch_taken_0x170300 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x170304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170300u;
        // 0x170304: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170300) {
            ctx->pc = 0x170338u;
            goto label_170338;
        }
    }
    ctx->pc = 0x170308u;
    // 0x170308: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x170308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17030c: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x17030cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x170310: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x170310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x170314: 0x8d080008  lw          $t0, 0x8($t0)
    ctx->pc = 0x170314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x170318: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x170318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17031c: 0xc06f26a  jal         func_1BC9A8
    ctx->pc = 0x17031Cu;
    SET_GPR_U32(ctx, 31, 0x170324u);
    ctx->pc = 0x170320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17031Cu;
    // 0x170320: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC9A8u, 0x17031Cu, 0x170324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170324u;
label_170324:
    // 0x170324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x170324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17032c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17032cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170330: 0xc05c376  jal         func_170DD8
    ctx->pc = 0x170330u;
    SET_GPR_U32(ctx, 31, 0x170338u);
    ctx->pc = 0x170334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170330u;
    // 0x170334: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170DD8u, 0x170330u, 0x170338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170338u;
label_170338:
    // 0x170338: 0xc05c250  jal         func_170940
    ctx->pc = 0x170338u;
    SET_GPR_U32(ctx, 31, 0x170340u);
    ctx->pc = 0x170940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170940u, 0x170338u, 0x170340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170340u;
label_170340:
    // 0x170340: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x170340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x170344: 0x14a00015  bnez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x170344u;
    {
        const bool branch_taken_0x170344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x170348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170344u;
        // 0x170348: 0x2a820005  slti        $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170344) {
            ctx->pc = 0x17039Cu;
            goto label_17039c;
        }
    }
    ctx->pc = 0x17034Cu;
    // 0x17034c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x17034cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170350: 0xc05cf5a  jal         func_173D68
    ctx->pc = 0x170350u;
    SET_GPR_U32(ctx, 31, 0x170358u);
    ctx->pc = 0x170354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170350u;
    // 0x170354: 0x248412a8  addiu       $a0, $a0, 0x12A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D68u, 0x170350u, 0x170358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170358u;
label_170358:
    // 0x170358: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x170358u;
    {
        const bool branch_taken_0x170358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170358) {
            ctx->pc = 0x17035Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170358u;
            // 0x17035c: 0x2a820005  slti        $v0, $s4, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17039Cu;
            goto label_17039c;
        }
    }
    ctx->pc = 0x170360u;
    // 0x170360: 0xc05c126  jal         func_170498
    ctx->pc = 0x170360u;
    SET_GPR_U32(ctx, 31, 0x170368u);
    ctx->pc = 0x170498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170498u, 0x170360u, 0x170368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170368u;
label_170368:
    // 0x170368: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x170368u;
    {
        const bool branch_taken_0x170368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170368) {
            ctx->pc = 0x17036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170368u;
            // 0x17036c: 0x2a820005  slti        $v0, $s4, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17039Cu;
            goto label_17039c;
        }
    }
    ctx->pc = 0x170370u;
    // 0x170370: 0xc05d2f4  jal         func_174BD0
    ctx->pc = 0x170370u;
    SET_GPR_U32(ctx, 31, 0x170378u);
    ctx->pc = 0x170374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170370u;
    // 0x170374: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174BD0u, 0x170370u, 0x170378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170378u;
label_170378:
    // 0x170378: 0x8f828bd8  lw          $v0, -0x7428($gp)
    ctx->pc = 0x170378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937560)));
    // 0x17037c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17037Cu;
    {
        const bool branch_taken_0x17037c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17037c) {
            ctx->pc = 0x170380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17037Cu;
            // 0x170380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170394u;
            goto label_170394;
        }
    }
    ctx->pc = 0x170384u;
    // 0x170384: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x170384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170388: 0xc05c404  jal         func_171010
    ctx->pc = 0x170388u;
    SET_GPR_U32(ctx, 31, 0x170390u);
    ctx->pc = 0x17038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170388u;
    // 0x17038c: 0x24841308  addiu       $a0, $a0, 0x1308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171010u, 0x170388u, 0x170390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170390u;
label_170390:
    // 0x170390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170394:
    // 0x170394: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x170394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_170398:
    // 0x170398: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x170398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_17039c:
    // 0x17039c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17039Cu;
    {
        const bool branch_taken_0x17039c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17039c) {
            ctx->pc = 0x1703C8u;
            goto label_1703c8;
        }
    }
    ctx->pc = 0x1703A4u;
    // 0x1703a4: 0xc05c5fe  jal         func_1717F8
    ctx->pc = 0x1703A4u;
    SET_GPR_U32(ctx, 31, 0x1703ACu);
    ctx->pc = 0x1703A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703A4u;
    // 0x1703a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717F8u, 0x1703A4u, 0x1703ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703ACu;
label_1703ac:
    // 0x1703ac: 0x545eff78  bnel        $v0, $fp, . + 4 + (-0x88 << 2)
    ctx->pc = 0x1703ACu;
    {
        const bool branch_taken_0x1703ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x1703ac) {
            ctx->pc = 0x1703B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1703ACu;
            // 0x1703b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170190;
        }
    }
    ctx->pc = 0x1703B4u;
    // 0x1703b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1703B4u;
    {
        const bool branch_taken_0x1703b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1703b4) {
            ctx->pc = 0x1703C8u;
            goto label_1703c8;
        }
    }
    ctx->pc = 0x1703BCu;
    // 0x1703bc: 0x0  nop
    ctx->pc = 0x1703bcu;
    // NOP
label_1703c0:
    // 0x1703c0: 0xc05c120  jal         func_170480
    ctx->pc = 0x1703C0u;
    SET_GPR_U32(ctx, 31, 0x1703C8u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x1703C0u, 0x1703C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703C8u;
label_1703c8:
    // 0x1703c8: 0xc05c628  jal         func_1718A0
    ctx->pc = 0x1703C8u;
    SET_GPR_U32(ctx, 31, 0x1703D0u);
    ctx->pc = 0x1703CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703C8u;
    // 0x1703cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1718A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1718A0u, 0x1703C8u, 0x1703D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703D0u;
label_1703d0:
    // 0x1703d0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1703D0u;
    {
        const bool branch_taken_0x1703d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1703d0) {
            ctx->pc = 0x1703C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1703c0;
        }
    }
    ctx->pc = 0x1703D8u;
    // 0x1703d8: 0xc05c5fe  jal         func_1717F8
    ctx->pc = 0x1703D8u;
    SET_GPR_U32(ctx, 31, 0x1703E0u);
    ctx->pc = 0x1703DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703D8u;
    // 0x1703dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717F8u, 0x1703D8u, 0x1703E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1703E0u;
label_1703e0:
    // 0x1703e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1703e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1703e4: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1703E4u;
    {
        const bool branch_taken_0x1703e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1703e4) {
            ctx->pc = 0x170420u;
            goto label_170420;
        }
    }
    ctx->pc = 0x1703ECu;
    // 0x1703ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1703ECu;
    {
        const bool branch_taken_0x1703ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1703F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1703ECu;
        // 0x1703f0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1703ec) {
            ctx->pc = 0x170400u;
            goto label_170400;
        }
    }
    ctx->pc = 0x1703F4u;
    // 0x1703f4: 0x0  nop
    ctx->pc = 0x1703f4u;
    // NOP
label_1703f8:
    // 0x1703f8: 0xc05c120  jal         func_170480
    ctx->pc = 0x1703F8u;
    SET_GPR_U32(ctx, 31, 0x170400u);
    ctx->pc = 0x170480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170480u, 0x1703F8u, 0x170400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170400u;
label_170400:
    // 0x170400: 0xc05c65c  jal         func_171970
    ctx->pc = 0x170400u;
    SET_GPR_U32(ctx, 31, 0x170408u);
    ctx->pc = 0x170404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170400u;
    // 0x170404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171970u, 0x170400u, 0x170408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170408u;
label_170408:
    // 0x170408: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170408u;
    {
        const bool branch_taken_0x170408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170408u;
        // 0x17040c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170408) {
            ctx->pc = 0x170420u;
            goto label_170420;
        }
    }
    ctx->pc = 0x170410u;
    // 0x170410: 0xc05c5fe  jal         func_1717F8
    ctx->pc = 0x170410u;
    SET_GPR_U32(ctx, 31, 0x170418u);
    ctx->pc = 0x1717F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717F8u, 0x170410u, 0x170418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170418u;
label_170418:
    // 0x170418: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x170418u;
    {
        const bool branch_taken_0x170418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x170418) {
            ctx->pc = 0x1703F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1703f8;
        }
    }
    ctx->pc = 0x170420u;
label_170420:
    // 0x170420: 0xc05d304  jal         func_174C10
    ctx->pc = 0x170420u;
    SET_GPR_U32(ctx, 31, 0x170428u);
    ctx->pc = 0x174C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174C10u, 0x170420u, 0x170428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170428u;
label_170428:
    // 0x170428: 0x8f828bd8  lw          $v0, -0x7428($gp)
    ctx->pc = 0x170428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937560)));
    // 0x17042c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17042Cu;
    {
        const bool branch_taken_0x17042c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17042c) {
            ctx->pc = 0x170440u;
            goto label_170440;
        }
    }
    ctx->pc = 0x170434u;
    // 0x170434: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x170434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x170438: 0xc05c40a  jal         func_171028
    ctx->pc = 0x170438u;
    SET_GPR_U32(ctx, 31, 0x170440u);
    ctx->pc = 0x17043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170438u;
    // 0x17043c: 0x24841308  addiu       $a0, $a0, 0x1308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171028u, 0x170438u, 0x170440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170440u;
label_170440:
    // 0x170440: 0xc05cf00  jal         func_173C00
    ctx->pc = 0x170440u;
    SET_GPR_U32(ctx, 31, 0x170448u);
    ctx->pc = 0x173C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173C00u, 0x170440u, 0x170448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170448u;
label_170448:
    // 0x170448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17044c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x17044cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170450: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x170450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x170454: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x170454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170458: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x170458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x17045c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x17045cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170460: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x170460u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x170464: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x170464u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x170468: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x170468u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17046c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x17046cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x170470: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x170470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x170474: 0x3e00008  jr          $ra
    ctx->pc = 0x170474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170474u;
        // 0x170478: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17047Cu;
}
