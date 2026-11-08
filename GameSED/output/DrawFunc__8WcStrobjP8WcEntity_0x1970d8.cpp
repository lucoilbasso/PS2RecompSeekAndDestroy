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

// Function: DrawFunc__8WcStrobjP8WcEntity
// Address: 0x1970d8 - 0x197674
void DrawFunc__8WcStrobjP8WcEntity_0x1970d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__8WcStrobjP8WcEntity_0x1970d8");
#endif

    switch (ctx->pc) {
        case 0x19711cu: goto label_19711c;
        case 0x197134u: goto label_197134;
        case 0x19713cu: goto label_19713c;
        case 0x197148u: goto label_197148;
        case 0x197158u: goto label_197158;
        case 0x197178u: goto label_197178;
        case 0x197180u: goto label_197180;
        case 0x1971c0u: goto label_1971c0;
        case 0x197228u: goto label_197228;
        case 0x197230u: goto label_197230;
        case 0x197254u: goto label_197254;
        case 0x197298u: goto label_197298;
        case 0x1972a0u: goto label_1972a0;
        case 0x1974a4u: goto label_1974a4;
        case 0x1974b0u: goto label_1974b0;
        case 0x1974c8u: goto label_1974c8;
        case 0x1974d8u: goto label_1974d8;
        case 0x1974e8u: goto label_1974e8;
        case 0x197520u: goto label_197520;
        case 0x197528u: goto label_197528;
        case 0x197538u: goto label_197538;
        case 0x197550u: goto label_197550;
        case 0x197568u: goto label_197568;
        case 0x197570u: goto label_197570;
        case 0x1975c4u: goto label_1975c4;
        case 0x1975ccu: goto label_1975cc;
        case 0x1975e0u: goto label_1975e0;
        case 0x197608u: goto label_197608;
        case 0x197610u: goto label_197610;
        case 0x197620u: goto label_197620;
        case 0x197644u: goto label_197644;
        default: break;
    }

    ctx->pc = 0x1970d8u;

    // 0x1970d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1970d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1970dc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1970dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1970e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1970e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1970e4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1970e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1970e8: 0x8fb60008  lw          $s6, 0x8($sp)
    ctx->pc = 0x1970e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1970ec: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1970ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1970f0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1970f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1970f4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1970f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1970f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1970fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1970fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x197100: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x197100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x197104: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x197104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x197108: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x197108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x19710c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x19710cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x197110: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x197110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x197114: 0xc05dd18  jal         func_177460
    ctx->pc = 0x197114u;
    SET_GPR_U32(ctx, 31, 0x19711Cu);
    ctx->pc = 0x197118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197114u;
    // 0x197118: 0x26d50150  addiu       $s5, $s6, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x197114u, 0x19711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19711Cu;
label_19711c:
    // 0x19711c: 0x8ec301bc  lw          $v1, 0x1BC($s6)
    ctx->pc = 0x19711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 444)));
    // 0x197120: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x197124: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x197124u;
    {
        const bool branch_taken_0x197124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197124u;
        // 0x197128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197124) {
            ctx->pc = 0x1971F0u;
            goto label_1971f0;
        }
    }
    ctx->pc = 0x19712Cu;
    // 0x19712c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x19712Cu;
    SET_GPR_U32(ctx, 31, 0x197134u);
    ctx->pc = 0x197130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19712Cu;
    // 0x197130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x19712Cu, 0x197134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197134u;
label_197134:
    // 0x197134: 0xc0659a2  jal         func_196688
    ctx->pc = 0x197134u;
    SET_GPR_U32(ctx, 31, 0x19713Cu);
    ctx->pc = 0x197138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197134u;
    // 0x197138: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196688u, 0x197134u, 0x19713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19713Cu;
label_19713c:
    // 0x19713c: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x19713cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x197140: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x197140u;
    SET_GPR_U32(ctx, 31, 0x197148u);
    ctx->pc = 0x197144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197140u;
    // 0x197144: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x197140u, 0x197148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197148u;
