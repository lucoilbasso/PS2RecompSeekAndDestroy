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

// Function: OMTSuperError__FP5BcObjPci
// Address: 0x1a0618 - 0x1a0970
void OMTSuperError__FP5BcObjPci_0x1a0618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OMTSuperError__FP5BcObjPci_0x1a0618");
#endif

    switch (ctx->pc) {
        case 0x1a0690u: goto label_1a0690;
        case 0x1a06d8u: goto label_1a06d8;
        case 0x1a0720u: goto label_1a0720;
        case 0x1a072cu: goto label_1a072c;
        case 0x1a0748u: goto label_1a0748;
        case 0x1a0754u: goto label_1a0754;
        case 0x1a0768u: goto label_1a0768;
        case 0x1a0770u: goto label_1a0770;
        case 0x1a077cu: goto label_1a077c;
        case 0x1a0784u: goto label_1a0784;
        case 0x1a0790u: goto label_1a0790;
        case 0x1a07a0u: goto label_1a07a0;
        case 0x1a07b4u: goto label_1a07b4;
        case 0x1a07f8u: goto label_1a07f8;
        case 0x1a081cu: goto label_1a081c;
        case 0x1a0848u: goto label_1a0848;
        case 0x1a0870u: goto label_1a0870;
        case 0x1a087cu: goto label_1a087c;
        case 0x1a08a4u: goto label_1a08a4;
        case 0x1a08b0u: goto label_1a08b0;
        case 0x1a08ccu: goto label_1a08cc;
        case 0x1a08d8u: goto label_1a08d8;
        case 0x1a08ecu: goto label_1a08ec;
        case 0x1a08f4u: goto label_1a08f4;
        case 0x1a0900u: goto label_1a0900;
        case 0x1a0908u: goto label_1a0908;
        case 0x1a0914u: goto label_1a0914;
        case 0x1a0924u: goto label_1a0924;
        case 0x1a093cu: goto label_1a093c;
        case 0x1a0948u: goto label_1a0948;
        case 0x1a0950u: goto label_1a0950;
        default: break;
    }

    ctx->pc = 0x1a0618u;

    // 0x1a0618: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1a0618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1a061c: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x1a061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x1a0620: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a0620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0624: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x1a0624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x1a0628: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a0628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a062c: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x1a062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x1a0630: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x1a0630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x1a0634: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x1a0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x1a0638: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0638u;
    {
        const bool branch_taken_0x1a0638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0638u;
        // 0x1a063c: 0xffbf0178  sd          $ra, 0x178($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0638) {
            ctx->pc = 0x1A0650u;
            goto label_1a0650;
        }
    }
    ctx->pc = 0x1A0640u;
    // 0x1a0640: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a0640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1a0644: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1A0644u;
    {
        const bool branch_taken_0x1a0644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0644u;
        // 0x1a0648: 0x2454d8d0  addiu       $s4, $v0, -0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0644) {
            ctx->pc = 0x1A0708u;
            goto label_1a0708;
        }
    }
    ctx->pc = 0x1A064Cu;
    // 0x1a064c: 0x0  nop
    ctx->pc = 0x1a064cu;
    // NOP
label_1a0650:
    // 0x1a0650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0654: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0654u;
    {
        const bool branch_taken_0x1a0654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0654u;
        // 0x1a0658: 0x3c03fff0  lui         $v1, 0xFFF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0654) {
            ctx->pc = 0x1A0674u;
            goto label_1a0674;
        }
    }
    ctx->pc = 0x1A065Cu;
    // 0x1a065c: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x1a065cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x1a0660: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a0660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a0668: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a0668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a066c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A066Cu;
    {
        const bool branch_taken_0x1a066c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A066Cu;
        // 0x1a0670: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a066c) {
            ctx->pc = 0x1A06C0u;
            goto label_1a06c0;
        }
    }
    ctx->pc = 0x1A0674u;
