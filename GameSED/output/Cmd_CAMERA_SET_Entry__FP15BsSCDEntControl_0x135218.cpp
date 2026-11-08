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

// Function: Cmd_CAMERA_SET_Entry__FP15BsSCDEntControl
// Address: 0x135218 - 0x135e7c
void Cmd_CAMERA_SET_Entry__FP15BsSCDEntControl_0x135218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CAMERA_SET_Entry__FP15BsSCDEntControl_0x135218");
#endif

    switch (ctx->pc) {
        case 0x135274u: goto label_135274;
        case 0x1352e0u: goto label_1352e0;
        case 0x1352ecu: goto label_1352ec;
        case 0x1352f8u: goto label_1352f8;
        case 0x135354u: goto label_135354;
        case 0x135360u: goto label_135360;
        case 0x13536cu: goto label_13536c;
        case 0x135384u: goto label_135384;
        case 0x135388u: goto label_135388;
        case 0x1353d0u: goto label_1353d0;
        case 0x135410u: goto label_135410;
        case 0x135450u: goto label_135450;
        case 0x1354bcu: goto label_1354bc;
        case 0x1354c8u: goto label_1354c8;
        case 0x1354f0u: goto label_1354f0;
        case 0x1354f8u: goto label_1354f8;
        case 0x135508u: goto label_135508;
        case 0x135510u: goto label_135510;
        case 0x135518u: goto label_135518;
        case 0x13551cu: goto label_13551c;
        case 0x135530u: goto label_135530;
        case 0x135534u: goto label_135534;
        case 0x1355b0u: goto label_1355b0;
        case 0x1355bcu: goto label_1355bc;
        case 0x1355c8u: goto label_1355c8;
        case 0x135848u: goto label_135848;
        case 0x135890u: goto label_135890;
        case 0x1358e8u: goto label_1358e8;
        case 0x135994u: goto label_135994;
        case 0x135998u: goto label_135998;
        case 0x1359b4u: goto label_1359b4;
        case 0x1359c8u: goto label_1359c8;
        case 0x1359dcu: goto label_1359dc;
        case 0x135a88u: goto label_135a88;
        case 0x135a8cu: goto label_135a8c;
        case 0x135ad0u: goto label_135ad0;
        case 0x135adcu: goto label_135adc;
        case 0x135af8u: goto label_135af8;
        case 0x135b38u: goto label_135b38;
        case 0x135b44u: goto label_135b44;
        case 0x135b58u: goto label_135b58;
        case 0x135bd8u: goto label_135bd8;
        case 0x135be4u: goto label_135be4;
        case 0x135bf0u: goto label_135bf0;
        case 0x135bf8u: goto label_135bf8;
        case 0x135c4cu: goto label_135c4c;
        case 0x135c60u: goto label_135c60;
        case 0x135c7cu: goto label_135c7c;
        case 0x135ca0u: goto label_135ca0;
        case 0x135d00u: goto label_135d00;
        case 0x135d08u: goto label_135d08;
        case 0x135d40u: goto label_135d40;
        case 0x135d80u: goto label_135d80;
        case 0x135dc0u: goto label_135dc0;
        case 0x135e4cu: goto label_135e4c;
        case 0x135e50u: goto label_135e50;
        default: break;
    }

    ctx->pc = 0x135218u;

    // 0x135218: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x135218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13521c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x13521cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x135220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x135228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x135228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13522c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x135230: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x135230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x135234: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x135234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x135238: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x135238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13523c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x13523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x135240: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x135240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x135244: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x135244u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x135248: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x135248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13524c: 0x8f868d10  lw          $a2, -0x72F0($gp)
    ctx->pc = 0x13524cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x135250: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x135250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x135254: 0x8c65b830  lw          $a1, -0x47D0($v1)
    ctx->pc = 0x135254u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x135258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x135258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13525c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x135260: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x135260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135264: 0x8c543630  lw          $s4, 0x3630($v0)
    ctx->pc = 0x135264u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x135268: 0x26700020  addiu       $s0, $s3, 0x20
    ctx->pc = 0x135268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13526c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13526Cu;
    SET_GPR_U32(ctx, 31, 0x135274u);
    ctx->pc = 0x135270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13526Cu;
    // 0x135270: 0x8cb20040  lw          $s2, 0x40($a1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13526Cu, 0x135274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135274u;
label_135274:
    // 0x135274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x135274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135278: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x135278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x13527c: 0x2c830026  sltiu       $v1, $a0, 0x26
    ctx->pc = 0x13527cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x135280: 0x106002f2  beqz        $v1, . + 4 + (0x2F2 << 2)
    ctx->pc = 0x135280u;
    {
        const bool branch_taken_0x135280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x135284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135280u;
        // 0x135284: 0x2455ffff  addiu       $s5, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135280) {
            ctx->pc = 0x135E4Cu;
            goto label_135e4c;
        }
    }
    ctx->pc = 0x135288u;
    // 0x135288: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x135288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13528c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x13528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x135290: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135294: 0x8c6365d0  lw          $v1, 0x65D0($v1)
    ctx->pc = 0x135294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26064)));
    // 0x135298: 0x600008  jr          $v1
    ctx->pc = 0x135298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1352A0u: goto label_1352a0;
            case 0x1352D8u: goto label_1352d8;
            case 0x135338u: goto label_135338;
            case 0x1353C8u: goto label_1353c8;
            case 0x135408u: goto label_135408;
            case 0x135448u: goto label_135448;
            case 0x1354A0u: goto label_1354a0;
            case 0x135570u: goto label_135570;
            case 0x1355A8u: goto label_1355a8;
            case 0x135608u: goto label_135608;
            case 0x135648u: goto label_135648;
            case 0x135680u: goto label_135680;
            case 0x1356B8u: goto label_1356b8;
            case 0x1356F8u: goto label_1356f8;
            case 0x135738u: goto label_135738;
            case 0x135778u: goto label_135778;
            case 0x1357B8u: goto label_1357b8;
            case 0x1357F8u: goto label_1357f8;
            case 0x135838u: goto label_135838;
            case 0x135880u: goto label_135880;
            case 0x1358D8u: goto label_1358d8;
            case 0x135930u: goto label_135930;
            case 0x135970u: goto label_135970;
            case 0x135A20u: goto label_135a20;
            case 0x135A58u: goto label_135a58;
            case 0x135AC8u: goto label_135ac8;
            case 0x135B30u: goto label_135b30;
            case 0x135B90u: goto label_135b90;
            case 0x135BC8u: goto label_135bc8;
            case 0x135C30u: goto label_135c30;
            case 0x135D38u: goto label_135d38;
            case 0x135D78u: goto label_135d78;
            case 0x135DB8u: goto label_135db8;
            case 0x135DF8u: goto label_135df8;
            case 0x135E38u: goto label_135e38;
            case 0x135E4Cu: goto label_135e4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135298u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1352A0u;
