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

// Function: _multiply
// Address: 0x1d57a8 - 0x1d59b4
void _multiply_0x1d57a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_multiply_0x1d57a8");
#endif

    switch (ctx->pc) {
        case 0x1d580cu: goto label_1d580c;
        case 0x1d5830u: goto label_1d5830;
        case 0x1d5870u: goto label_1d5870;
        case 0x1d5888u: goto label_1d5888;
        case 0x1d5900u: goto label_1d5900;
        case 0x1d5968u: goto label_1d5968;
        default: break;
    }

    ctx->pc = 0x1d57a8u;

    // 0x1d57a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d57a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d57ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d57acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d57b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d57b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d57b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d57b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d57b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d57bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d57c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d57c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d57c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d57c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d57c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d57c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d57cc: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x1d57ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d57d0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x1d57d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d57d4: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x1d57d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d57d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D57D8u;
    {
        const bool branch_taken_0x1d57d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d57d8) {
            ctx->pc = 0x1D57DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D57D8u;
            // 0x1d57dc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D57F8u;
            goto label_1d57f8;
        }
    }
    ctx->pc = 0x1D57E0u;
    // 0x1d57e0: 0x200c02d  daddu       $t8, $s0, $zero
    ctx->pc = 0x1d57e0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57e4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1d57e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57e8: 0x300902d  daddu       $s2, $t8, $zero
    ctx->pc = 0x1d57e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57ec: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1d57ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d57f0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x1d57f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d57f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d57f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d57f8:
    // 0x1d57f8: 0x271a021  addu        $s4, $s3, $s1
    ctx->pc = 0x1d57f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1d57fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d5800: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x1d5800u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d5804: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5804u;
    SET_GPR_U32(ctx, 31, 0x1D580Cu);
    ctx->pc = 0x1D5808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5804u;
    // 0x1d5808: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5804u, 0x1D580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D580Cu;
label_1d580c:
    // 0x1d580c: 0x14c880  sll         $t9, $s4, 2
    ctx->pc = 0x1d580cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1d5810: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x1d5810u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5814: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x1d5814u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x1d5818: 0x1f96821  addu        $t5, $t7, $t9
    ctx->pc = 0x1d5818u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x1d581c: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x1d581cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1d5820: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5820u;
    {
        const bool branch_taken_0x1d5820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5820u;
        // 0x1d5824: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5820) {
            ctx->pc = 0x1D584Cu;
            goto label_1d584c;
        }
    }
    ctx->pc = 0x1D5828u;
    // 0x1d5828: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1d5828u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1d582c: 0x0  nop
    ctx->pc = 0x1d582cu;
    // NOP
label_1d5830:
    // 0x1d5830: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d5830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d5834: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x1d5834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1d5838: 0x0  nop
    ctx->pc = 0x1d5838u;
    // NOP
    // 0x1d583c: 0x0  nop
    ctx->pc = 0x1d583cu;
    // NOP
    // 0x1d5840: 0x0  nop
    ctx->pc = 0x1d5840u;
    // NOP
    // 0x1d5844: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5844u;
    {
        const bool branch_taken_0x1d5844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5844) {
            ctx->pc = 0x1D5848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5844u;
            // 0x1d5848: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5830;
        }
    }
    ctx->pc = 0x1D584Cu;
label_1d584c:
    // 0x1d584c: 0x264b0014  addiu       $t3, $s2, 0x14
    ctx->pc = 0x1d584cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1d5850: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d5854: 0x1628821  addu        $s1, $t3, $v0
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1d5858: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1d5858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1d585c: 0x260d0014  addiu       $t5, $s0, 0x14
    ctx->pc = 0x1d585cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1d5860: 0x171182b  sltu        $v1, $t3, $s1
    ctx->pc = 0x1d5860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d5864: 0x1a27021  addu        $t6, $t5, $v0
    ctx->pc = 0x1d5864u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1d5868: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1D5868u;
    {
        const bool branch_taken_0x1d5868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5868u;
        // 0x1d586c: 0x1e0602d  daddu       $t4, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5868) {
            ctx->pc = 0x1D5964u;
            goto label_1d5964;
        }
    }
    ctx->pc = 0x1D5870u;