label_1a0674:
    // 0x1a0674: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x1a0674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x1a0678: 0x2463f6a8  addiu       $v1, $v1, -0x958
    ctx->pc = 0x1a0678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964904));
    // 0x1a067c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x23F6A8u));
    // 0x1a0680: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A0680u;
    {
        const bool branch_taken_0x1a0680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0680u;
        // 0x1a0684: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0680) {
            ctx->pc = 0x1A0700u;
            goto label_1a0700;
        }
    }
    ctx->pc = 0x1A0688u;
    // 0x1a0688: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a068c: 0x0  nop
    ctx->pc = 0x1a068cu;
    // NOP
label_1a0690:
    // 0x1a0690: 0x5044001c  beql        $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A0690u;
    {
        const bool branch_taken_0x1a0690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0690) {
            ctx->pc = 0x1A0694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0690u;
            // 0x1a0694: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0704u;
            goto label_1a0704;
        }
    }
    ctx->pc = 0x1A0698u;
    // 0x1a0698: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a0698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a069c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a06a0: 0x0  nop
    ctx->pc = 0x1a06a0u;
    // NOP
    // 0x1a06a4: 0x0  nop
    ctx->pc = 0x1a06a4u;
    // NOP
    // 0x1a06a8: 0x0  nop
    ctx->pc = 0x1a06a8u;
    // NOP
    // 0x1a06ac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A06ACu;
    {
        const bool branch_taken_0x1a06ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a06ac) {
            ctx->pc = 0x1A06B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A06ACu;
            // 0x1a06b0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0690;
        }
    }
    ctx->pc = 0x1A06B4u;
    // 0x1a06b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A06B4u;
    {
        const bool branch_taken_0x1a06b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06B4u;
        // 0x1a06b8: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06b4) {
            ctx->pc = 0x1A0700u;
            goto label_1a0700;
        }
    }
    ctx->pc = 0x1A06BCu;
    // 0x1a06bc: 0x0  nop
    ctx->pc = 0x1a06bcu;
    // NOP
label_1a06c0:
    // 0x1a06c0: 0x2463f6a8  addiu       $v1, $v1, -0x958
    ctx->pc = 0x1a06c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964904));
    // 0x1a06c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a06c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A06C8u;
    {
        const bool branch_taken_0x1a06c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06C8u;
        // 0x1a06cc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06c8) {
            ctx->pc = 0x1A06FCu;
            goto label_1a06fc;
        }
    }
    ctx->pc = 0x1A06D0u;
    // 0x1a06d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a06d4: 0x0  nop
    ctx->pc = 0x1a06d4u;
    // NOP
label_1a06d8:
    // 0x1a06d8: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A06D8u;
    {
        const bool branch_taken_0x1a06d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a06d8) {
            ctx->pc = 0x1A06DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A06D8u;
            // 0x1a06dc: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0704u;
            goto label_1a0704;
        }
    }
    ctx->pc = 0x1A06E0u;
    // 0x1a06e0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a06e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a06e8: 0x0  nop
    ctx->pc = 0x1a06e8u;
    // NOP
    // 0x1a06ec: 0x0  nop
    ctx->pc = 0x1a06ecu;
    // NOP
    // 0x1a06f0: 0x0  nop
    ctx->pc = 0x1a06f0u;
    // NOP
    // 0x1a06f4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A06F4u;
    {
        const bool branch_taken_0x1a06f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a06f4) {
            ctx->pc = 0x1A06F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A06F4u;
            // 0x1a06f8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A06D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a06d8;
        }
    }
    ctx->pc = 0x1A06FCu;
label_1a06fc:
    // 0x1a06fc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1a06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1a0700:
    // 0x1a0700: 0x24468fc8  addiu       $a2, $v0, -0x7038
    ctx->pc = 0x1a0700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938568));