label_1352a0:
    // 0x1352a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1352a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1352a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1352a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1352a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1352ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1352acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1352b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1352b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1352b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1352b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1352b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1352b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1352bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1352bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1352c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1352c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1352c4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1352c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1352c8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1352c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1352cc: 0x80506c8  j           func_141B20
    ctx->pc = 0x1352CCu;
    ctx->pc = 0x1352D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352CCu;
    // 0x1352d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141B20u;
    ApCameraMotionStop__FP7WcActor_0x141b20(rdram, ctx, runtime); return;
    ctx->pc = 0x1352D4u;
    // 0x1352d4: 0x0  nop
    ctx->pc = 0x1352d4u;
    // NOP
label_1352d8:
    // 0x1352d8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1352D8u;
    SET_GPR_U32(ctx, 31, 0x1352E0u);
    ctx->pc = 0x1352DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352D8u;
    // 0x1352dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1352D8u, 0x1352E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352E0u;
label_1352e0:
    // 0x1352e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1352e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352e4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1352E4u;
    SET_GPR_U32(ctx, 31, 0x1352ECu);
    ctx->pc = 0x1352E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352E4u;
    // 0x1352e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1352E4u, 0x1352ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352ECu;
label_1352ec:
    // 0x1352ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1352ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352f0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1352F0u;
    SET_GPR_U32(ctx, 31, 0x1352F8u);
    ctx->pc = 0x1352F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352F0u;
    // 0x1352f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1352F0u, 0x1352F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352F8u;
label_1352f8:
    // 0x1352f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1352f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1352fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135300: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135304: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x135304u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x135308: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13530c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13530cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135318: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13531c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13531cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135320: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135324: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135324u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135328: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135328u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13532c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13532cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135330: 0x805087a  j           func_1421E8
    ctx->pc = 0x135330u;
    ctx->pc = 0x135334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135330u;
    // 0x135334: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421E8u;
    ApCMTraceSetViewParameter__FP18ApCMTraceParameterffi_0x1421e8(rdram, ctx, runtime); return;
    ctx->pc = 0x135338u;
label_135338:
    // 0x135338: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13533c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13533cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x135340: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135344: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x135344u;
    {
        const bool branch_taken_0x135344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x135348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135344u;
        // 0x135348: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135344) {
            ctx->pc = 0x135388u;
            goto label_135388;
        }
    }
    ctx->pc = 0x13534Cu;
    // 0x13534c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x13534Cu;
    SET_GPR_U32(ctx, 31, 0x135354u);
    ctx->pc = 0x135350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13534Cu;
    // 0x135350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x13534Cu, 0x135354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135354u;
label_135354:
    // 0x135354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135358: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135358u;
    SET_GPR_U32(ctx, 31, 0x135360u);
    ctx->pc = 0x13535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135358u;
    // 0x13535c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135358u, 0x135360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135360u;
label_135360:
    // 0x135360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135364: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135364u;
    SET_GPR_U32(ctx, 31, 0x13536Cu);
    ctx->pc = 0x135368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135364u;
    // 0x135368: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135364u, 0x13536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13536Cu;
label_13536c:
    // 0x13536c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x13536cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x135370: 0x248410c0  addiu       $a0, $a0, 0x10C0
    ctx->pc = 0x135370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    // 0x135374: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x135374u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135378: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x135378u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13537c: 0xc05087a  jal         func_1421E8
    ctx->pc = 0x13537Cu;
    SET_GPR_U32(ctx, 31, 0x135384u);
    ctx->pc = 0x135380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13537Cu;
    // 0x135380: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421E8u, 0x13537Cu, 0x135384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135384u;
label_135384:
    // 0x135384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x135384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135388:
    // 0x135388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13538c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13538cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135390: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135394: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13539c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13539cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1353a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1353a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1353a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1353a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1353a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1353ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1353acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1353b0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1353b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1353b4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1353b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1353b8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1353b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1353bc: 0x8050890  j           func_142240
    ctx->pc = 0x1353BCu;
    ctx->pc = 0x1353C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353BCu;
    // 0x1353c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142240u;
    ApCameraSetTraceMode__FP7WcActorT0P18ApCMTraceParameterb_0x142240(rdram, ctx, runtime); return;
    ctx->pc = 0x1353C4u;
    // 0x1353c4: 0x0  nop
    ctx->pc = 0x1353c4u;
    // NOP
label_1353c8:
    // 0x1353c8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1353C8u;
    SET_GPR_U32(ctx, 31, 0x1353D0u);
    ctx->pc = 0x1353CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353C8u;
    // 0x1353cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1353C8u, 0x1353D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353D0u;
label_1353d0:
    // 0x1353d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1353d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1353d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1353d8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1353d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1353dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1353dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1353e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1353e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1353e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1353e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1353e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1353e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1353ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1353ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1353f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1353f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1353f4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1353f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1353f8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1353f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1353fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1353fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135400: 0x8050930  j           func_1424C0
    ctx->pc = 0x135400u;
    ctx->pc = 0x135404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135400u;
    // 0x135404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1424C0u;
    ApCMTraceSetHeightLimit__FP7WcActorf_0x1424c0(rdram, ctx, runtime); return;
    ctx->pc = 0x135408u;
label_135408:
    // 0x135408: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135408u;
    SET_GPR_U32(ctx, 31, 0x135410u);
    ctx->pc = 0x13540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135408u;
    // 0x13540c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135408u, 0x135410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135410u;
