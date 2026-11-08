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

// Function: dmaRefImage
// Address: 0x1c3678 - 0x1c37e4
void dmaRefImage_0x1c3678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dmaRefImage_0x1c3678");
#endif

    switch (ctx->pc) {
        case 0x1c36d8u: goto label_1c36d8;
        case 0x1c3764u: goto label_1c3764;
        default: break;
    }

    ctx->pc = 0x1c3678u;

    // 0x1c3678: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c367c: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1c367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c3680: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c3680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c3684: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1c3684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1c3688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c368c: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x1c368cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
    // 0x1c3690: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c3690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c3694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3698: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c3698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c369c: 0x2644d940  addiu       $a0, $s2, -0x26C0
    ctx->pc = 0x1c369cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957376));
    // 0x1c36a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c36a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c36a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c36a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36a8: 0x8e180810  lw          $t8, 0x810($s0)
    ctx->pc = 0x1c36a8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c36ac: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1c36acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c36b0: 0x3051818  mult        $v1, $t8, $a1
    ctx->pc = 0x1c36b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c36b4: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1c36b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c36b8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1c36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1c36bc: 0x8cac06bc  lw          $t4, 0x6BC($a1)
    ctx->pc = 0x1c36bcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1724)));
    // 0x1c36c0: 0x19800025  blez        $t4, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C36C0u;
    {
        const bool branch_taken_0x1c36c0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1C36C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36C0u;
        // 0x1c36c4: 0x835025  or          $t2, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36c0) {
            ctx->pc = 0x1C3758u;
            goto label_1c3758;
        }
    }
    ctx->pc = 0x1C36C8u;
    // 0x1c36c8: 0x260f0598  addiu       $t7, $s0, 0x598
    ctx->pc = 0x1c36c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1432));
    // 0x1c36cc: 0x260e05a8  addiu       $t6, $s0, 0x5A8
    ctx->pc = 0x1c36ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x1c36d0: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x1c36d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1c36d4: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x1c36d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_1c36d8:
    // 0x1c36d8: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1c36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c36dc: 0x16d1026  xor         $v0, $t3, $t5
    ctx->pc = 0x1c36dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 13));
    // 0x1c36e0: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x1c36e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c36e4: 0xb2080  sll         $a0, $t3, 2
    ctx->pc = 0x1c36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1c36e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c36e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c36ec: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x1c36ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x1c36f0: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x1c36f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1c36f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1c36f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1c36f8: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x1c36f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x1c36fc: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x1c36fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x1c3700: 0x35290030  ori         $t1, $t1, 0x30
    ctx->pc = 0x1c3700u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)48);
    // 0x1c3704: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c3708: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1c3708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c370c: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x1c370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1c3710: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1c3710u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1c3714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3718: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x1c3718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1c371c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c3720: 0x16c382a  slt         $a3, $t3, $t4
    ctx->pc = 0x1c3720u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1c3724: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1c3724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1c3728: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1c3728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1c372c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c372cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3730: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c3730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c3734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3738: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1c3738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1c373c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1c373cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1c3740: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x1c3740u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x1c3744: 0xfd430010  sd          $v1, 0x10($t2)
    ctx->pc = 0x1c3744u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 3));
    // 0x1c3748: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C3748u;
    {
        const bool branch_taken_0x1c3748 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3748u;
        // 0x1c374c: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3748) {
            ctx->pc = 0x1C36D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c36d8;
        }
    }
    ctx->pc = 0x1C3750u;
    // 0x1c3750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3750u;
    {
        const bool branch_taken_0x1c3750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3750) {
            ctx->pc = 0x1C375Cu;
            goto label_1c375c;
        }
    }
    ctx->pc = 0x1C3758u;
label_1c3758:
    // 0x1c3758: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x1c3758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_1c375c:
    // 0x1c375c: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1C375Cu;
    SET_GPR_U32(ctx, 31, 0x1C3764u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1C375Cu, 0x1C3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3764u;
label_1c3764:
    // 0x1c3764: 0xf  sync
    ctx->pc = 0x1c3764u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1c3768: 0x8e060810  lw          $a2, 0x810($s0)
    ctx->pc = 0x1c3768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c376c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1c376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c3770: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1c3770u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3774: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1c3774u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3778: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x1c3778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c377c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x1c377cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x1c3780: 0x264ad940  addiu       $t2, $s2, -0x26C0
    ctx->pc = 0x1c3780u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957376));
    // 0x1c3784: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x1c3784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x1c3788: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c378c: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x1c378cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1c3790: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1c3790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x1c3794: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x1c3794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1c3798: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1c3798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c379c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c379cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c37a0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x1c37a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x1c37a4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1c37a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1c37a8: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x1c37a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x1c37ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c37acu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x1c37b0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1c37b0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 9));
    // 0x1c37b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C37B4u;
    {
        const bool branch_taken_0x1c37b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37B4u;
        // 0x1c37b8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37b4) {
            ctx->pc = 0x1C37D0u;
            goto label_1c37d0;
        }
    }
    ctx->pc = 0x1C37BCu;
    // 0x1c37bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c37bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c37c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c37c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c37c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c37c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c37c8: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1C37C8u;
    ctx->pc = 0x1C37CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37C8u;
    // 0x1c37cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C37D0u;
label_1c37d0:
    // 0x1c37d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c37d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c37d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c37d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c37d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c37d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c37dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C37DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C37E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37DCu;
        // 0x1c37e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C37DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C37E4u;
}