label_197148:
    // 0x197148: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x197148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19714c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19714cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197150: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x197150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197154: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x197154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_197158:
    // 0x197158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19715c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x197160: 0x0  nop
    ctx->pc = 0x197160u;
    // NOP
    // 0x197164: 0x0  nop
    ctx->pc = 0x197164u;
    // NOP
    // 0x197168: 0x0  nop
    ctx->pc = 0x197168u;
    // NOP
    // 0x19716c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19716Cu;
    {
        const bool branch_taken_0x19716c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19716c) {
            ctx->pc = 0x197158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197158;
        }
    }
    ctx->pc = 0x197174u;
    // 0x197174: 0x0  nop
    ctx->pc = 0x197174u;
    // NOP
label_197178:
    // 0x197178: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x197178u;
    SET_GPR_U32(ctx, 31, 0x197180u);
    ctx->pc = 0x19717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197178u;
    // 0x19717c: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x197178u, 0x197180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197180u;
label_197180:
    // 0x197180: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x197180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x197184: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x197184u;
    {
        const bool branch_taken_0x197184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x197188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197184u;
        // 0x197188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197184) {
            ctx->pc = 0x197178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197178;
        }
    }
    ctx->pc = 0x19718Cu;
    // 0x19718c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19718cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197190: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x197190u;
    {
        const bool branch_taken_0x197190 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197190u;
        // 0x197194: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197190) {
            ctx->pc = 0x1971B0u;
            goto label_1971b0;
        }
    }
    ctx->pc = 0x197198u;
    // 0x197198: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19719c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19719cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1971a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1971a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1971a4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1971a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1971a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1971A8u;
    {
        const bool branch_taken_0x1971a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1971ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971A8u;
        // 0x1971ac: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971a8) {
            ctx->pc = 0x1971C0u;
            goto label_1971c0;
        }
    }
    ctx->pc = 0x1971B0u;
label_1971b0:
    // 0x1971b0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1971B0u;
    {
        const bool branch_taken_0x1971b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1971B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971B0u;
        // 0x1971b4: 0x8f838c54  lw          $v1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971b0) {
            ctx->pc = 0x1971C4u;
            goto label_1971c4;
        }
    }
    ctx->pc = 0x1971B8u;
    // 0x1971b8: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x1971B8u;
    SET_GPR_U32(ctx, 31, 0x1971C0u);
    ctx->pc = 0x1971BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1971B8u;
    // 0x1971bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1971B8u, 0x1971C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1971C0u;
label_1971c0:
    // 0x1971c0: 0x8f838c54  lw          $v1, -0x73AC($gp)
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_1971c4:
    // 0x1971c4: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x1971c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1971c8: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x1971c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1971cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1971ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1971d0: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x1971d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
    // 0x1971d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1971d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1971d8: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1971d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1971dc: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1971dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1971e0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1971e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1971e4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1971e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1971e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1971e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1971ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1971ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1971f0:
    // 0x1971f0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1971f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1971f4: 0x2474d650  addiu       $s4, $v1, -0x29B0
    ctx->pc = 0x1971f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x1971f8: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1971f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1971fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1971FCu;
    {
        const bool branch_taken_0x1971fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971FCu;
        // 0x197200: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1971fc) {
            ctx->pc = 0x197220u;
            goto label_197220;
        }
    }
    ctx->pc = 0x197204u;
    // 0x197204: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x197204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x197208: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x197208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19720c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19720cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x197210: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x197210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x197214: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x197214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x197218: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x197218u;
    {
        const bool branch_taken_0x197218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197218u;
        // 0x19721c: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197218) {
            ctx->pc = 0x197254u;
            goto label_197254;
        }
    }
    ctx->pc = 0x197220u;
label_197220:
    // 0x197220: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x197220u;
    SET_GPR_U32(ctx, 31, 0x197228u);
    ctx->pc = 0x197224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197220u;
    // 0x197224: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x197220u, 0x197228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197228u;
label_197228:
    // 0x197228: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x197228u;
    SET_GPR_U32(ctx, 31, 0x197230u);
    ctx->pc = 0x19722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197228u;
    // 0x19722c: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x197228u, 0x197230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197230u;
label_197230:
    // 0x197230: 0x8e90008c  lw          $s0, 0x8C($s4)
    ctx->pc = 0x197230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x197234: 0x8e820080  lw          $v0, 0x80($s4)
    ctx->pc = 0x197234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x197238: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x197238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19723c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x19723cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x197240: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x197244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x197244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x197248: 0xae85008c  sw          $a1, 0x8C($s4)
    ctx->pc = 0x197248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 5));
    // 0x19724c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19724Cu;
    SET_GPR_U32(ctx, 31, 0x197254u);
    ctx->pc = 0x197250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19724Cu;
    // 0x197250: 0xae820080  sw          $v0, 0x80($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19724Cu, 0x197254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197254u;