label_135410:
    // 0x135410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135418: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x135418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x13541c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13541cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135424: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135424u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135428: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135428u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13542c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13542cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135430: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135430u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135434: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135438: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13543c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135440: 0x805095c  j           func_142570
    ctx->pc = 0x135440u;
    ctx->pc = 0x135444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135440u;
    // 0x135444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142570u;
    ApCMTraceSetSideOffset__FP7WcActorf_0x142570(rdram, ctx, runtime); return;
    ctx->pc = 0x135448u;
label_135448:
    // 0x135448: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135448u;
    SET_GPR_U32(ctx, 31, 0x135450u);
    ctx->pc = 0x13544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135448u;
    // 0x13544c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135448u, 0x135450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135450u;
label_135450:
    // 0x135450: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135454: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x135454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x135458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13545c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x13545cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135468: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x135468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
    // 0x13546c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13546cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135470: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135474: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x135474u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x135478: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13547c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13547cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135480: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135480u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135484: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135484u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135488: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13548c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135490: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135494: 0x8050978  j           func_1425E0
    ctx->pc = 0x135494u;
    ctx->pc = 0x135498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135494u;
    // 0x135498: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1425E0u;
    ApCMTraceSetRollOffset__FP7WcActorib_0x1425e0(rdram, ctx, runtime); return;
    ctx->pc = 0x13549Cu;
    // 0x13549c: 0x0  nop
    ctx->pc = 0x13549cu;
    // NOP
label_1354a0:
    // 0x1354a0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1354a4: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x1354a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x1354a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1354a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1354ac: 0x10500021  beq         $v0, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1354ACu;
    {
        const bool branch_taken_0x1354ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1354B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354ACu;
        // 0x1354b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354ac) {
            ctx->pc = 0x135534u;
            goto label_135534;
        }
    }
    ctx->pc = 0x1354B4u;
    // 0x1354b4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1354B4u;
    SET_GPR_U32(ctx, 31, 0x1354BCu);
    ctx->pc = 0x1354B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354B4u;
    // 0x1354b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1354B4u, 0x1354BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354BCu;
label_1354bc:
    // 0x1354bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1354bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354c0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1354C0u;
    SET_GPR_U32(ctx, 31, 0x1354C8u);
    ctx->pc = 0x1354C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354C0u;
    // 0x1354c4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1354C0u, 0x1354C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354C8u;
label_1354c8:
    // 0x1354c8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1354c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1354cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1354ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1354d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1354d4: 0x10700011  beq         $v1, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1354D4u;
    {
        const bool branch_taken_0x1354d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1354D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354D4u;
        // 0x1354d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354d4) {
            ctx->pc = 0x13551Cu;
            goto label_13551c;
        }
    }
    ctx->pc = 0x1354DCu;
    // 0x1354dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1354dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1354e0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1354E0u;
    {
        const bool branch_taken_0x1354e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1354e0) {
            ctx->pc = 0x135510u;
            goto label_135510;
        }
    }
    ctx->pc = 0x1354E8u;
    // 0x1354e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1354E8u;
    SET_GPR_U32(ctx, 31, 0x1354F0u);
    ctx->pc = 0x1354ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354E8u;
    // 0x1354ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1354E8u, 0x1354F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354F0u;
label_1354f0:
    // 0x1354f0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1354F0u;
    SET_GPR_U32(ctx, 31, 0x1354F8u);
    ctx->pc = 0x1354F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354F0u;
    // 0x1354f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1354F0u, 0x1354F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354F8u;
label_1354f8:
    // 0x1354f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1354f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1354fc: 0x4600a347  neg.s       $f13, $f20
    ctx->pc = 0x1354fcu;
    ctx->f[13] = FPU_NEG_S(ctx->f[20]);
    // 0x135500: 0xc067a02  jal         func_19E808
    ctx->pc = 0x135500u;
    SET_GPR_U32(ctx, 31, 0x135508u);
    ctx->pc = 0x135504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135500u;
    // 0x135504: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x135500u, 0x135508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135508u;
label_135508:
    // 0x135508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135508u;
    {
        const bool branch_taken_0x135508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135508u;
        // 0x13550c: 0x2022823  subu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135508) {
            ctx->pc = 0x13551Cu;
            goto label_13551c;
        }
    }
    ctx->pc = 0x135510u;
label_135510:
    // 0x135510: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135510u;
    SET_GPR_U32(ctx, 31, 0x135518u);
    ctx->pc = 0x135514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135510u;
    // 0x135514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135510u, 0x135518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135518u;
label_135518:
    // 0x135518: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13551c:
    // 0x13551c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x13551cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x135520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x135520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135524: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x135524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x135528: 0xc05087a  jal         func_1421E8
    ctx->pc = 0x135528u;
    SET_GPR_U32(ctx, 31, 0x135530u);
    ctx->pc = 0x13552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135528u;
    // 0x13552c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421E8u, 0x135528u, 0x135530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135530u;
label_135530:
    // 0x135530: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x135530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135534:
    // 0x135534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13553c: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x13553cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x135540: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x135540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135548: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13554c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13554cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135550: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135550u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135554: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135554u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135558: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135558u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13555c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13555cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135560: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135564: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135568: 0x8050890  j           func_142240
    ctx->pc = 0x135568u;
    ctx->pc = 0x13556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135568u;
    // 0x13556c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142240u;
    ApCameraSetTraceMode__FP7WcActorT0P18ApCMTraceParameterb_0x142240(rdram, ctx, runtime); return;
    ctx->pc = 0x135570u;
label_135570:
    // 0x135570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135574: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13557c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13557cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135584: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135588: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13558c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13558cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135590: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135594: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135598: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13559c: 0x80508c6  j           func_142318
    ctx->pc = 0x13559Cu;
    ctx->pc = 0x1355A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13559Cu;
    // 0x1355a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142318u;
    ApCameraTurretTraceSet__FP7WcActor_0x142318(rdram, ctx, runtime); return;
    ctx->pc = 0x1355A4u;
    // 0x1355a4: 0x0  nop
    ctx->pc = 0x1355a4u;
    // NOP