label_1a0704:
    // 0x1a0704: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a0704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a0708:
    // 0x1a0708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a070c: 0x5602002c  bnel        $s0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A070Cu;
    {
        const bool branch_taken_0x1a070c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a070c) {
            ctx->pc = 0x1A0710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A070Cu;
            // 0x1a0710: 0x2e02004c  sltiu       $v0, $s0, 0x4C (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A07C0u;
            goto label_1a07c0;
        }
    }
    ctx->pc = 0x1A0714u;
    // 0x1a0714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0718: 0xc0680f6  jal         func_1A03D8
    ctx->pc = 0x1A0718u;
    SET_GPR_U32(ctx, 31, 0x1A0720u);
    ctx->pc = 0x1A071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0718u;
    // 0x1a071c: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1A0718u, 0x1A0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0720u;
label_1a0720:
    // 0x1a0720: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0724: 0xc0680f6  jal         func_1A03D8
    ctx->pc = 0x1A0724u;
    SET_GPR_U32(ctx, 31, 0x1A072Cu);
    ctx->pc = 0x1A0728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0724u;
    // 0x1a0728: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1A0724u, 0x1A072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A072Cu;
label_1a072c:
    // 0x1a072c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a072cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0730: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a0730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a0734: 0x8c451134  lw          $a1, 0x1134($v0)
    ctx->pc = 0x1a0734u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281134u));
    // 0x1a0738: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a073c: 0x24848fd8  addiu       $a0, $a0, -0x7028
    ctx->pc = 0x1a073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938584));
    // 0x1a0740: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0740u;
    SET_GPR_U32(ctx, 31, 0x1A0748u);
    ctx->pc = 0x1A0744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0740u;
    // 0x1a0744: 0x26108fe8  addiu       $s0, $s0, -0x7018 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0740u, 0x1A0748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0748u;
label_1a0748:
    // 0x1a0748: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1a0748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a074c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A074Cu;
    SET_GPR_U32(ctx, 31, 0x1A0754u);
    ctx->pc = 0x1A0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A074Cu;
    // 0x1a0750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A074Cu, 0x1A0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0754u;
label_1a0754:
    // 0x1a0754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0758: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1a0758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a075c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1a075cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1a0760: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0760u;
    SET_GPR_U32(ctx, 31, 0x1A0768u);
    ctx->pc = 0x1A0764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0760u;
    // 0x1a0764: 0x26108ff8  addiu       $s0, $s0, -0x7008 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0760u, 0x1A0768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0768u;
label_1a0768:
    // 0x1a0768: 0xc06804a  jal         func_1A0128
    ctx->pc = 0x1A0768u;
    SET_GPR_U32(ctx, 31, 0x1A0770u);
    ctx->pc = 0x1A076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0768u;
    // 0x1a076c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0128u, 0x1A0768u, 0x1A0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0770u;
label_1a0770:
    // 0x1a0770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0774: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0774u;
    SET_GPR_U32(ctx, 31, 0x1A077Cu);
    ctx->pc = 0x1A0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0774u;
    // 0x1a0778: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0774u, 0x1A077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A077Cu;
label_1a077c:
    // 0x1a077c: 0xc06804a  jal         func_1A0128
    ctx->pc = 0x1A077Cu;
    SET_GPR_U32(ctx, 31, 0x1A0784u);
    ctx->pc = 0x1A0780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A077Cu;
    // 0x1a0780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0128u, 0x1A077Cu, 0x1A0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0788: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0788u;
    SET_GPR_U32(ctx, 31, 0x1A0790u);
    ctx->pc = 0x1A078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0788u;
    // 0x1a078c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0788u, 0x1A0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0790u;
label_1a0790:
    // 0x1a0790: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a0794: 0x8f858e0c  lw          $a1, -0x71F4($gp)
    ctx->pc = 0x1a0794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938124)));
    // 0x1a0798: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A0798u;
    SET_GPR_U32(ctx, 31, 0x1A07A0u);
    ctx->pc = 0x1A079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0798u;
    // 0x1a079c: 0x24849008  addiu       $a0, $a0, -0x6FF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A0798u, 0x1A07A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07A0u;