label_197254:
    // 0x197254: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x197254u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197258: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x197258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19725c: 0x26d30020  addiu       $s3, $s6, 0x20
    ctx->pc = 0x19725cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x197260: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x197260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x197264: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x197264u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x197268: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x197268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19726c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19726cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197270: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x197270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x197274: 0x3063e000  andi        $v1, $v1, 0xE000
    ctx->pc = 0x197274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57344);
    // 0x197278: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x197278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x19727c: 0xae4203c8  sw          $v0, 0x3C8($s2)
    ctx->pc = 0x19727cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 968), GPR_U32(ctx, 2));
    // 0x197280: 0x265003d0  addiu       $s0, $s2, 0x3D0
    ctx->pc = 0x197280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
    // 0x197284: 0xaee40008  sw          $a0, 0x8($s7)
    ctx->pc = 0x197284u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 4));
    // 0x197288: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197288u;
    {
        const bool branch_taken_0x197288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197288u;
        // 0x19728c: 0x8fd10164  lw          $s1, 0x164($fp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197288) {
            ctx->pc = 0x197298u;
            goto label_197298;
        }
    }
    ctx->pc = 0x197290u;
    // 0x197290: 0xc061920  jal         func_186480
    ctx->pc = 0x197290u;
    SET_GPR_U32(ctx, 31, 0x197298u);
    ctx->pc = 0x197294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197290u;
    // 0x197294: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x197290u, 0x197298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197298u;
label_197298:
    // 0x197298: 0xc061422  jal         func_185088
    ctx->pc = 0x197298u;
    SET_GPR_U32(ctx, 31, 0x1972A0u);
    ctx->pc = 0x19729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197298u;
    // 0x19729c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x197298u, 0x1972A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972A0u;
