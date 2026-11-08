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

// Function: BMemPMgrBlockList__FP8BMemPool
// Address: 0x19f758 - 0x19f900
void BMemPMgrBlockList__FP8BMemPool_0x19f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrBlockList__FP8BMemPool_0x19f758");
#endif

    switch (ctx->pc) {
        case 0x19f7b8u: goto label_19f7b8;
        case 0x19f7f8u: goto label_19f7f8;
        case 0x19f820u: goto label_19f820;
        case 0x19f828u: goto label_19f828;
        case 0x19f874u: goto label_19f874;
        case 0x19f8b4u: goto label_19f8b4;
        default: break;
    }

    ctx->pc = 0x19f758u;

    // 0x19f758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f75c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19f760: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19f764: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19f764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19f768: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x19f768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x19f76c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19f76cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19f778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19f77c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19f77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19f780: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x19f780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x19f784: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x19f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x19f788: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x19f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x19f78c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x19f78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x19f790: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x19f790u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x19f794: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19f794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f798: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x19f798u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f79c: 0x1260004c  beqz        $s3, . + 4 + (0x4C << 2)
    ctx->pc = 0x19F79Cu;
    {
        const bool branch_taken_0x19f79c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F79Cu;
        // 0x19f7a0: 0x3c170027  lui         $s7, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f79c) {
            ctx->pc = 0x19F8D0u;
            goto label_19f8d0;
        }
    }
    ctx->pc = 0x19F7A4u;
    // 0x19f7a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19f7a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f7a8: 0x26f4e120  addiu       $s4, $s7, -0x1EE0
    ctx->pc = 0x19f7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959392));
    // 0x19f7ac: 0x3c1e0026  lui         $fp, 0x26
    ctx->pc = 0x19f7acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)38 << 16));
    // 0x19f7b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x19f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x19f7b4: 0x0  nop
    ctx->pc = 0x19f7b4u;
    // NOP
label_19f7b8:
    // 0x19f7b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19f7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19f7bc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x19F7BCu;
    {
        const bool branch_taken_0x19f7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7BCu;
        // 0x19f7c0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7bc) {
            ctx->pc = 0x19F880u;
            goto label_19f880;
        }
    }
    ctx->pc = 0x19F7C4u;
    // 0x19f7c4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19f7c8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19f7cc: 0x2451f6a8  addiu       $s1, $v0, -0x958
    ctx->pc = 0x19f7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964904));
    // 0x19f7d0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F7D0u;
    {
        const bool branch_taken_0x19f7d0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x19F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7D0u;
        // 0x19f7d4: 0x26e4e120  addiu       $a0, $s7, -0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7d0) {
            ctx->pc = 0x19F7E8u;
            goto label_19f7e8;
        }
    }
    ctx->pc = 0x19F7D8u;
    // 0x19f7d8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19f7dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F7DCu;
    {
        const bool branch_taken_0x19f7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F7DCu;
        // 0x19f7e0: 0x2445d658  addiu       $a1, $v0, -0x29A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7dc) {
            ctx->pc = 0x19F7F0u;
            goto label_19f7f0;
        }
    }
    ctx->pc = 0x19F7E4u;
    // 0x19f7e4: 0x0  nop
    ctx->pc = 0x19f7e4u;
    // NOP
label_19f7e8:
    // 0x19f7e8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19f7ec: 0x2445d660  addiu       $a1, $v0, -0x29A0
    ctx->pc = 0x19f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956640));
label_19f7f0:
    // 0x19f7f0: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x19F7F0u;
    SET_GPR_U32(ctx, 31, 0x19F7F8u);
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x19F7F0u, 0x19F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F7F8u;
label_19f7f8:
    // 0x19f7f8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x19f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x19f7fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19f7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19f800: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x19f800u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x19f804: 0x56000011  bnel        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F804u;
    {
        const bool branch_taken_0x19f804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f804) {
            ctx->pc = 0x19F808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F804u;
            // 0x19f808: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F84Cu;
            goto label_19f84c;
        }
    }
    ctx->pc = 0x19F80Cu;
    // 0x19f80c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19f810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f814: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19F814u;
    {
        const bool branch_taken_0x19f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F814u;
        // 0x19f818: 0x24458750  addiu       $a1, $v0, -0x78B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f814) {
            ctx->pc = 0x19F86Cu;
            goto label_19f86c;
        }
    }
    ctx->pc = 0x19F81Cu;
    // 0x19f81c: 0x0  nop
    ctx->pc = 0x19f81cu;
    // NOP
