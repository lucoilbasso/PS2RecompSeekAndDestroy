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

// Function: Cmd_LOAD_PARTS_Entry__FP15BsSCDEntControl
// Address: 0x103098 - 0x10326c
void Cmd_LOAD_PARTS_Entry__FP15BsSCDEntControl_0x103098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_PARTS_Entry__FP15BsSCDEntControl_0x103098");
#endif

    switch (ctx->pc) {
        case 0x1030d0u: goto label_1030d0;
        case 0x1030e8u: goto label_1030e8;
        case 0x103118u: goto label_103118;
        case 0x103154u: goto label_103154;
        case 0x103160u: goto label_103160;
        case 0x103180u: goto label_103180;
        case 0x103188u: goto label_103188;
        case 0x1031a0u: goto label_1031a0;
        case 0x1031b4u: goto label_1031b4;
        case 0x1031c4u: goto label_1031c4;
        case 0x1031d0u: goto label_1031d0;
        case 0x1031e0u: goto label_1031e0;
        case 0x1031f0u: goto label_1031f0;
        case 0x1031f8u: goto label_1031f8;
        case 0x103214u: goto label_103214;
        case 0x10321cu: goto label_10321c;
        case 0x103224u: goto label_103224;
        case 0x10322cu: goto label_10322c;
        case 0x103234u: goto label_103234;
        case 0x103244u: goto label_103244;
        default: break;
    }

    ctx->pc = 0x103098u;

    // 0x103098: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x103098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10309c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x10309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1030a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1030a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1030a4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1030a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1030a8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1030a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1030ac: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1030acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1030b0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1030b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1030b4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1030b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1030b8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1030b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1030bc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1030bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1030c0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1030c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1030c4: 0x8630000e  lh          $s0, 0xE($s1)
    ctx->pc = 0x1030c4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1030c8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1030C8u;
    SET_GPR_U32(ctx, 31, 0x1030D0u);
    ctx->pc = 0x1030CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1030C8u;
    // 0x1030cc: 0x8c540044  lw          $s4, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1030C8u, 0x1030D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030D0u;
label_1030d0:
    // 0x1030d0: 0x16000035  bnez        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1030D0u;
    {
        const bool branch_taken_0x1030d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1030D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030D0u;
        // 0x1030d4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030d0) {
            ctx->pc = 0x1031A8u;
            goto label_1031a8;
        }
    }
    ctx->pc = 0x1030D8u;
    // 0x1030d8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1030d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1030dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1030dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1030e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1030E0u;
    SET_GPR_U32(ctx, 31, 0x1030E8u);
    ctx->pc = 0x1030E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1030E0u;
    // 0x1030e4: 0x8c550384  lw          $s5, 0x384($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 900)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1030E0u, 0x1030E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1030E8u;
label_1030e8:
    // 0x1030e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1030e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1030ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1030ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1030f0: 0x16c20016  bne         $s6, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1030F0u;
    {
        const bool branch_taken_0x1030f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1030F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030F0u;
        // 0x1030f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030f0) {
            ctx->pc = 0x10314Cu;
            goto label_10314c;
        }
    }
    ctx->pc = 0x1030F8u;
    // 0x1030f8: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x1030f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x1030fc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1030fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103100: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x103100u;
    {
        const bool branch_taken_0x103100 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x103104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103100u;
        // 0x103104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103100) {
            ctx->pc = 0x10313Cu;
            goto label_10313c;
        }
    }
    ctx->pc = 0x103108u;
    // 0x103108: 0x8e870040  lw          $a3, 0x40($s4)
    ctx->pc = 0x103108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x10310c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x10310cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103110: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x103110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103114: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x103114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_103118:
    // 0x103118: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x103118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x10311c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x10311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x103120: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x103120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x103124: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x103124u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x103128: 0x10690005  beq         $v1, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x103128u;
    {
        const bool branch_taken_0x103128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x10312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103128u;
        // 0x10312c: 0xe21021  addu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103128) {
            ctx->pc = 0x103140u;
            goto label_103140;
        }
    }
    ctx->pc = 0x103130u;
    // 0x103130: 0x0  nop
    ctx->pc = 0x103130u;
    // NOP
    // 0x103134: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x103134u;
    {
        const bool branch_taken_0x103134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x103134) {
            ctx->pc = 0x103138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103134u;
            // 0x103138: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103118;
        }
    }
    ctx->pc = 0x10313Cu;
label_10313c:
    // 0x10313c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10313cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103140:
    // 0x103140: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x103140u;
    {
        const bool branch_taken_0x103140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103140u;
        // 0x103144: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103140) {
            ctx->pc = 0x103248u;
            goto label_103248;
        }
    }
    ctx->pc = 0x103148u;
    // 0x103148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x103148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10314c:
    // 0x10314c: 0xc0463ea  jal         func_118FA8
    ctx->pc = 0x10314Cu;
    SET_GPR_U32(ctx, 31, 0x103154u);
    ctx->pc = 0x103150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10314Cu;
    // 0x103150: 0x327100ff  andi        $s1, $s3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FA8u, 0x10314Cu, 0x103154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103154u;
label_103154:
    // 0x103154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103158: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x103158u;
    SET_GPR_U32(ctx, 31, 0x103160u);
    ctx->pc = 0x10315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103158u;
    // 0x10315c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x103158u, 0x103160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103160u;