label_1355a8:
    // 0x1355a8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1355A8u;
    SET_GPR_U32(ctx, 31, 0x1355B0u);
    ctx->pc = 0x1355ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355A8u;
    // 0x1355ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1355A8u, 0x1355B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355B0u;
label_1355b0:
    // 0x1355b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1355b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355b4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1355B4u;
    SET_GPR_U32(ctx, 31, 0x1355BCu);
    ctx->pc = 0x1355B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355B4u;
    // 0x1355b8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1355B4u, 0x1355BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355BCu;
label_1355bc:
    // 0x1355bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1355bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355c0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1355C0u;
    SET_GPR_U32(ctx, 31, 0x1355C8u);
    ctx->pc = 0x1355C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355C0u;
    // 0x1355c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1355C0u, 0x1355C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355C8u;
label_1355c8:
    // 0x1355c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1355c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355cc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1355ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1355d0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1355d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1355d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1355d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1355d8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1355d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1355dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1355dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1355e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1355e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1355e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1355e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1355e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1355ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1355ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1355f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1355f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1355f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1355f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1355f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1355f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1355fc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1355fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135600: 0x8050900  j           func_142400
    ctx->pc = 0x135600u;
    ctx->pc = 0x135604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135600u;
    // 0x135604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142400u;
    ApCameraSetRolling__FP7WcActorffi_0x142400(rdram, ctx, runtime); return;
    ctx->pc = 0x135608u;
label_135608:
    // 0x135608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13560c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13560cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135610: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135614: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135614u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13561c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13561cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135624: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x135624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135628: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13562c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13562cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135630: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135630u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135634: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135638: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13563c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135640: 0x80508ae  j           func_1422B8
    ctx->pc = 0x135640u;
    ctx->pc = 0x135644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135640u;
    // 0x135644: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1422B8u;
    ApCameraSetTraceAngle__FP7WcActorT0P18ApCMTraceParameterb_0x1422b8(rdram, ctx, runtime); return;
    ctx->pc = 0x135648u;
label_135648:
    // 0x135648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13564c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13564cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13565c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13565cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135660: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135664: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135664u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135668: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13566c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135670: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135674: 0x805099e  j           func_142678
    ctx->pc = 0x135674u;
    ctx->pc = 0x135678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135674u;
    // 0x135678: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142678u;
    ApCMTraceNoAdjust__FP7WcActor_0x142678(rdram, ctx, runtime); return;
    ctx->pc = 0x13567Cu;
    // 0x13567c: 0x0  nop
    ctx->pc = 0x13567cu;
    // NOP
label_135680:
    // 0x135680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135684: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13568c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13568cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135690: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135694: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135694u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135698: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135698u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13569c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13569cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1356a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1356a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1356a4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1356a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1356a8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1356a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1356ac: 0x80509b6  j           func_1426D8
    ctx->pc = 0x1356ACu;
    ctx->pc = 0x1356B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356ACu;
    // 0x1356b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1426D8u;
    ApCMTraceLowAngleLimit__FP7WcActor_0x1426d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1356B4u;
    // 0x1356b4: 0x0  nop
    ctx->pc = 0x1356b4u;
    // NOP
label_1356b8:
    // 0x1356b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1356b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1356bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1356c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1356c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1356c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1356c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1356c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1356ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1356d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1356d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1356d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1356d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1356d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1356dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1356dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1356e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1356e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1356e4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1356e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1356e8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1356e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1356ec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1356ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1356f0: 0x80502ce  j           func_140B38
    ctx->pc = 0x1356F0u;
    ctx->pc = 0x1356F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356F0u;
    // 0x1356f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140B38u;
    ApCameraSetCockpitView__FP7WcActorT0P9FVector32P9DVAngle32_0x140b38(rdram, ctx, runtime); return;
    ctx->pc = 0x1356F8u;
label_1356f8:
    // 0x1356f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1356f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1356fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135700: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135704: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135708: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x13570c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13570cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135718: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13571c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13571cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135720: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135720u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135724: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135728: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13572c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135730: 0x80502ce  j           func_140B38
    ctx->pc = 0x135730u;
    ctx->pc = 0x135734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135730u;
    // 0x135734: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140B38u;
    ApCameraSetCockpitView__FP7WcActorT0P9FVector32P9DVAngle32_0x140b38(rdram, ctx, runtime); return;
    ctx->pc = 0x135738u;
label_135738:
    // 0x135738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13573c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13573cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135740: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135744: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135748: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x13574c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13574cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135758: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13575c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13575cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135760: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135760u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135764: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135768: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13576c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135770: 0x805030e  j           func_140C38
    ctx->pc = 0x135770u;
    ctx->pc = 0x135774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135770u;
    // 0x135774: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140C38u;
    ApCameraSetTurretView__FP7WcActorT0P9FVector32P9DVAngle32_0x140c38(rdram, ctx, runtime); return;
    ctx->pc = 0x135778u;
label_135778:
    // 0x135778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13577c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13577cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135780: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x135780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135784: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135788: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13578c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13578cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135794: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135798: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13579c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13579cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1357a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1357a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1357a4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1357a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1357a8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1357a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1357ac: 0x804feb0  j           func_13FAC0
    ctx->pc = 0x1357ACu;
    ctx->pc = 0x1357B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357ACu;
    // 0x1357b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAC0u;
    ApCameraSetPositionFree__FP7WcActorP9FVector32P9DVAngle32_0x13fac0(rdram, ctx, runtime); return;
    ctx->pc = 0x1357B4u;
    // 0x1357b4: 0x0  nop
    ctx->pc = 0x1357b4u;
    // NOP
label_1357b8:
    // 0x1357b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1357b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1357bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1357c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1357c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1357c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1357c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1357c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1357ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1357d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1357d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1357d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1357d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1357d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1357d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1357dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1357dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1357e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1357e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1357e4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1357e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1357e8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1357e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1357ec: 0x804fefa  j           func_13FBE8
    ctx->pc = 0x1357ECu;
    ctx->pc = 0x1357F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357ECu;
    // 0x1357f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FBE8u;
    ApCameraSetPositionWarp__FP7WcActorP9FVector32P9DVAngle32_0x13fbe8(rdram, ctx, runtime); return;
    ctx->pc = 0x1357F4u;
    // 0x1357f4: 0x0  nop
    ctx->pc = 0x1357f4u;
    // NOP