label_19f820:
    // 0x19f820: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19F820u;
    {
        const bool branch_taken_0x19f820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F820u;
        // 0x19f824: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f820) {
            ctx->pc = 0x19F86Cu;
            goto label_19f86c;
        }
    }
    ctx->pc = 0x19F828u;
label_19f828:
    // 0x19f828: 0x0  nop
    ctx->pc = 0x19f828u;
    // NOP
    // 0x19f82c: 0x0  nop
    ctx->pc = 0x19f82cu;
    // NOP
    // 0x19f830: 0x0  nop
    ctx->pc = 0x19f830u;
    // NOP
    // 0x19f834: 0x0  nop
    ctx->pc = 0x19f834u;
    // NOP
    // 0x19f838: 0x0  nop
    ctx->pc = 0x19f838u;
    // NOP
    // 0x19f83c: 0x5050fff8  beql        $v0, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19F83Cu;
    {
        const bool branch_taken_0x19f83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x19f83c) {
            ctx->pc = 0x19F840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F83Cu;
            // 0x19f840: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f820;
        }
    }
    ctx->pc = 0x19F844u;
    // 0x19f844: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x19f844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x19f848: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19f848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19f84c:
    // 0x19f84c: 0x0  nop
    ctx->pc = 0x19f84cu;
    // NOP
    // 0x19f850: 0x0  nop
    ctx->pc = 0x19f850u;
    // NOP
    // 0x19f854: 0x0  nop
    ctx->pc = 0x19f854u;
    // NOP
    // 0x19f858: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x19F858u;
    {
        const bool branch_taken_0x19f858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f858) {
            ctx->pc = 0x19F85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F858u;
            // 0x19f85c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f828;
        }
    }
    ctx->pc = 0x19F860u;
    // 0x19f860: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x19f860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x19f864: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f868: 0x2465d668  addiu       $a1, $v1, -0x2998
    ctx->pc = 0x19f868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956648));
label_19f86c:
    // 0x19f86c: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x19F86Cu;
    SET_GPR_U32(ctx, 31, 0x19F874u);
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x19F86Cu, 0x19F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F874u;
label_19f874:
    // 0x19f874: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19F874u;
    {
        const bool branch_taken_0x19f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F874u;
        // 0x19f878: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f874) {
            ctx->pc = 0x19F884u;
            goto label_19f884;
        }
    }
    ctx->pc = 0x19F87Cu;
    // 0x19f87c: 0x0  nop
    ctx->pc = 0x19f87cu;
    // NOP
label_19f880:
    // 0x19f880: 0x244ad670  addiu       $t2, $v0, -0x2990
    ctx->pc = 0x19f880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956656));
label_19f884:
    // 0x19f884: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x19f884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f888: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f88c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19f890: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x19f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x19f894: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x19f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x19f898: 0x73f02  srl         $a3, $a3, 28
    ctx->pc = 0x19f898u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
    // 0x19f89c: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x19f89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x19f8a0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x19f8a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x19f8a4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x19f8a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8a8: 0x26490010  addiu       $t1, $s2, 0x10
    ctx->pc = 0x19f8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x19f8ac: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x19F8ACu;
    SET_GPR_U32(ctx, 31, 0x19F8B4u);
    ctx->pc = 0x19F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F8ACu;
    // 0x19f8b0: 0x27c48760  addiu       $a0, $fp, -0x78A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x19F8ACu, 0x19F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8B4u;
label_19f8b4:
    // 0x19f8b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x19f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f8b8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x19f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x19f8bc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x19f8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19f8c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19f8c4: 0x769824  and         $s3, $v1, $s6
    ctx->pc = 0x19f8c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
    // 0x19f8c8: 0x1660ffbb  bnez        $s3, . + 4 + (-0x45 << 2)
    ctx->pc = 0x19F8C8u;
    {
        const bool branch_taken_0x19f8c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8C8u;
        // 0x19f8cc: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8c8) {
            ctx->pc = 0x19F7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f7b8;
        }
    }
    ctx->pc = 0x19F8D0u;
label_19f8d0:
    // 0x19f8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f8d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f8d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f8dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19f8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19f8e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19f8e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f8e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x19f8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19f8e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x19f8e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f8ec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x19f8ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19f8f0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x19f8f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f8f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x19f8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19f8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x19F8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F8F8u;
        // 0x19f8fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F900u;
}