label_103160:
    // 0x103160: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x103160u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x103164: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x103164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103168: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x103168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x10316c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103170: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x103170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x103174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x103174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103178: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x103178u;
    SET_GPR_U32(ctx, 31, 0x103180u);
    ctx->pc = 0x10317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103178u;
    // 0x10317c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x103178u, 0x103180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103180u;
label_103180:
    // 0x103180: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x103180u;
    SET_GPR_U32(ctx, 31, 0x103188u);
    ctx->pc = 0x103184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103180u;
    // 0x103184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x103180u, 0x103188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103188u;
label_103188:
    // 0x103188: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x103188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10318c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10318cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103190: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x103190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103194: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x103194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103198: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x103198u;
    SET_GPR_U32(ctx, 31, 0x1031A0u);
    ctx->pc = 0x10319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103198u;
    // 0x10319c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x103198u, 0x1031A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031A0u;
label_1031a0:
    // 0x1031a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1031A0u;
    {
        const bool branch_taken_0x1031a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1031A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031A0u;
        // 0x1031a4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031a0) {
            ctx->pc = 0x103200u;
            goto label_103200;
        }
    }
    ctx->pc = 0x1031A8u;
label_1031a8:
    // 0x1031a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1031a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031ac: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1031ACu;
    SET_GPR_U32(ctx, 31, 0x1031B4u);
    ctx->pc = 0x1031B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031ACu;
    // 0x1031b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1031ACu, 0x1031B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031B4u;
label_1031b4:
    // 0x1031b4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1031b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1031b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1031b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031bc: 0xc067392  jal         func_19CE48
    ctx->pc = 0x1031BCu;
    SET_GPR_U32(ctx, 31, 0x1031C4u);
    ctx->pc = 0x1031C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031BCu;
    // 0x1031c0: 0x24a5cf30  addiu       $a1, $a1, -0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CE48u, 0x1031BCu, 0x1031C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031C4u;
label_1031c4:
    // 0x1031c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1031c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031c8: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1031C8u;
    SET_GPR_U32(ctx, 31, 0x1031D0u);
    ctx->pc = 0x1031CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031C8u;
    // 0x1031cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1031C8u, 0x1031D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031D0u;
label_1031d0:
    // 0x1031d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1031d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1031d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031d8: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x1031D8u;
    SET_GPR_U32(ctx, 31, 0x1031E0u);
    ctx->pc = 0x1031DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031D8u;
    // 0x1031dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x1031D8u, 0x1031E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031E0u;
label_1031e0:
    // 0x1031e0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1031e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1031e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1031e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031e8: 0xc067374  jal         func_19CDD0
    ctx->pc = 0x1031E8u;
    SET_GPR_U32(ctx, 31, 0x1031F0u);
    ctx->pc = 0x1031ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031E8u;
    // 0x1031ec: 0x24a5cf38  addiu       $a1, $a1, -0x30C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDD0u, 0x1031E8u, 0x1031F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031F0u;
label_1031f0:
    // 0x1031f0: 0xc05fd52  jal         func_17F548
    ctx->pc = 0x1031F0u;
    SET_GPR_U32(ctx, 31, 0x1031F8u);
    ctx->pc = 0x1031F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031F0u;
    // 0x1031f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F548u, 0x1031F0u, 0x1031F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031F8u;
label_1031f8:
    // 0x1031f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1031f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1031fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_103200:
    // 0x103200: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x103200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103204: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x103204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103208: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x103208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10320c: 0xc040b06  jal         func_102C18
    ctx->pc = 0x10320Cu;
    SET_GPR_U32(ctx, 31, 0x103214u);
    ctx->pc = 0x103210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10320Cu;
    // 0x103210: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102C18u, 0x10320Cu, 0x103214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103214u;
label_103214:
    // 0x103214: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x103214u;
    SET_GPR_U32(ctx, 31, 0x10321Cu);
    ctx->pc = 0x103218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103214u;
    // 0x103218: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x103214u, 0x10321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10321Cu;
label_10321c:
    // 0x10321c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10321Cu;
    SET_GPR_U32(ctx, 31, 0x103224u);
    ctx->pc = 0x103220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10321Cu;
    // 0x103220: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10321Cu, 0x103224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103224u;
label_103224:
    // 0x103224: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x103224u;
    SET_GPR_U32(ctx, 31, 0x10322Cu);
    ctx->pc = 0x103228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103224u;
    // 0x103228: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x103224u, 0x10322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10322Cu;
label_10322c:
    // 0x10322c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10322Cu;
    SET_GPR_U32(ctx, 31, 0x103234u);
    ctx->pc = 0x103230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10322Cu;
    // 0x103230: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10322Cu, 0x103234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103234u;
label_103234:
    // 0x103234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103238: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x103238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10323c: 0xc05fe36  jal         func_17F8D8
    ctx->pc = 0x10323Cu;
    SET_GPR_U32(ctx, 31, 0x103244u);
    ctx->pc = 0x103240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10323Cu;
    // 0x103240: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F8D8u, 0x10323Cu, 0x103244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103244u;
label_103244:
    // 0x103244: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x103244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_103248:
    // 0x103248: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x103248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10324c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10324cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x103250: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x103250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x103254: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x103254u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x103258: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x103258u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x10325c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10325cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x103260: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x103260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x103264: 0x3e00008  jr          $ra
    ctx->pc = 0x103264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103264u;
        // 0x103268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10326Cu;
}