label_1357f8:
    // 0x1357f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1357f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1357fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135804: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135808: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13580c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13580cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135818: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135818u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13581c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13581cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135820: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135824: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135828: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13582c: 0x8050764  j           func_141D90
    ctx->pc = 0x13582Cu;
    ctx->pc = 0x135830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13582Cu;
    // 0x135830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141D90u;
    ApCameraSetActorFixed__FP7WcActorT0P9FVector32_0x141d90(rdram, ctx, runtime); return;
    ctx->pc = 0x135834u;
    // 0x135834: 0x0  nop
    ctx->pc = 0x135834u;
    // NOP
label_135838:
    // 0x135838: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13583c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13583cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135840: 0xc050764  jal         func_141D90
    ctx->pc = 0x135840u;
    SET_GPR_U32(ctx, 31, 0x135848u);
    ctx->pc = 0x135844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135840u;
    // 0x135844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141D90u, 0x135840u, 0x135848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135848u;
label_135848:
    // 0x135848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13584c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13584cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135858: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13585c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13585cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135860: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135864: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135864u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135868: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13586c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135870: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135874: 0x804ff38  j           func_13FCE0
    ctx->pc = 0x135874u;
    ctx->pc = 0x135878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135874u;
    // 0x135878: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    ApCameraZeroRate__FP7WcActor_0x13fce0(rdram, ctx, runtime); return;
    ctx->pc = 0x13587Cu;
    // 0x13587c: 0x0  nop
    ctx->pc = 0x13587cu;
    // NOP
label_135880:
    // 0x135880: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x135884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135888: 0xc050764  jal         func_141D90
    ctx->pc = 0x135888u;
    SET_GPR_U32(ctx, 31, 0x135890u);
    ctx->pc = 0x13588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135888u;
    // 0x13588c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141D90u, 0x135888u, 0x135890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135890u;
label_135890:
    // 0x135890: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135894: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x135894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x135898: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13589c: 0x1064016c  beq         $v1, $a0, . + 4 + (0x16C << 2)
    ctx->pc = 0x13589Cu;
    {
        const bool branch_taken_0x13589c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1358A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13589Cu;
        // 0x1358a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13589c) {
            ctx->pc = 0x135E50u;
            goto label_135e50;
        }
    }
    ctx->pc = 0x1358A4u;
    // 0x1358a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1358a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1358a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1358ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1358acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1358b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1358b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1358b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1358b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1358b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1358b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1358bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1358bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1358c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1358c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1358c4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1358c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1358c8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1358c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1358cc: 0x804ff38  j           func_13FCE0
    ctx->pc = 0x1358CCu;
    ctx->pc = 0x1358D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1358CCu;
    // 0x1358d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    ApCameraZeroRate__FP7WcActor_0x13fce0(rdram, ctx, runtime); return;
    ctx->pc = 0x1358D4u;
    // 0x1358d4: 0x0  nop
    ctx->pc = 0x1358d4u;
    // NOP
label_1358d8:
    // 0x1358d8: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x1358d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x1358dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1358dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358e0: 0xc04fe14  jal         func_13F850
    ctx->pc = 0x1358E0u;
    SET_GPR_U32(ctx, 31, 0x1358E8u);
    ctx->pc = 0x1358E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1358E0u;
    // 0x1358e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F850u, 0x1358E0u, 0x1358E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1358E8u;
label_1358e8:
    // 0x1358e8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1358e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1358ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1358ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1358f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1358f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1358f4: 0x10640156  beq         $v1, $a0, . + 4 + (0x156 << 2)
    ctx->pc = 0x1358F4u;
    {
        const bool branch_taken_0x1358f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1358F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1358F4u;
        // 0x1358f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1358f4) {
            ctx->pc = 0x135E50u;
            goto label_135e50;
        }
    }
    ctx->pc = 0x1358FCu;
    // 0x1358fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1358fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135900: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135908: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13590c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13590cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135910: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135910u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135914: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135914u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135918: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13591c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135920: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135924: 0x804ff38  j           func_13FCE0
    ctx->pc = 0x135924u;
    ctx->pc = 0x135928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135924u;
    // 0x135928: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    ApCameraZeroRate__FP7WcActor_0x13fce0(rdram, ctx, runtime); return;
    ctx->pc = 0x13592Cu;
    // 0x13592c: 0x0  nop
    ctx->pc = 0x13592cu;
    // NOP
label_135930:
    // 0x135930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135934: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135938: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13593c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13593cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135940: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x135944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13594c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13594cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135950: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135954: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135954u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135958: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13595c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135960: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135964: 0x804fe14  j           func_13F850
    ctx->pc = 0x135964u;
    ctx->pc = 0x135968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135964u;
    // 0x135968: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F850u;
    ApCameraSetActor2Target__FP7WcActorT0P9FVector32_0x13f850(rdram, ctx, runtime); return;
    ctx->pc = 0x13596Cu;
    // 0x13596c: 0x0  nop
    ctx->pc = 0x13596cu;
    // NOP
label_135970:
    // 0x135970: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135974: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x135974u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x135978: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x135978u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13597c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13597cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135980: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x135980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135984: 0x10540004  beq         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x135984u;
    {
        const bool branch_taken_0x135984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x135988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135984u;
        // 0x135988: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135984) {
            ctx->pc = 0x135998u;
            goto label_135998;
        }
    }
    ctx->pc = 0x13598Cu;
    // 0x13598c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13598Cu;
    SET_GPR_U32(ctx, 31, 0x135994u);
    ctx->pc = 0x135990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13598Cu;
    // 0x135990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13598Cu, 0x135994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135994u;
label_135994:
    // 0x135994: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x135994u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135998:
    // 0x135998: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13599c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1359a0: 0x10740006  beq         $v1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1359A0u;
    {
        const bool branch_taken_0x1359a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x1359A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359A0u;
        // 0x1359a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1359a0) {
            ctx->pc = 0x1359BCu;
            goto label_1359bc;
        }
    }
    ctx->pc = 0x1359A8u;
    // 0x1359a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1359a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359ac: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x1359ACu;
    SET_GPR_U32(ctx, 31, 0x1359B4u);
    ctx->pc = 0x1359B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359ACu;
    // 0x1359b0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1359ACu, 0x1359B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359B4u;
