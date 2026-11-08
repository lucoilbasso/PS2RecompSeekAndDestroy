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

// Function: Cmd_SET_DAMAGE_Entry__FP15BsSCDEntControl
// Address: 0x1346c0 - 0x1348d0
void Cmd_SET_DAMAGE_Entry__FP15BsSCDEntControl_0x1346c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_DAMAGE_Entry__FP15BsSCDEntControl_0x1346c0");
#endif

    switch (ctx->pc) {
        case 0x1346c0u: goto label_1346c0;
        case 0x1346c4u: goto label_1346c4;
        case 0x1346c8u: goto label_1346c8;
        case 0x1346ccu: goto label_1346cc;
        case 0x1346d0u: goto label_1346d0;
        case 0x1346d4u: goto label_1346d4;
        case 0x1346d8u: goto label_1346d8;
        case 0x1346dcu: goto label_1346dc;
        case 0x1346e0u: goto label_1346e0;
        case 0x1346e4u: goto label_1346e4;
        case 0x1346e8u: goto label_1346e8;
        case 0x1346ecu: goto label_1346ec;
        case 0x1346f0u: goto label_1346f0;
        case 0x1346f4u: goto label_1346f4;
        case 0x1346f8u: goto label_1346f8;
        case 0x1346fcu: goto label_1346fc;
        case 0x134700u: goto label_134700;
        case 0x134704u: goto label_134704;
        case 0x134708u: goto label_134708;
        case 0x13470cu: goto label_13470c;
        case 0x134710u: goto label_134710;
        case 0x134714u: goto label_134714;
        case 0x134718u: goto label_134718;
        case 0x13471cu: goto label_13471c;
        case 0x134720u: goto label_134720;
        case 0x134724u: goto label_134724;
        case 0x134728u: goto label_134728;
        case 0x13472cu: goto label_13472c;
        case 0x134730u: goto label_134730;
        case 0x134734u: goto label_134734;
        case 0x134738u: goto label_134738;
        case 0x13473cu: goto label_13473c;
        case 0x134740u: goto label_134740;
        case 0x134744u: goto label_134744;
        case 0x134748u: goto label_134748;
        case 0x13474cu: goto label_13474c;
        case 0x134750u: goto label_134750;
        case 0x134754u: goto label_134754;
        case 0x134758u: goto label_134758;
        case 0x13475cu: goto label_13475c;
        case 0x134760u: goto label_134760;
        case 0x134764u: goto label_134764;
        case 0x134768u: goto label_134768;
        case 0x13476cu: goto label_13476c;
        case 0x134770u: goto label_134770;
        case 0x134774u: goto label_134774;
        case 0x134778u: goto label_134778;
        case 0x13477cu: goto label_13477c;
        case 0x134780u: goto label_134780;
        case 0x134784u: goto label_134784;
        case 0x134788u: goto label_134788;
        case 0x13478cu: goto label_13478c;
        case 0x134790u: goto label_134790;
        case 0x134794u: goto label_134794;
        case 0x134798u: goto label_134798;
        case 0x13479cu: goto label_13479c;
        case 0x1347a0u: goto label_1347a0;
        case 0x1347a4u: goto label_1347a4;
        case 0x1347a8u: goto label_1347a8;
        case 0x1347acu: goto label_1347ac;
        case 0x1347b0u: goto label_1347b0;
        case 0x1347b4u: goto label_1347b4;
        case 0x1347b8u: goto label_1347b8;
        case 0x1347bcu: goto label_1347bc;
        case 0x1347c0u: goto label_1347c0;
        case 0x1347c4u: goto label_1347c4;
        case 0x1347c8u: goto label_1347c8;
        case 0x1347ccu: goto label_1347cc;
        case 0x1347d0u: goto label_1347d0;
        case 0x1347d4u: goto label_1347d4;
        case 0x1347d8u: goto label_1347d8;
        case 0x1347dcu: goto label_1347dc;
        case 0x1347e0u: goto label_1347e0;
        case 0x1347e4u: goto label_1347e4;
        case 0x1347e8u: goto label_1347e8;
        case 0x1347ecu: goto label_1347ec;
        case 0x1347f0u: goto label_1347f0;
        case 0x1347f4u: goto label_1347f4;
        case 0x1347f8u: goto label_1347f8;
        case 0x1347fcu: goto label_1347fc;
        case 0x134800u: goto label_134800;
        case 0x134804u: goto label_134804;
        case 0x134808u: goto label_134808;
        case 0x13480cu: goto label_13480c;
        case 0x134810u: goto label_134810;
        case 0x134814u: goto label_134814;
        case 0x134818u: goto label_134818;
        case 0x13481cu: goto label_13481c;
        case 0x134820u: goto label_134820;
        case 0x134824u: goto label_134824;
        case 0x134828u: goto label_134828;
        case 0x13482cu: goto label_13482c;
        case 0x134830u: goto label_134830;
        case 0x134834u: goto label_134834;
        case 0x134838u: goto label_134838;
        case 0x13483cu: goto label_13483c;
        case 0x134840u: goto label_134840;
        case 0x134844u: goto label_134844;
        case 0x134848u: goto label_134848;
        case 0x13484cu: goto label_13484c;
        case 0x134850u: goto label_134850;
        case 0x134854u: goto label_134854;
        case 0x134858u: goto label_134858;
        case 0x13485cu: goto label_13485c;
        case 0x134860u: goto label_134860;
        case 0x134864u: goto label_134864;
        case 0x134868u: goto label_134868;
        case 0x13486cu: goto label_13486c;
        case 0x134870u: goto label_134870;
        case 0x134874u: goto label_134874;
        case 0x134878u: goto label_134878;
        case 0x13487cu: goto label_13487c;
        case 0x134880u: goto label_134880;
        case 0x134884u: goto label_134884;
        case 0x134888u: goto label_134888;
        case 0x13488cu: goto label_13488c;
        case 0x134890u: goto label_134890;
        case 0x134894u: goto label_134894;
        case 0x134898u: goto label_134898;
        case 0x13489cu: goto label_13489c;
        case 0x1348a0u: goto label_1348a0;
        case 0x1348a4u: goto label_1348a4;
        case 0x1348a8u: goto label_1348a8;
        case 0x1348acu: goto label_1348ac;
        case 0x1348b0u: goto label_1348b0;
        case 0x1348b4u: goto label_1348b4;
        case 0x1348b8u: goto label_1348b8;
        case 0x1348bcu: goto label_1348bc;
        case 0x1348c0u: goto label_1348c0;
        case 0x1348c4u: goto label_1348c4;
        case 0x1348c8u: goto label_1348c8;
        case 0x1348ccu: goto label_1348cc;
        default: break;
    }

    ctx->pc = 0x1346c0u;