label_1a07a0:
    // 0x1a07a0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a07a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a07a4: 0x24a59018  addiu       $a1, $a1, -0x6FE8
    ctx->pc = 0x1a07a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938648));
    // 0x1a07a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a07a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07ac: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A07ACu;
    SET_GPR_U32(ctx, 31, 0x1A07B4u);
    ctx->pc = 0x1A07B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A07ACu;
    // 0x1a07b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A07ACu, 0x1A07B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07B4u;
label_1a07b4:
    // 0x1a07b4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1A07B4u;
    {
        const bool branch_taken_0x1a07b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a07b4) {
            ctx->pc = 0x1A0948u;
            goto label_1a0948;
        }
    }
    ctx->pc = 0x1A07BCu;
    // 0x1a07bc: 0x0  nop
    ctx->pc = 0x1a07bcu;
    // NOP
label_1a07c0:
    // 0x1a07c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A07C0u;
    {
        const bool branch_taken_0x1a07c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C0u;
        // 0x1a07c4: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07c0) {
            ctx->pc = 0x1A07E0u;
            goto label_1a07e0;
        }
    }
    ctx->pc = 0x1A07C8u;
    // 0x1a07c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a07cc: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x1a07ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
    // 0x1a07d0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1a07d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a07d4: 0x8ce7fa00  lw          $a3, -0x600($a3)
    ctx->pc = 0x1a07d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294965760)));
    // 0x1a07d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A07D8u;
    {
        const bool branch_taken_0x1a07d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07D8u;
        // 0x1a07dc: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07d8) {
            ctx->pc = 0x1A07E8u;
            goto label_1a07e8;
        }
    }
    ctx->pc = 0x1A07E0u;
label_1a07e0:
    // 0x1a07e0: 0x2447d8c8  addiu       $a3, $v0, -0x2738
    ctx->pc = 0x1a07e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957256));
    // 0x1a07e4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a07e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a07e8:
    // 0x1a07e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a07e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07ec: 0x24a59030  addiu       $a1, $a1, -0x6FD0
    ctx->pc = 0x1a07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938672));
    // 0x1a07f0: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A07F0u;
    SET_GPR_U32(ctx, 31, 0x1A07F8u);
    ctx->pc = 0x1A07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A07F0u;
    // 0x1a07f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A07F0u, 0x1A07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07F8u;
label_1a07f8:
    // 0x1a07f8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1a07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1a07fc: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A07FCu;
    {
        const bool branch_taken_0x1a07fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a07fc) {
            ctx->pc = 0x1A0800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A07FCu;
            // 0x1a0800: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0828u;
            goto label_1a0828;
        }
    }
    ctx->pc = 0x1A0804u;
    // 0x1a0804: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x1a0804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a0808: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a080c: 0x24a59048  addiu       $a1, $a1, -0x6FB8
    ctx->pc = 0x1a080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938696));
    // 0x1a0810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0814: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A0814u;
    SET_GPR_U32(ctx, 31, 0x1A081Cu);
    ctx->pc = 0x1A0818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0814u;
    // 0x1a0818: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A0814u, 0x1A081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A081Cu;
label_1a081c:
    // 0x1a081c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A081Cu;
    {
        const bool branch_taken_0x1a081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A081Cu;
        // 0x1a0820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a081c) {
            ctx->pc = 0x1A0874u;
            goto label_1a0874;
        }
    }
    ctx->pc = 0x1A0824u;
    // 0x1a0824: 0x0  nop
    ctx->pc = 0x1a0824u;
    // NOP
label_1a0828:
    // 0x1a0828: 0x56020009  bnel        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0828u;
    {
        const bool branch_taken_0x1a0828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0828) {
            ctx->pc = 0x1A082Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0828u;
            // 0x1a082c: 0x2a020035  slti        $v0, $s0, 0x35 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)53) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0850u;
            goto label_1a0850;
        }
    }
    ctx->pc = 0x1A0830u;
    // 0x1a0830: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x1a0830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a0834: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a0838: 0x24a59058  addiu       $a1, $a1, -0x6FA8
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938712));
    // 0x1a083c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a083cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0840: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A0840u;
    SET_GPR_U32(ctx, 31, 0x1A0848u);
    ctx->pc = 0x1A0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0840u;
    // 0x1a0844: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A0840u, 0x1A0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0848u;