label_1d5870:
    // 0x1d5870: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1d5870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d5874: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x1d5874u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d5878: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5878u;
    {
        const bool branch_taken_0x1d5878 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5878u;
        // 0x1d587c: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5878) {
            ctx->pc = 0x1D58E0u;
            goto label_1d58e0;
        }
    }
    ctx->pc = 0x1D5880u;
    // 0x1d5880: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x1d5880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5884: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5884u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5888:
    // 0x1d5888: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d588c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d588cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d5890: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1d5890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5894: 0x10e302b  sltu        $a2, $t0, $t6
    ctx->pc = 0x1d5894u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1d5898: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1d5898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d589c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d589cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d58a0: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x1d58a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d58a4: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x1d58a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d58a8: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x1d58a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d58ac: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1d58acu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1d58b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d58b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d58b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d58b8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1d58b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d58bc: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x1d58bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d58c0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x1d58c0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d58c4: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x1d58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d58c8: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x1d58c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d58cc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d58d0: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D58D0u;
    {
        const bool branch_taken_0x1d58d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58D0u;
        // 0x1d58d4: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58d0) {
            ctx->pc = 0x1D5888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5888;
        }
    }
    ctx->pc = 0x1D58D8u;
    // 0x1d58d8: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x1d58d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x1d58dc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1d58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1d58e0:
    // 0x1d58e0: 0x24c02  srl         $t1, $v0, 16
    ctx->pc = 0x1d58e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d58e4: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D58E4u;
    {
        const bool branch_taken_0x1d58e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58E4u;
        // 0x1d58e8: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58e4) {
            ctx->pc = 0x1D5954u;
            goto label_1d5954;
        }
    }
    ctx->pc = 0x1D58ECu;
    // 0x1d58ec: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x1d58ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d58f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d58f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d58f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d58fc: 0x0  nop
    ctx->pc = 0x1d58fcu;
    // NOP
label_1d5900:
    // 0x1d5900: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5904: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d5904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d5908: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x1d5908u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d590c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1d590cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1d5910: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1d5910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1d5914: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1d5918: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x1d5918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d591c: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x1d591cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5920: 0x10e282b  sltu        $a1, $t0, $t6
    ctx->pc = 0x1d5920u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1d5924: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d5924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d5928: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1d5928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d592c: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x1d592cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d5930: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d5930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d5934: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5938: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x1d5938u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d593c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1d593cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1d5940: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5944: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x1d5944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5948: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D5948u;
    {
        const bool branch_taken_0x1d5948 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5948u;
        // 0x1d594c: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5948) {
            ctx->pc = 0x1D5900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5900;
        }
    }
    ctx->pc = 0x1D5950u;
    // 0x1d5950: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1d5950u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_1d5954:
    // 0x1d5954: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1d5954u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1d5958: 0x171102b  sltu        $v0, $t3, $s1
    ctx->pc = 0x1d5958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d595c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1D595Cu;
    {
        const bool branch_taken_0x1d595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D595Cu;
        // 0x1d5960: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d595c) {
            ctx->pc = 0x1D5870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5870;
        }
    }
    ctx->pc = 0x1D5964u;
label_1d5964:
    // 0x1d5964: 0x1f93821  addu        $a3, $t7, $t9
    ctx->pc = 0x1d5964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_1d5968:
    // 0x1d5968: 0x5a800009  blezl       $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5968u;
    {
        const bool branch_taken_0x1d5968 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1d5968) {
            ctx->pc = 0x1D596Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5968u;
            // 0x1d596c: 0xaf140010  sw          $s4, 0x10($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5990u;
            goto label_1d5990;
        }
    }
    ctx->pc = 0x1D5970u;
    // 0x1d5970: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1d5970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x1d5974: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d5974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5978: 0x0  nop
    ctx->pc = 0x1d5978u;
    // NOP
    // 0x1d597c: 0x0  nop
    ctx->pc = 0x1d597cu;
    // NOP
    // 0x1d5980: 0x0  nop
    ctx->pc = 0x1d5980u;
    // NOP
    // 0x1d5984: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D5984u;
    {
        const bool branch_taken_0x1d5984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5984) {
            ctx->pc = 0x1D5988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5984u;
            // 0x1d5988: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5968;
        }
    }
    ctx->pc = 0x1D598Cu;
    // 0x1d598c: 0xaf140010  sw          $s4, 0x10($t8)
    ctx->pc = 0x1d598cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
label_1d5990:
    // 0x1d5990: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x1d5990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d599c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d599cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d59a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d59a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d59a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d59a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d59a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d59a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d59ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D59ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59ACu;
        // 0x1d59b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D59ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D59B4u;
}