label_1346c0:
    // 0x1346c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1346c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1346c4:
    // 0x1346c4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1346c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1346c8:
    // 0x1346c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1346c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1346cc:
    // 0x1346cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1346ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1346d0:
    // 0x1346d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1346d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1346d4:
    // 0x1346d4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1346d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1346d8:
    // 0x1346d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1346d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1346dc:
    // 0x1346dc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1346dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1346e0:
    // 0x1346e0: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x1346e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_1346e4:
    // 0x1346e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1346e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1346e8:
    // 0x1346e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1346e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1346ec:
    // 0x1346ec: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x1346ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1346f0:
    // 0x1346f0: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1346f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1346f4:
    // 0x1346f4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1346f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1346f8:
    // 0x1346f8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1346f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1346fc:
    // 0x1346fc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1346fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_134700:
    // 0x134700: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x134700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_134704:
    // 0x134704: 0x8c720040  lw          $s2, 0x40($v1)
    ctx->pc = 0x134704u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_134708:
    // 0x134708: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13470c:
    // 0x13470c: 0x1054000a  beq         $v0, $s4, . + 4 + (0xA << 2)
label_134710:
    if (ctx->pc == 0x134710u) {
        ctx->pc = 0x134710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13470Cu;
        // 0x134710: 0x8f918a30  lw          $s1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134714u;
        goto label_134714;
    }
    ctx->pc = 0x13470Cu;
    {
        const bool branch_taken_0x13470c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x134710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13470Cu;
        // 0x134710: 0x8f918a30  lw          $s1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13470c) {
            ctx->pc = 0x134738u;
            goto label_134738;
        }
    }
    ctx->pc = 0x134714u;
label_134714:
    // 0x134714: 0xc06a26e  jal         func_1A89B8
label_134718:
    if (ctx->pc == 0x134718u) {
        ctx->pc = 0x13471Cu;
        goto label_13471c;
    }
    ctx->pc = 0x134714u;
    SET_GPR_U32(ctx, 31, 0x13471Cu);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134714u, 0x13471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13471Cu;
label_13471c:
    // 0x13471c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13471cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134720:
    // 0x134720: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x134720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_134724:
    // 0x134724: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_134728:
    // 0x134728: 0x50740004  beql        $v1, $s4, . + 4 + (0x4 << 2)