label_1359b4:
    // 0x1359b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1359b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1359b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1359bc:
    // 0x1359bc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1359bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359c0: 0xc04fe64  jal         func_13F990
    ctx->pc = 0x1359C0u;
    SET_GPR_U32(ctx, 31, 0x1359C8u);
    ctx->pc = 0x1359C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359C0u;
    // 0x1359c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F990u, 0x1359C0u, 0x1359C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359C8u;
label_1359c8:
    // 0x1359c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1359c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1359cc: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1359CCu;
    {
        const bool branch_taken_0x1359cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x1359cc) {
            ctx->pc = 0x1359DCu;
            goto label_1359dc;
        }
    }
    ctx->pc = 0x1359D4u;
    // 0x1359d4: 0xc04ff38  jal         func_13FCE0
    ctx->pc = 0x1359D4u;
    SET_GPR_U32(ctx, 31, 0x1359DCu);
    ctx->pc = 0x1359D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359D4u;
    // 0x1359d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FCE0u, 0x1359D4u, 0x1359DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359DCu;
label_1359dc:
    // 0x1359dc: 0x5a00011c  blezl       $s0, . + 4 + (0x11C << 2)
    ctx->pc = 0x1359DCu;
    {
        const bool branch_taken_0x1359dc = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1359dc) {
            ctx->pc = 0x1359E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1359DCu;
            // 0x1359e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135E50u;
            goto label_135e50;
        }
    }
    ctx->pc = 0x1359E4u;
    // 0x1359e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1359e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1359e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1359ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1359ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1359f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1359f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1359f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1359f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1359fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1359fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135a00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135a00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135a04: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135a04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135a08: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135a0c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135a10: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135a14: 0x8050838  j           func_1420E0
    ctx->pc = 0x135A14u;
    ctx->pc = 0x135A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A14u;
    // 0x135a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1420E0u;
    ApCameraChangeRotSpeed__FP7WcActori_0x1420e0(rdram, ctx, runtime); return;
    ctx->pc = 0x135A1Cu;
    // 0x135a1c: 0x0  nop
    ctx->pc = 0x135a1cu;
    // NOP
label_135a20:
    // 0x135a20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135a30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135a34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135a34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135a38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135a38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135a3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135a3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135a40: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135a44: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135a48: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135a4c: 0x8050780  j           func_141E00
    ctx->pc = 0x135A4Cu;
    ctx->pc = 0x135A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A4Cu;
    // 0x135a50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E00u;
    ApCameraResetReffer__FP7WcActor_0x141e00(rdram, ctx, runtime); return;
    ctx->pc = 0x135A54u;
    // 0x135a54: 0x0  nop
    ctx->pc = 0x135a54u;
    // NOP
label_135a58:
    // 0x135a58: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135a5c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x135a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x135a60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135a64: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x135A64u;
    {
        const bool branch_taken_0x135a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x135A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A64u;
        // 0x135a68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a64) {
            ctx->pc = 0x135A8Cu;
            goto label_135a8c;
        }
    }
    ctx->pc = 0x135A6Cu;
    // 0x135a6c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x135a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x135a70: 0x26101120  addiu       $s0, $s0, 0x1120
    ctx->pc = 0x135a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4384));
    // 0x135a74: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x135a74u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x261120u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x261120u, _value); } while (0);
    // 0x135a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a80: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x135A80u;
    SET_GPR_U32(ctx, 31, 0x135A88u);
    ctx->pc = 0x135A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A80u;
    // 0x135a84: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x135A80u, 0x135A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A88u;
label_135a88:
    // 0x135a88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135a8c:
    // 0x135a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135a94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x135a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135a98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135a98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135aa4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135aa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135aa8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135aa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135aac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135aacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135ab0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135ab4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135ab8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135abc: 0x8050794  j           func_141E50
    ctx->pc = 0x135ABCu;
    ctx->pc = 0x135AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135ABCu;
    // 0x135ac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141E50u;
    ApCameraSetPositionRefer__FP7WcActorP9FVector32T1_0x141e50(rdram, ctx, runtime); return;
    ctx->pc = 0x135AC4u;
    // 0x135ac4: 0x0  nop
    ctx->pc = 0x135ac4u;
    // NOP
label_135ac8:
    // 0x135ac8: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135AC8u;
    SET_GPR_U32(ctx, 31, 0x135AD0u);
    ctx->pc = 0x135ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AC8u;
    // 0x135acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135AC8u, 0x135AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AD0u;
label_135ad0:
    // 0x135ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ad4: 0xc050820  jal         func_142080
    ctx->pc = 0x135AD4u;
    SET_GPR_U32(ctx, 31, 0x135ADCu);
    ctx->pc = 0x135AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AD4u;
    // 0x135ad8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x142080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142080u, 0x135AD4u, 0x135ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135ADCu;
label_135adc:
    // 0x135adc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135ae0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x135ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x135ae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135ae8: 0x106400d9  beq         $v1, $a0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x135AE8u;
    {
        const bool branch_taken_0x135ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x135AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AE8u;
        // 0x135aec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ae8) {
            ctx->pc = 0x135E50u;
            goto label_135e50;
        }
    }
    ctx->pc = 0x135AF0u;
    // 0x135af0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135AF0u;
    SET_GPR_U32(ctx, 31, 0x135AF8u);
    ctx->pc = 0x135AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AF0u;
    // 0x135af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135AF0u, 0x135AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AF8u;
label_135af8:
    // 0x135af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135b00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x135b00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x135b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135b08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135b0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135b10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135b10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135b14: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135b14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135b18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135b18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135b1c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135b20: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135b24: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135b28: 0x8050808  j           func_142020
    ctx->pc = 0x135B28u;
    ctx->pc = 0x135B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B28u;
    // 0x135b2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142020u;
    ApCameraChangeMoveRate__FP7WcActorf_0x142020(rdram, ctx, runtime); return;
    ctx->pc = 0x135B30u;