label_1a0848:
    // 0x1a0848: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A0848u;
    {
        const bool branch_taken_0x1a0848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0848u;
        // 0x1a084c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0848) {
            ctx->pc = 0x1A0874u;
            goto label_1a0874;
        }
    }
    ctx->pc = 0x1A0850u;
label_1a0850:
    // 0x1a0850: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0850u;
    {
        const bool branch_taken_0x1a0850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0850u;
        // 0x1a0854: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0850) {
            ctx->pc = 0x1A0888u;
            goto label_1a0888;
        }
    }
    ctx->pc = 0x1A0858u;
    // 0x1a0858: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x1a0858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a085c: 0x8f8790e8  lw          $a3, -0x6F18($gp)
    ctx->pc = 0x1a085cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x1a0860: 0x24a59068  addiu       $a1, $a1, -0x6F98
    ctx->pc = 0x1a0860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938728));
    // 0x1a0864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0868: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A0868u;
    SET_GPR_U32(ctx, 31, 0x1A0870u);
    ctx->pc = 0x1A086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0868u;
    // 0x1a086c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A0868u, 0x1A0870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0870u;
label_1a0870:
    // 0x1a0870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0874:
    // 0x1a0874: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x1A0874u;
    SET_GPR_U32(ctx, 31, 0x1A087Cu);
    ctx->pc = 0x1A0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0874u;
    // 0x1a0878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x1A0874u, 0x1A087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A087Cu;
label_1a087c:
    // 0x1a087c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1A087Cu;
    {
        const bool branch_taken_0x1a087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a087c) {
            ctx->pc = 0x1A0948u;
            goto label_1a0948;
        }
    }
    ctx->pc = 0x1A0884u;
    // 0x1a0884: 0x0  nop
    ctx->pc = 0x1a0884u;
    // NOP
label_1a0888:
    // 0x1a0888: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x1A0888u;
    {
        const bool branch_taken_0x1a0888 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0888u;
        // 0x1a088c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0888) {
            ctx->pc = 0x1A0948u;
            goto label_1a0948;
        }
    }
    ctx->pc = 0x1A0890u;
    // 0x1a0890: 0x56020025  bnel        $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A0890u;
    {
        const bool branch_taken_0x1a0890 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0890) {
            ctx->pc = 0x1A0894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0890u;
            // 0x1a0894: 0x27b00100  addiu       $s0, $sp, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0928u;
            goto label_1a0928;
        }
    }
    ctx->pc = 0x1A0898u;
    // 0x1a0898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a089c: 0xc0680f6  jal         func_1A03D8
    ctx->pc = 0x1A089Cu;
    SET_GPR_U32(ctx, 31, 0x1A08A4u);
    ctx->pc = 0x1A08A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A089Cu;
    // 0x1a08a0: 0x3c100026  lui         $s0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1A089Cu, 0x1A08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08A4u;
label_1a08a4:
    // 0x1a08a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a08a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a08a8: 0xc0680f6  jal         func_1A03D8
    ctx->pc = 0x1A08A8u;
    SET_GPR_U32(ctx, 31, 0x1A08B0u);
    ctx->pc = 0x1A08ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08A8u;
    // 0x1a08ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1A08A8u, 0x1A08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08B0u;
label_1a08b0:
    // 0x1a08b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a08b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08b4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a08b8: 0x8c451134  lw          $a1, 0x1134($v0)
    ctx->pc = 0x1a08b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x281134u));
    // 0x1a08bc: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a08bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a08c0: 0x24848fd8  addiu       $a0, $a0, -0x7028
    ctx->pc = 0x1a08c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938584));
    // 0x1a08c4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A08C4u;
    SET_GPR_U32(ctx, 31, 0x1A08CCu);
    ctx->pc = 0x1A08C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08C4u;
    // 0x1a08c8: 0x26108fe8  addiu       $s0, $s0, -0x7018 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A08C4u, 0x1A08CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08CCu;