label_13472c:
    if (ctx->pc == 0x13472Cu) {
        ctx->pc = 0x13472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134728u;
        // 0x13472c: 0xae510230  sw          $s1, 0x230($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134730u;
        goto label_134730;
    }
    ctx->pc = 0x134728u;
    {
        const bool branch_taken_0x134728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x134728) {
            ctx->pc = 0x13472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134728u;
            // 0x13472c: 0xae510230  sw          $s1, 0x230($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13473Cu;
            goto label_13473c;
        }
    }
    ctx->pc = 0x134730u;
label_134730:
    // 0x134730: 0xc06a26e  jal         func_1A89B8
label_134734:
    if (ctx->pc == 0x134734u) {
        ctx->pc = 0x134734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134730u;
        // 0x134734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134738u;
        goto label_134738;
    }
    ctx->pc = 0x134730u;
    SET_GPR_U32(ctx, 31, 0x134738u);
    ctx->pc = 0x134734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134730u;
    // 0x134734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134730u, 0x134738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134738u;
label_134738:
    // 0x134738: 0xae510230  sw          $s1, 0x230($s2)
    ctx->pc = 0x134738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 17));
label_13473c:
    // 0x13473c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13473cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134740:
    // 0x134740: 0xc0533e4  jal         func_14CF90
label_134744:
    if (ctx->pc == 0x134744u) {
        ctx->pc = 0x134744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134740u;
        // 0x134744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134748u;
        goto label_134748;
    }
    ctx->pc = 0x134740u;
    SET_GPR_U32(ctx, 31, 0x134748u);
    ctx->pc = 0x134744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134740u;
    // 0x134744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF90u, 0x134740u, 0x134748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134748u;
label_134748:
    // 0x134748: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x134748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13474c:
    // 0x13474c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13474cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134750:
    // 0x134750: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x134750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_134754:
    // 0x134754: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x134754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_134758:
    // 0x134758: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x134758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13475c:
    // 0x13475c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13475cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_134760:
    // 0x134760: 0x60f809  jalr        $v1
label_134764:
    if (ctx->pc == 0x134764u) {
        ctx->pc = 0x134764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134760u;
        // 0x134764: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134768u;
        goto label_134768;
    }
    ctx->pc = 0x134760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x134768u);
        ctx->pc = 0x134764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134760u;
        // 0x134764: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134760u, 0x134768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134768u;
label_134768:
    // 0x134768: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x134768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13476c:
    // 0x13476c: 0x1262004c  beq         $s3, $v0, . + 4 + (0x4C << 2)
label_134770:
    if (ctx->pc == 0x134770u) {
        ctx->pc = 0x134770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13476Cu;
        // 0x134770: 0x24021118  addiu       $v0, $zero, 0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134774u;
        goto label_134774;
    }
    ctx->pc = 0x13476Cu;
    {
        const bool branch_taken_0x13476c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x134770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13476Cu;
        // 0x134770: 0x24021118  addiu       $v0, $zero, 0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13476c) {
            ctx->pc = 0x1348A0u;
            goto label_1348a0;
        }
    }
    ctx->pc = 0x134774u;
label_134774:
    // 0x134774: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x134774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_134778:
    // 0x134778: 0x5462004a  bnel        $v1, $v0, . + 4 + (0x4A << 2)
label_13477c:
    if (ctx->pc == 0x13477Cu) {
        ctx->pc = 0x13477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134778u;
        // 0x13477c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134780u;
        goto label_134780;
    }
    ctx->pc = 0x134778u;
    {
        const bool branch_taken_0x134778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x134778) {
            ctx->pc = 0x13477Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134778u;
            // 0x13477c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1348A4u;
            goto label_1348a4;
        }
    }
    ctx->pc = 0x134780u;
label_134780:
    // 0x134780: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
label_134784:
    if (ctx->pc == 0x134784u) {
        ctx->pc = 0x134784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134780u;
        // 0x134784: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134788u;
        goto label_134788;
    }
    ctx->pc = 0x134780u;
    {
        const bool branch_taken_0x134780 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x134784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134780u;
        // 0x134784: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134780) {
            ctx->pc = 0x1347C0u;
            goto label_1347c0;
        }
    }
    ctx->pc = 0x134788u;
label_134788:
    // 0x134788: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_13478c:
    // 0x13478c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13478cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_134790:
    // 0x134790: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x134790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_134794:
    // 0x134794: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x134794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_134798:
    // 0x134798: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x134798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_13479c:
    // 0x13479c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1347a0:
    if (ctx->pc == 0x1347A0u) {
        ctx->pc = 0x1347A4u;
        goto label_1347a4;
    }
    ctx->pc = 0x13479Cu;
    {
        const bool branch_taken_0x13479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13479c) {
            ctx->pc = 0x1347ACu;
            goto label_1347ac;
        }
    }
    ctx->pc = 0x1347A4u;