label_1972a0:
    // 0x1972a0: 0x26c30110  addiu       $v1, $s6, 0x110
    ctx->pc = 0x1972a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 272));
    // 0x1972a4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1972a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1972a8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1972a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1972ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1972acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1972b0: 0xae5e03c0  sw          $fp, 0x3C0($s2)
    ctx->pc = 0x1972b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 960), GPR_U32(ctx, 30));
    // 0x1972b4: 0x8c4401a8  lw          $a0, 0x1A8($v0)
    ctx->pc = 0x1972b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x1972b8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1972B8u;
    {
        const bool branch_taken_0x1972b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1972BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972B8u;
        // 0x1972bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1972b8) {
            ctx->pc = 0x1972C8u;
            goto label_1972c8;
        }
    }
    ctx->pc = 0x1972C0u;
    // 0x1972c0: 0x8fc201bc  lw          $v0, 0x1BC($fp)
    ctx->pc = 0x1972c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 444)));
    // 0x1972c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1972c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1972c8:
    // 0x1972c8: 0xae4203c4  sw          $v0, 0x3C4($s2)
    ctx->pc = 0x1972c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 964), GPR_U32(ctx, 2));
    // 0x1972cc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1972ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1972d0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1972d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1972d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1972d8: 0x264701e0  addiu       $a3, $s2, 0x1E0
    ctx->pc = 0x1972d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1972dc: 0xdea20030  ld          $v0, 0x30($s5)
    ctx->pc = 0x1972dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1972e0: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x1972e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1972e4: 0xae43021c  sw          $v1, 0x21C($s2)
    ctx->pc = 0x1972e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 3));
    // 0x1972e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1972e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1972ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1972ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1972f0: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x1972f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x1972f4: 0xfe420220  sd          $v0, 0x220($s2)
    ctx->pc = 0x1972f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 544), GPR_U64(ctx, 2));
    // 0x1972f8: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1972f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1972fc: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x1972fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x197300: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x197300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197304: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x197304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197308: 0xc6200154  lwc1        $f0, 0x154($s1)
    ctx->pc = 0x197308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19730c: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x19730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x197310: 0x3c06302e  lui         $a2, 0x302E
    ctx->pc = 0x197310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12334 << 16));
    // 0x197314: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x197314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x197318: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x197318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x19731c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x19731cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x197320: 0x264b0240  addiu       $t3, $s2, 0x240
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
    // 0x197324: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x197324u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x197328: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x197328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19732c: 0xe6410228  swc1        $f1, 0x228($s2)
    ctx->pc = 0x19732cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 552), bits); }
    // 0x197330: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x197330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197334: 0xe6400210  swc1        $f0, 0x210($s2)
    ctx->pc = 0x197334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 528), bits); }
    // 0x197338: 0xc621017c  lwc1        $f1, 0x17C($s1)
    ctx->pc = 0x197338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19733c: 0xe6410214  swc1        $f1, 0x214($s2)
    ctx->pc = 0x19733cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
    // 0x197340: 0x92a20007  lbu         $v0, 0x7($s5)
    ctx->pc = 0x197340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
    // 0x197344: 0xfe4301d0  sd          $v1, 0x1D0($s2)
    ctx->pc = 0x197344u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 464), GPR_U64(ctx, 3));
    // 0x197348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x197348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19734c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19734cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x197350: 0xfe4401d8  sd          $a0, 0x1D8($s2)
    ctx->pc = 0x197350u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 472), GPR_U64(ctx, 4));
    // 0x197354: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x197354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x197358: 0xe6400218  swc1        $f0, 0x218($s2)
    ctx->pc = 0x197358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 536), bits); }
    // 0x19735c: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x19735cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x197360: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x197360u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x197364: 0xfe490200  sd          $t1, 0x200($s2)
    ctx->pc = 0x197364u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 512), GPR_U64(ctx, 9));
    // 0x197368: 0xfe480208  sd          $t0, 0x208($s2)
    ctx->pc = 0x197368u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 520), GPR_U64(ctx, 8));
    // 0x19736c: 0xfe4901f0  sd          $t1, 0x1F0($s2)
    ctx->pc = 0x19736cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 496), GPR_U64(ctx, 9));
    // 0x197370: 0xfe4801f8  sd          $t0, 0x1F8($s2)
    ctx->pc = 0x197370u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 504), GPR_U64(ctx, 8));
    // 0x197374: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x197374u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197378: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x197378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x19737c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19737Cu;
    {
        const bool branch_taken_0x19737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19737Cu;
        // 0x197380: 0x264a0250  addiu       $t2, $s2, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19737c) {
            ctx->pc = 0x1973C8u;
            goto label_1973c8;
        }
    }
    ctx->pc = 0x197384u;
    // 0x197384: 0x92a20007  lbu         $v0, 0x7($s5)
    ctx->pc = 0x197384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
    // 0x197388: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x197388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x19738c: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x19738cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x197390: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x197390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x197394: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x197394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x197398: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x197398u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x19739c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x19739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1973a0: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1973a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1973a4: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x1973a4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x1973a8: 0x26490270  addiu       $t1, $s2, 0x270
    ctx->pc = 0x1973a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x1973ac: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x1973acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1973b0: 0x92a40003  lbu         $a0, 0x3($s5)
    ctx->pc = 0x1973b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x1973b4: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1973b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1973b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1973b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1973bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1973BCu;
    {
        const bool branch_taken_0x1973bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1973C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1973BCu;
        // 0x1973c0: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1973bc) {
            ctx->pc = 0x1973F8u;
            goto label_1973f8;
        }
    }
    ctx->pc = 0x1973C4u;
    // 0x1973c4: 0x0  nop
    ctx->pc = 0x1973c4u;
    // NOP