label_1a08cc:
    // 0x1a08cc: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1a08ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a08d0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A08D0u;
    SET_GPR_U32(ctx, 31, 0x1A08D8u);
    ctx->pc = 0x1A08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08D0u;
    // 0x1a08d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A08D0u, 0x1A08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08D8u;
label_1a08d8:
    // 0x1a08d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a08d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08dc: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1a08dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a08e0: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1a08e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1a08e4: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A08E4u;
    SET_GPR_U32(ctx, 31, 0x1A08ECu);
    ctx->pc = 0x1A08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08E4u;
    // 0x1a08e8: 0x26108ff8  addiu       $s0, $s0, -0x7008 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A08E4u, 0x1A08ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08ECu;
label_1a08ec:
    // 0x1a08ec: 0xc06804a  jal         func_1A0128
    ctx->pc = 0x1A08ECu;
    SET_GPR_U32(ctx, 31, 0x1A08F4u);
    ctx->pc = 0x1A08F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08ECu;
    // 0x1a08f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0128u, 0x1A08ECu, 0x1A08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08F4u;
label_1a08f4:
    // 0x1a08f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a08f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08f8: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A08F8u;
    SET_GPR_U32(ctx, 31, 0x1A0900u);
    ctx->pc = 0x1A08FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08F8u;
    // 0x1a08fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A08F8u, 0x1A0900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0900u;
label_1a0900:
    // 0x1a0900: 0xc06804a  jal         func_1A0128
    ctx->pc = 0x1A0900u;
    SET_GPR_U32(ctx, 31, 0x1A0908u);
    ctx->pc = 0x1A0904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0900u;
    // 0x1a0904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0128u, 0x1A0900u, 0x1A0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0908u;
label_1a0908:
    // 0x1a0908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a090c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A090Cu;
    SET_GPR_U32(ctx, 31, 0x1A0914u);
    ctx->pc = 0x1A0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A090Cu;
    // 0x1a0910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A090Cu, 0x1A0914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0914u;
label_1a0914:
    // 0x1a0914: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1a0914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1a0918: 0x8f858e0c  lw          $a1, -0x71F4($gp)
    ctx->pc = 0x1a0918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938124)));
    // 0x1a091c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A091Cu;
    SET_GPR_U32(ctx, 31, 0x1A0924u);
    ctx->pc = 0x1A0920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A091Cu;
    // 0x1a0920: 0x24849008  addiu       $a0, $a0, -0x6FF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A091Cu, 0x1A0924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0924u;
label_1a0924:
    // 0x1a0924: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x1a0924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1a0928:
    // 0x1a0928: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a0928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a092c: 0x24a59080  addiu       $a1, $a1, -0x6F80
    ctx->pc = 0x1a092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938752));
    // 0x1a0930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0934: 0xc066d1c  jal         func_19B470
    ctx->pc = 0x1A0934u;
    SET_GPR_U32(ctx, 31, 0x1A093Cu);
    ctx->pc = 0x1A0938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0934u;
    // 0x1a0938: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B470u, 0x1A0934u, 0x1A093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A093Cu;
label_1a093c:
    // 0x1a093c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a093cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0940: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x1A0940u;
    SET_GPR_U32(ctx, 31, 0x1A0948u);
    ctx->pc = 0x1A0944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0940u;
    // 0x1a0944: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x1A0940u, 0x1A0948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0948u;
label_1a0948:
    // 0x1a0948: 0xc05bcca  jal         func_16F328
    ctx->pc = 0x1A0948u;
    SET_GPR_U32(ctx, 31, 0x1A0950u);
    ctx->pc = 0x1A094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0948u;
    // 0x1a094c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F328u, 0x1A0948u, 0x1A0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0950u;
label_1a0950:
    // 0x1a0950: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x1a0950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a0954: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x1a0954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1a0958: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x1a0958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a095c: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x1a095cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1a0960: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x1a0960u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a0964: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x1a0964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1a0968: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0968u;
        // 0x1a096c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0970u;
}