label_1347a4:
    // 0x1347a4: 0xc061920  jal         func_186480
label_1347a8:
    if (ctx->pc == 0x1347A8u) {
        ctx->pc = 0x1347ACu;
        goto label_1347ac;
    }
    ctx->pc = 0x1347A4u;
    SET_GPR_U32(ctx, 31, 0x1347ACu);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1347A4u, 0x1347ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347ACu;
label_1347ac:
    // 0x1347ac: 0xc061422  jal         func_185088
label_1347b0:
    if (ctx->pc == 0x1347B0u) {
        ctx->pc = 0x1347B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347ACu;
        // 0x1347b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347B4u;
        goto label_1347b4;
    }
    ctx->pc = 0x1347ACu;
    SET_GPR_U32(ctx, 31, 0x1347B4u);
    ctx->pc = 0x1347B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1347ACu;
    // 0x1347b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1347ACu, 0x1347B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1347B4u;
label_1347b4:
    // 0x1347b4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1347b8:
    if (ctx->pc == 0x1347B8u) {
        ctx->pc = 0x1347B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347B4u;
        // 0x1347b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347BCu;
        goto label_1347bc;
    }
    ctx->pc = 0x1347B4u;
    {
        const bool branch_taken_0x1347b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347B4u;
        // 0x1347b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347b4) {
            ctx->pc = 0x1348A4u;
            goto label_1348a4;
        }
    }
    ctx->pc = 0x1347BCu;
label_1347bc:
    // 0x1347bc: 0x0  nop
    ctx->pc = 0x1347bcu;
    // NOP
label_1347c0:
    // 0x1347c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1347c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1347c4:
    // 0x1347c4: 0x1662001a  bne         $s3, $v0, . + 4 + (0x1A << 2)
label_1347c8:
    if (ctx->pc == 0x1347C8u) {
        ctx->pc = 0x1347C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347C4u;
        // 0x1347c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347CCu;
        goto label_1347cc;
    }
    ctx->pc = 0x1347C4u;
    {
        const bool branch_taken_0x1347c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1347C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347C4u;
        // 0x1347c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347c4) {
            ctx->pc = 0x134830u;
            goto label_134830;
        }
    }
    ctx->pc = 0x1347CCu;
label_1347cc:
    // 0x1347cc: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x1347ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
label_1347d0:
    // 0x1347d0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1347d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1347d4:
    // 0x1347d4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1347d8:
    if (ctx->pc == 0x1347D8u) {
        ctx->pc = 0x1347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347D4u;
        // 0x1347d8: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347DCu;
        goto label_1347dc;
    }
    ctx->pc = 0x1347D4u;
    {
        const bool branch_taken_0x1347d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347D4u;
        // 0x1347d8: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347d4) {
            ctx->pc = 0x1347FCu;
            goto label_1347fc;
        }
    }
    ctx->pc = 0x1347DCu;
label_1347dc:
    // 0x1347dc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1347dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1347e0:
    // 0x1347e0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1347e4:
    if (ctx->pc == 0x1347E4u) {
        ctx->pc = 0x1347E8u;
        goto label_1347e8;
    }
    ctx->pc = 0x1347E0u;
    {
        const bool branch_taken_0x1347e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1347e0) {
            ctx->pc = 0x1347FCu;
            goto label_1347fc;
        }
    }
    ctx->pc = 0x1347E8u;
label_1347e8:
    // 0x1347e8: 0x96420266  lhu         $v0, 0x266($s2)
    ctx->pc = 0x1347e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
label_1347ec:
    // 0x1347ec: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1347ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1347f0:
    // 0x1347f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1347f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1347f4:
    // 0x1347f4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_1347f8:
    if (ctx->pc == 0x1347F8u) {
        ctx->pc = 0x1347F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347F4u;
        // 0x1347f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1347FCu;
        goto label_1347fc;
    }
    ctx->pc = 0x1347F4u;
    {
        const bool branch_taken_0x1347f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1347F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347F4u;
        // 0x1347f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347f4) {
            ctx->pc = 0x1348A4u;
            goto label_1348a4;
        }
    }
    ctx->pc = 0x1347FCu;
label_1347fc:
    // 0x1347fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1347fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_134800:
    // 0x134800: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x134800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
label_134804:
    // 0x134804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x134804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_134808:
    // 0x134808: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x134808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_13480c:
    // 0x13480c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13480cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_134810:
    // 0x134810: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x134810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_134814:
    // 0x134814: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x134814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_134818:
    // 0x134818: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x134818u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_13481c:
    // 0x13481c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x13481cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_134820:
    // 0x134820: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x134820u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_134824:
    // 0x134824: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x134824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_134828:
    // 0x134828: 0x10000019  b           . + 4 + (0x19 << 2)