label_1973c8:
    // 0x1973c8: 0x26450260  addiu       $a1, $s2, 0x260
    ctx->pc = 0x1973c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x1973cc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1973ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1973d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1973d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1973d4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x1973d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1973d8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1973d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1973dc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1973dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1973e0: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1973e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1973e4: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x1973e4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x1973e8: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x1973e8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x1973ec: 0x26490270  addiu       $t1, $s2, 0x270
    ctx->pc = 0x1973ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
    // 0x1973f0: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1973f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x1973f4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1973f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1973f8:
    // 0x1973f8: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x1973f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x1973fc: 0x3484130d  ori         $a0, $a0, 0x130D
    ctx->pc = 0x1973fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4877);
    // 0x197400: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x197400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x197404: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x197404u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x197408: 0x27858c90  addiu       $a1, $gp, -0x7370
    ctx->pc = 0x197408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
    // 0x19740c: 0xfd220008  sd          $v0, 0x8($t1)
    ctx->pc = 0x19740cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 2));
    // 0x197410: 0x27838c80  addiu       $v1, $gp, -0x7380
    ctx->pc = 0x197410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937728));
    // 0x197414: 0x252a0010  addiu       $t2, $t1, 0x10
    ctx->pc = 0x197414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x197418: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x197418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x19741c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x19741cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197420: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x197420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197424: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x197424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x197428: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x197428u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19742c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x19742cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x197430: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x197430u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197434: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x197434u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x197438: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x197438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x19743c: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x19743cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197440: 0x14b3023  subu        $a2, $t2, $t3
    ctx->pc = 0x197440u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x197444: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x197444u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x197448: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x197448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x19744c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x19744cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x197450: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x197450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x197454: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x197458: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x197458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19745c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x19745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x197460: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x197460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197464: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x197464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x197468: 0xfd270008  sd          $a3, 0x8($t1)
    ctx->pc = 0x197468u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 7));
    // 0x19746c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x19746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x197470: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x197470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x197474: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x197474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x197478: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x197478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19747c: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x19747cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x197480: 0xfd240000  sd          $a0, 0x0($t1)
    ctx->pc = 0x197480u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 4));
    // 0x197484: 0xfd620008  sd          $v0, 0x8($t3)
    ctx->pc = 0x197484u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 2));
    // 0x197488: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x197488u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x19748c: 0x8ec201bc  lw          $v0, 0x1BC($s6)
    ctx->pc = 0x19748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 444)));
    // 0x197490: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x197490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x197494: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x197494u;
    {
        const bool branch_taken_0x197494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197494u;
        // 0x197498: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197494) {
            ctx->pc = 0x1974B0u;
            goto label_1974b0;
        }
    }
    ctx->pc = 0x19749Cu;
    // 0x19749c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19749Cu;
    SET_GPR_U32(ctx, 31, 0x1974A4u);
    ctx->pc = 0x1974A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19749Cu;
    // 0x1974a0: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19749Cu, 0x1974A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974A4u;
label_1974a4:
    // 0x1974a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1974a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974a8: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1974A8u;
    SET_GPR_U32(ctx, 31, 0x1974B0u);
    ctx->pc = 0x1974ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974A8u;
    // 0x1974ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1974A8u, 0x1974B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974B0u;
label_1974b0:
    // 0x1974b0: 0x8fc201c4  lw          $v0, 0x1C4($fp)
    ctx->pc = 0x1974b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 452)));
    // 0x1974b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1974B4u;
    {
        const bool branch_taken_0x1974b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1974b4) {
            ctx->pc = 0x1974B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1974B4u;
            // 0x1974b8: 0x3c04001e  lui         $a0, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1974D0u;
            goto label_1974d0;
        }
    }
    ctx->pc = 0x1974BCu;
    // 0x1974bc: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1974bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1974c0: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x1974C0u;
    SET_GPR_U32(ctx, 31, 0x1974C8u);
    ctx->pc = 0x1974C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974C0u;
    // 0x1974c4: 0x24848de0  addiu       $a0, $a0, -0x7220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x1974C0u, 0x1974C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974C8u;
label_1974c8:
    // 0x1974c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1974C8u;
    {
        const bool branch_taken_0x1974c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1974CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974C8u;
        // 0x1974cc: 0x8ed101b4  lw          $s1, 0x1B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974c8) {
            ctx->pc = 0x1974DCu;
            goto label_1974dc;
        }
    }
    ctx->pc = 0x1974D0u;
label_1974d0:
    // 0x1974d0: 0xc0663b6  jal         func_198ED8
    ctx->pc = 0x1974D0u;
    SET_GPR_U32(ctx, 31, 0x1974D8u);
    ctx->pc = 0x1974D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1974D0u;
    // 0x1974d4: 0x248463f0  addiu       $a0, $a0, 0x63F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198ED8u, 0x1974D0u, 0x1974D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974D8u;
label_1974d8:
    // 0x1974d8: 0x8ed101b4  lw          $s1, 0x1B4($s6)
    ctx->pc = 0x1974d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 436)));