label_135b30:
    // 0x135b30: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135B30u;
    SET_GPR_U32(ctx, 31, 0x135B38u);
    ctx->pc = 0x135B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B30u;
    // 0x135b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135B30u, 0x135B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B38u;
label_135b38:
    // 0x135b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b3c: 0xc050838  jal         func_1420E0
    ctx->pc = 0x135B3Cu;
    SET_GPR_U32(ctx, 31, 0x135B44u);
    ctx->pc = 0x135B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B3Cu;
    // 0x135b40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1420E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1420E0u, 0x135B3Cu, 0x135B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B44u;
label_135b44:
    // 0x135b44: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x135b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x135b48: 0x144000c1  bnez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x135B48u;
    {
        const bool branch_taken_0x135b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B48u;
        // 0x135b4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b48) {
            ctx->pc = 0x135E50u;
            goto label_135e50;
        }
    }
    ctx->pc = 0x135B50u;
    // 0x135b50: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135B50u;
    SET_GPR_U32(ctx, 31, 0x135B58u);
    ctx->pc = 0x135B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B50u;
    // 0x135b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135B50u, 0x135B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B58u;
label_135b58:
    // 0x135b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135b60: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x135b60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x135b64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135b6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135b70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135b74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135b74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135b78: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135b78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135b7c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135b80: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135b84: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135b88: 0x8050850  j           func_142140
    ctx->pc = 0x135B88u;
    ctx->pc = 0x135B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B88u;
    // 0x135b8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142140u;
    ApCameraChangeRotRate__FP7WcActorf_0x142140(rdram, ctx, runtime); return;
    ctx->pc = 0x135B90u;
label_135b90:
    // 0x135b90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135ba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135ba4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135ba8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135ba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135bac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135bacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135bb0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135bb4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135bb8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135bbc: 0x804ff38  j           func_13FCE0
    ctx->pc = 0x135BBCu;
    ctx->pc = 0x135BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BBCu;
    // 0x135bc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    ApCameraZeroRate__FP7WcActor_0x13fce0(rdram, ctx, runtime); return;
    ctx->pc = 0x135BC4u;
    // 0x135bc4: 0x0  nop
    ctx->pc = 0x135bc4u;
    // NOP
label_135bc8:
    // 0x135bc8: 0x5aa00009  blezl       $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x135BC8u;
    {
        const bool branch_taken_0x135bc8 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x135bc8) {
            ctx->pc = 0x135BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135BC8u;
            // 0x135bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135BF0u;
            goto label_135bf0;
        }
    }
    ctx->pc = 0x135BD0u;
    // 0x135bd0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135BD0u;
    SET_GPR_U32(ctx, 31, 0x135BD8u);
    ctx->pc = 0x135BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BD0u;
    // 0x135bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135BD0u, 0x135BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BD8u;
label_135bd8:
    // 0x135bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135bdc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135BDCu;
    SET_GPR_U32(ctx, 31, 0x135BE4u);
    ctx->pc = 0x135BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135BDCu;
    // 0x135be0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135BDCu, 0x135BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135BE4u;
label_135be4:
    // 0x135be4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135BE4u;
    {
        const bool branch_taken_0x135be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135BE4u;
        // 0x135be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135be4) {
            ctx->pc = 0x135BF8u;
            goto label_135bf8;
        }
    }
    ctx->pc = 0x135BECu;
    // 0x135bec: 0x0  nop
    ctx->pc = 0x135becu;
    // NOP
label_135bf0:
    // 0x135bf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135bf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135bf4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x135bf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_135bf8:
    // 0x135bf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135bfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x135bfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x135c00: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135c08: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x135c08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x135c0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135c10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135c10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135c14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135c14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135c18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135c18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135c1c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135c1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135c20: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135c24: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135c28: 0x804fc56  j           func_13F158
    ctx->pc = 0x135C28u;
    ctx->pc = 0x135C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C28u;
    // 0x135c2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F158u;
    ApCameraZoomSetup__FP7WcActorff_0x13f158(rdram, ctx, runtime); return;
    ctx->pc = 0x135C30u;
label_135c30:
    // 0x135c30: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135c34: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x135c34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x135c38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x135c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135c3c: 0x50530032  beql        $v0, $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x135C3Cu;
    {
        const bool branch_taken_0x135c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x135c3c) {
            ctx->pc = 0x135C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135C3Cu;
            // 0x135c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135D08u;
            goto label_135d08;
        }
    }
    ctx->pc = 0x135C44u;
    // 0x135c44: 0xc0506aa  jal         func_141AA8
    ctx->pc = 0x135C44u;
    SET_GPR_U32(ctx, 31, 0x135C4Cu);
    ctx->pc = 0x135C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C44u;
    // 0x135c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141AA8u, 0x135C44u, 0x135C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C4Cu;
label_135c4c:
    // 0x135c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c54: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135c58: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x135C58u;
    SET_GPR_U32(ctx, 31, 0x135C60u);
    ctx->pc = 0x135C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C58u;
    // 0x135c5c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x135C58u, 0x135C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C60u;
label_135c60:
    // 0x135c60: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
    ctx->pc = 0x135C60u;
    {
        const bool branch_taken_0x135c60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x135C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C60u;
        // 0x135c64: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c60) {
            ctx->pc = 0x135E4Cu;
            goto label_135e4c;
        }
    }
    ctx->pc = 0x135C68u;
    // 0x135c68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x135c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135c6c: 0x5642000c  bnel        $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x135C6Cu;
    {
        const bool branch_taken_0x135c6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x135c6c) {
            ctx->pc = 0x135C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135C6Cu;
            // 0x135c70: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135CA0u;
            goto label_135ca0;
        }
    }
    ctx->pc = 0x135C74u;
    // 0x135c74: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x135C74u;
    SET_GPR_U32(ctx, 31, 0x135C7Cu);
    ctx->pc = 0x135C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C74u;
    // 0x135c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x135C74u, 0x135C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C7Cu;