label_13482c:
    if (ctx->pc == 0x13482Cu) {
        ctx->pc = 0x13482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134828u;
        // 0x13482c: 0x24c60820  addiu       $a2, $a2, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134830u;
        goto label_134830;
    }
    ctx->pc = 0x134828u;
    {
        const bool branch_taken_0x134828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134828u;
        // 0x13482c: 0x24c60820  addiu       $a2, $a2, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134828) {
            ctx->pc = 0x134890u;
            goto label_134890;
        }
    }
    ctx->pc = 0x134830u;
label_134830:
    // 0x134830: 0x5662001c  bnel        $s3, $v0, . + 4 + (0x1C << 2)
label_134834:
    if (ctx->pc == 0x134834u) {
        ctx->pc = 0x134834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134830u;
        // 0x134834: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134838u;
        goto label_134838;
    }
    ctx->pc = 0x134830u;
    {
        const bool branch_taken_0x134830 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x134830) {
            ctx->pc = 0x134834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134830u;
            // 0x134834: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1348A4u;
            goto label_1348a4;
        }
    }
    ctx->pc = 0x134838u;
label_134838:
    // 0x134838: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
label_13483c:
    // 0x13483c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x13483cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_134840:
    // 0x134840: 0xc066fb4  jal         func_19BED0
label_134844:
    if (ctx->pc == 0x134844u) {
        ctx->pc = 0x134844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134840u;
        // 0x134844: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134848u;
        goto label_134848;
    }
    ctx->pc = 0x134840u;
    SET_GPR_U32(ctx, 31, 0x134848u);
    ctx->pc = 0x134844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134840u;
    // 0x134844: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x134840u, 0x134848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134848u;
label_134848:
    // 0x134848: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x134848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_13484c:
    // 0x13484c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x13484cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_134850:
    // 0x134850: 0xc066fb4  jal         func_19BED0
label_134854:
    if (ctx->pc == 0x134854u) {
        ctx->pc = 0x134854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134850u;
        // 0x134854: 0x46170502  mul.s       $f20, $f0, $f23 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x134858u;
        goto label_134858;
    }
    ctx->pc = 0x134850u;
    SET_GPR_U32(ctx, 31, 0x134858u);
    ctx->pc = 0x134854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134850u;
    // 0x134854: 0x46170502  mul.s       $f20, $f0, $f23 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BED0u, 0x134850u, 0x134858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134858u;
label_134858:
    // 0x134858: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x134858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_13485c:
    // 0x13485c: 0x3c01c37a  lui         $at, 0xC37A
    ctx->pc = 0x13485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50042 << 16));
label_134860:
    // 0x134860: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x134860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_134864:
    // 0x134864: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x134864u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_134868:
    // 0x134868: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x134868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_13486c:
    // 0x13486c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x13486cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_134870:
    // 0x134870: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x134870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_134874:
    // 0x134874: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x134874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_134878:
    // 0x134878: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x134878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_13487c:
    // 0x13487c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x13487cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_134880:
    // 0x134880: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x134880u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_134884:
    // 0x134884: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x134884u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_134888:
    // 0x134888: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x134888u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_13488c:
    // 0x13488c: 0x26260820  addiu       $a2, $s1, 0x820
    ctx->pc = 0x13488cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_134890:
    // 0x134890: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x134890u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_134894:
    // 0x134894: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x134894u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_134898:
    // 0x134898: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x134898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_13489c:
    // 0x13489c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x13489cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1348a0:
    // 0x1348a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1348a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1348a4:
    // 0x1348a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1348a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1348a8:
    // 0x1348a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1348a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1348ac:
    // 0x1348ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1348acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1348b0:
    // 0x1348b0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1348b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1348b4:
    // 0x1348b4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1348b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1348b8:
    // 0x1348b8: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x1348b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1348bc:
    // 0x1348bc: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1348bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1348c0:
    // 0x1348c0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1348c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1348c4:
    // 0x1348c4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1348c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1348c8:
    // 0x1348c8: 0x3e00008  jr          $ra
label_1348cc:
    if (ctx->pc == 0x1348CCu) {
        ctx->pc = 0x1348CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348C8u;
        // 0x1348cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1348D0u;
        goto label_fallthrough_0x1348c8;
    }
    ctx->pc = 0x1348C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1348CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348C8u;
        // 0x1348cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1348C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1348c8:
    ctx->pc = 0x1348D0u;
}