label_1974dc:
    // 0x1974dc: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1974dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1974e0: 0x8ed301b0  lw          $s3, 0x1B0($s6)
    ctx->pc = 0x1974e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 432)));
    // 0x1974e4: 0x0  nop
    ctx->pc = 0x1974e4u;
    // NOP
label_1974e8:
    // 0x1974e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1974e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1974ec: 0x105e0005  beq         $v0, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x1974ECu;
    {
        const bool branch_taken_0x1974ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x1974F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974ECu;
        // 0x1974f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974ec) {
            ctx->pc = 0x197504u;
            goto label_197504;
        }
    }
    ctx->pc = 0x1974F4u;
    // 0x1974f4: 0x94820154  lhu         $v0, 0x154($a0)
    ctx->pc = 0x1974f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1974f8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1974f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1974fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1974FCu;
    {
        const bool branch_taken_0x1974fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1974FCu;
        // 0x197500: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1974fc) {
            ctx->pc = 0x197530u;
            goto label_197530;
        }
    }
    ctx->pc = 0x197504u;
label_197504:
    // 0x197504: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x197504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x197508: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x197508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19750c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x19750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x197510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197510u;
    {
        const bool branch_taken_0x197510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197510) {
            ctx->pc = 0x197520u;
            goto label_197520;
        }
    }
    ctx->pc = 0x197518u;
    // 0x197518: 0xc061920  jal         func_186480
    ctx->pc = 0x197518u;
    SET_GPR_U32(ctx, 31, 0x197520u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x197518u, 0x197520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197520u;
label_197520:
    // 0x197520: 0xc061422  jal         func_185088
    ctx->pc = 0x197520u;
    SET_GPR_U32(ctx, 31, 0x197528u);
    ctx->pc = 0x197524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197520u;
    // 0x197524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x197520u, 0x197528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197528u;
label_197528:
    // 0x197528: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x197528u;
    {
        const bool branch_taken_0x197528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197528u;
        // 0x19752c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197528) {
            ctx->pc = 0x1975B4u;
            goto label_1975b4;
        }
    }
    ctx->pc = 0x197530u;
label_197530:
    // 0x197530: 0xc065ae4  jal         func_196B90
    ctx->pc = 0x197530u;
    SET_GPR_U32(ctx, 31, 0x197538u);
    ctx->pc = 0x197534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197530u;
    // 0x197534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196B90u, 0x197530u, 0x197538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197538u;
label_197538:
    // 0x197538: 0xde220030  ld          $v0, 0x30($s1)
    ctx->pc = 0x197538u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x19753c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19753cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197540: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x197540u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197544: 0xfe420220  sd          $v0, 0x220($s2)
    ctx->pc = 0x197544u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 544), GPR_U64(ctx, 2));
    // 0x197548: 0xc0663f0  jal         func_198FC0
    ctx->pc = 0x197548u;
    SET_GPR_U32(ctx, 31, 0x197550u);
    ctx->pc = 0x19754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197548u;
    // 0x19754c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FC0u, 0x197548u, 0x197550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197550u;
label_197550:
    // 0x197550: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x197550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x197554: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x197554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197558: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x197558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x19755c: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x19755cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x197560: 0xc065dcc  jal         func_197730
    ctx->pc = 0x197560u;
    SET_GPR_U32(ctx, 31, 0x197568u);
    ctx->pc = 0x197564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197560u;
    // 0x197564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197730u, 0x197560u, 0x197568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197568u;
label_197568:
    // 0x197568: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19756c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19756cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_197570:
    // 0x197570: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197574: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x197574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x197578: 0x0  nop
    ctx->pc = 0x197578u;
    // NOP
    // 0x19757c: 0x0  nop
    ctx->pc = 0x19757cu;
    // NOP
    // 0x197580: 0x0  nop
    ctx->pc = 0x197580u;
    // NOP
    // 0x197584: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x197584u;
    {
        const bool branch_taken_0x197584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197584u;
        // 0x197588: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197584) {
            ctx->pc = 0x197570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197570;
        }
    }
    ctx->pc = 0x19758Cu;
    // 0x19758c: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x19758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x197590: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x197590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x197594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x197594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197598: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x197598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x19759c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x19759cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1975a0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1975a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1975a4: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x1975a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x1975a8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1975a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1975ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1975acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1975b0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1975b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1975b4:
    // 0x1975b4: 0x1660ffcc  bnez        $s3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1975B4u;
    {
        const bool branch_taken_0x1975b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1975B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1975B4u;
        // 0x1975b8: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1975b4) {
            ctx->pc = 0x1974E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1974e8;
        }
    }
    ctx->pc = 0x1975BCu;
    // 0x1975bc: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1975BCu;
    SET_GPR_U32(ctx, 31, 0x1975C4u);
    ctx->pc = 0x1975C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975BCu;
    // 0x1975c0: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1975BCu, 0x1975C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975C4u;