label_135c7c:
    // 0x135c7c: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x135c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135c80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x135c80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x135c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x135c88: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x135c88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x135c8c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x135c8cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x135c90: 0x48242800  qmfc2.ni    $a0, $vf5
    ctx->pc = 0x135c90u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x135c94: 0x42000  sll         $a0, $a0, 0
    ctx->pc = 0x135c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x135c98: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x135C98u;
    {
        const bool branch_taken_0x135c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C98u;
        // 0x135c9c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c98) {
            ctx->pc = 0x135E4Cu;
            goto label_135e4c;
        }
    }
    ctx->pc = 0x135CA0u;
label_135ca0:
    // 0x135ca0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135ca4: 0x1073000e  beq         $v1, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x135CA4u;
    {
        const bool branch_taken_0x135ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x135CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CA4u;
        // 0x135ca8: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ca4) {
            ctx->pc = 0x135CE0u;
            goto label_135ce0;
        }
    }
    ctx->pc = 0x135CACu;
    // 0x135cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135cb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135cbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135cc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135cc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135cc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135cc8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135cc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135ccc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135cd0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135cd4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135cd8: 0x80506fc  j           func_141BF0
    ctx->pc = 0x135CD8u;
    ctx->pc = 0x135CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CD8u;
    // 0x135cdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141BF0u;
    ApCMZoomSetStandard__FP9ApcCameraf_0x141bf0(rdram, ctx, runtime); return;
    ctx->pc = 0x135CE0u;
label_135ce0:
    // 0x135ce0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x135ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x135ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135ce8: 0xe6010154  swc1        $f1, 0x154($s0)
    ctx->pc = 0x135ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x135cec: 0x0  nop
    ctx->pc = 0x135cecu;
    // NOP
    // 0x135cf0: 0x0  nop
    ctx->pc = 0x135cf0u;
    // NOP
    // 0x135cf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x135cf4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x135cf8: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x135CF8u;
    SET_GPR_U32(ctx, 31, 0x135D00u);
    ctx->pc = 0x135CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CF8u;
    // 0x135cfc: 0xe600015c  swc1        $f0, 0x15C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x135CF8u, 0x135D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D00u;
label_135d00:
    // 0x135d00: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x135D00u;
    {
        const bool branch_taken_0x135d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D00u;
        // 0x135d04: 0xae020158  sw          $v0, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d00) {
            ctx->pc = 0x135E4Cu;
            goto label_135e4c;
        }
    }
    ctx->pc = 0x135D08u;
label_135d08:
    // 0x135d08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135d10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135d14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135d18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135d18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135d1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135d1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135d20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135d20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135d24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135d28: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135d2c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135d30: 0x804fca4  j           func_13F290
    ctx->pc = 0x135D30u;
    ctx->pc = 0x135D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D30u;
    // 0x135d34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F290u;
    ApCameraZoomReset__FP7WcActor_0x13f290(rdram, ctx, runtime); return;
    ctx->pc = 0x135D38u;
label_135d38:
    // 0x135d38: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135D38u;
    SET_GPR_U32(ctx, 31, 0x135D40u);
    ctx->pc = 0x135D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D38u;
    // 0x135d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135D38u, 0x135D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D40u;
label_135d40:
    // 0x135d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135d48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135d50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135d50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135d54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135d54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135d58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135d58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135d5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135d5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135d60: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135d60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135d64: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135d68: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135d6c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135d70: 0x80507b4  j           func_141ED0
    ctx->pc = 0x135D70u;
    ctx->pc = 0x135D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D70u;
    // 0x135d74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141ED0u;
    ApCameraChangeAngleRotZ__FP7WcActori_0x141ed0(rdram, ctx, runtime); return;
    ctx->pc = 0x135D78u;
label_135d78:
    // 0x135d78: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135D78u;
    SET_GPR_U32(ctx, 31, 0x135D80u);
    ctx->pc = 0x135D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D78u;
    // 0x135d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135D78u, 0x135D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D80u;
label_135d80:
    // 0x135d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135d94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135d98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135d9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135d9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135da0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135da0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135da4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135da8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135dac: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135db0: 0x80507d0  j           func_141F40
    ctx->pc = 0x135DB0u;
    ctx->pc = 0x135DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DB0u;
    // 0x135db4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141F40u;
    ApCameraChangeAngleLRLock__FP7WcActori_0x141f40(rdram, ctx, runtime); return;
    ctx->pc = 0x135DB8u;
label_135db8:
    // 0x135db8: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135DB8u;
    SET_GPR_U32(ctx, 31, 0x135DC0u);
    ctx->pc = 0x135DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DB8u;
    // 0x135dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135DB8u, 0x135DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135DC0u;
label_135dc0:
    // 0x135dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135dc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135dd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135dd4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135dd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135dd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135dd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135ddc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135ddcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135de0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135de0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135de4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135de8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135dec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135df0: 0x80507ec  j           func_141FB0
    ctx->pc = 0x135DF0u;
    ctx->pc = 0x135DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DF0u;
    // 0x135df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141FB0u;
    ApCameraChangeAngleUDLock__FP7WcActori_0x141fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x135DF8u;
label_135df8:
    // 0x135df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135dfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135dfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135e00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x135e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e04: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135e04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135e08: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135e0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135e10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x135e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135e18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135e1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135e1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135e20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135e20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135e24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135e28: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135e2c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135e30: 0x80503ac  j           func_140EB0
    ctx->pc = 0x135E30u;
    ctx->pc = 0x135E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E30u;
    // 0x135e34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140EB0u;
    ApCameraSetParaLockMode__FP7WcActorT0P9FVector32P9DVAngle32_0x140eb0(rdram, ctx, runtime); return;
    ctx->pc = 0x135E38u;
label_135e38:
    // 0x135e38: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x135e3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x135e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e44: 0xc0503ac  jal         func_140EB0
    ctx->pc = 0x135E44u;
    SET_GPR_U32(ctx, 31, 0x135E4Cu);
    ctx->pc = 0x135E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E44u;
    // 0x135e48: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140EB0u, 0x135E44u, 0x135E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E4Cu;
label_135e4c:
    // 0x135e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135e50:
    // 0x135e50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135e50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135e54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135e54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135e58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135e58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135e5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x135e5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135e60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135e60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135e64: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135e64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135e68: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x135e6c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x135e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135e70: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135e74: 0x3e00008  jr          $ra
    ctx->pc = 0x135E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E74u;
        // 0x135e78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135E7Cu;
}