label_1975c4:
    // 0x1975c4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1975C4u;
    SET_GPR_U32(ctx, 31, 0x1975CCu);
    ctx->pc = 0x1975C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975C4u;
    // 0x1975c8: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1975C4u, 0x1975CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975CCu;
label_1975cc:
    // 0x1975cc: 0x8e830094  lw          $v1, 0x94($s4)
    ctx->pc = 0x1975ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1975d0: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1975D0u;
    {
        const bool branch_taken_0x1975d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1975d0) {
            ctx->pc = 0x1975D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1975D0u;
            // 0x1975d4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197618u;
            goto label_197618;
        }
    }
    ctx->pc = 0x1975D8u;
    // 0x1975d8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1975D8u;
    SET_GPR_U32(ctx, 31, 0x1975E0u);
    ctx->pc = 0x1975DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1975D8u;
    // 0x1975dc: 0x8e840088  lw          $a0, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1975D8u, 0x1975E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1975E0u;
label_1975e0:
    // 0x1975e0: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x1975e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x1975e4: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x1975e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x1975e8: 0x8e850080  lw          $a1, 0x80($s4)
    ctx->pc = 0x1975e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
    // 0x1975ec: 0xaee30018  sw          $v1, 0x18($s7)
    ctx->pc = 0x1975ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 3));
    // 0x1975f0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1975f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1975f4: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x1975f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1975f8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1975f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1975fc: 0xae850080  sw          $a1, 0x80($s4)
    ctx->pc = 0x1975fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 5));
    // 0x197600: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x197600u;
    SET_GPR_U32(ctx, 31, 0x197608u);
    ctx->pc = 0x197604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197600u;
    // 0x197604: 0xae97008c  sw          $s7, 0x8C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x197600u, 0x197608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197608u;
label_197608:
    // 0x197608: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x197608u;
    SET_GPR_U32(ctx, 31, 0x197610u);
    ctx->pc = 0x19760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197608u;
    // 0x19760c: 0x8e840084  lw          $a0, 0x84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x197608u, 0x197610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197610u;
label_197610:
    // 0x197610: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x197610u;
    {
        const bool branch_taken_0x197610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197610) {
            ctx->pc = 0x19763Cu;
            goto label_19763c;
        }
    }
    ctx->pc = 0x197618u;
label_197618:
    // 0x197618: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x197618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x19761c: 0x0  nop
    ctx->pc = 0x19761cu;
    // NOP
label_197620:
    // 0x197620: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197624: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x197624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x197628: 0x0  nop
    ctx->pc = 0x197628u;
    // NOP
    // 0x19762c: 0x0  nop
    ctx->pc = 0x19762cu;
    // NOP
    // 0x197630: 0x0  nop
    ctx->pc = 0x197630u;
    // NOP
    // 0x197634: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x197634u;
    {
        const bool branch_taken_0x197634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197634) {
            ctx->pc = 0x197620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197620;
        }
    }
    ctx->pc = 0x19763Cu;
label_19763c:
    // 0x19763c: 0xc05dd18  jal         func_177460
    ctx->pc = 0x19763Cu;
    SET_GPR_U32(ctx, 31, 0x197644u);
    ctx->pc = 0x197640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19763Cu;
    // 0x197640: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x19763Cu, 0x197644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197644u;
label_197644:
    // 0x197644: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x197644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197648: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x197648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19764c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19764cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197650: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x197650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197654: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x197654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197658: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x197658u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19765c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x19765cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197660: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x197660u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x197664: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x197664u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197668: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x197668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19766c: 0x3e00008  jr          $ra
    ctx->pc = 0x19766Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19766Cu;
        // 0x197670: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19766Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197674u;
}
