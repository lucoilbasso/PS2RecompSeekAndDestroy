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

// Function: Cmd_OBJ_MOTION_Entry__FP15BsSCDEntControl
// Address: 0x109138 - 0x1092ec
void Cmd_OBJ_MOTION_Entry__FP15BsSCDEntControl_0x109138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_OBJ_MOTION_Entry__FP15BsSCDEntControl_0x109138");
#endif

    switch (ctx->pc) {
        case 0x10917cu: goto label_10917c;
        case 0x109188u: goto label_109188;
        case 0x109194u: goto label_109194;
        case 0x1091d0u: goto label_1091d0;
        case 0x1091e0u: goto label_1091e0;
        case 0x109200u: goto label_109200;
        case 0x109210u: goto label_109210;
        case 0x10925cu: goto label_10925c;
        case 0x109280u: goto label_109280;
        case 0x109298u: goto label_109298;
        case 0x1092a8u: goto label_1092a8;
        case 0x1092c4u: goto label_1092c4;
        default: break;
    }

    ctx->pc = 0x109138u;

    // 0x109138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10913c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10913cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109148: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x109148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10914c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10914cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109150: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x109150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x109154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x109154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109158: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x109158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10915c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10915cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x109160: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x109160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x109164: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x109164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x109168: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x109168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10916c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x10916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x109170: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x109170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109174: 0xc04110c  jal         func_104430
    ctx->pc = 0x109174u;
    SET_GPR_U32(ctx, 31, 0x10917Cu);
    ctx->pc = 0x109178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109174u;
    // 0x109178: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x109174u, 0x10917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10917Cu;
label_10917c:
    // 0x10917c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109180: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x109180u;
    SET_GPR_U32(ctx, 31, 0x109188u);
    ctx->pc = 0x109184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109180u;
    // 0x109184: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x109180u, 0x109188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109188u;
label_109188:
    // 0x109188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10918c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10918Cu;
    SET_GPR_U32(ctx, 31, 0x109194u);
    ctx->pc = 0x109190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10918Cu;
    // 0x109190: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10918Cu, 0x109194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109194u;
label_109194:
    // 0x109194: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x109194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109198: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x109198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10919c: 0x16000028  bnez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x10919Cu;
    {
        const bool branch_taken_0x10919c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1091A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10919Cu;
        // 0x1091a0: 0x2456fffd  addiu       $s6, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10919c) {
            ctx->pc = 0x109240u;
            goto label_109240;
        }
    }
    ctx->pc = 0x1091A4u;
    // 0x1091a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1091a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1091a8: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1091A8u;
    {
        const bool branch_taken_0x1091a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1091ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091A8u;
        // 0x1091ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091a8) {
            ctx->pc = 0x1091C0u;
            goto label_1091c0;
        }
    }
    ctx->pc = 0x1091B0u;
    // 0x1091b0: 0x12820011  beq         $s4, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1091B0u;
    {
        const bool branch_taken_0x1091b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091B0u;
        // 0x1091b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091b0) {
            ctx->pc = 0x1091F8u;
            goto label_1091f8;
        }
    }
    ctx->pc = 0x1091B8u;
    // 0x1091b8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1091B8u;
    {
        const bool branch_taken_0x1091b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091B8u;
        // 0x1091bc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091b8) {
            ctx->pc = 0x1092CCu;
            goto label_1092cc;
        }
    }
    ctx->pc = 0x1091C0u;
label_1091c0:
    // 0x1091c0: 0x8e300148  lw          $s0, 0x148($s1)
    ctx->pc = 0x1091c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1091c4: 0x52000040  beql        $s0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x1091C4u;
    {
        const bool branch_taken_0x1091c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1091c4) {
            ctx->pc = 0x1091C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1091C4u;
            // 0x1091c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1092C8u;
            goto label_1092c8;
        }
    }
    ctx->pc = 0x1091CCu;
    // 0x1091cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1091ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1091d0:
    // 0x1091d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1091d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1091d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091d8: 0xc068866  jal         func_1A2198
    ctx->pc = 0x1091D8u;
    SET_GPR_U32(ctx, 31, 0x1091E0u);
    ctx->pc = 0x1091DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091D8u;
    // 0x1091dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2198u, 0x1091D8u, 0x1091E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1091E0u;
label_1091e0:
    // 0x1091e0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1091e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1091e4: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1091E4u;
    {
        const bool branch_taken_0x1091e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1091e4) {
            ctx->pc = 0x1091E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1091E4u;
            // 0x1091e8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1091D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1091d0;
        }
    }
    ctx->pc = 0x1091ECu;
    // 0x1091ec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1091ECu;
    {
        const bool branch_taken_0x1091ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1091F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091ECu;
        // 0x1091f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1091ec) {
            ctx->pc = 0x1092C8u;
            goto label_1092c8;
        }
    }
    ctx->pc = 0x1091F4u;
    // 0x1091f4: 0x0  nop
    ctx->pc = 0x1091f4u;
    // NOP
label_1091f8:
    // 0x1091f8: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1091F8u;
    SET_GPR_U32(ctx, 31, 0x109200u);
    ctx->pc = 0x1091FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091F8u;
    // 0x1091fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1091F8u, 0x109200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109200u;
label_109200:
    // 0x109200: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x109200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109204: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x109204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x109208: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x109208u;
    {
        const bool branch_taken_0x109208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109208u;
        // 0x10920c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109208) {
            ctx->pc = 0x109234u;
            goto label_109234;
        }
    }
    ctx->pc = 0x109210u;
label_109210:
    // 0x109210: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x109210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x109214: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x109214u;
    {
        const bool branch_taken_0x109214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109214u;
        // 0x109218: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109214) {
            ctx->pc = 0x109220u;
            goto label_109220;
        }
    }
    ctx->pc = 0x10921Cu;
    // 0x10921c: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x10921cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_109220:
    // 0x109220: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x109220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x109224: 0x0  nop
    ctx->pc = 0x109224u;
    // NOP
    // 0x109228: 0x0  nop
    ctx->pc = 0x109228u;
    // NOP
    // 0x10922c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10922Cu;
    {
        const bool branch_taken_0x10922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10922Cu;
        // 0x109230: 0xa42825  or          $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10922c) {
            ctx->pc = 0x109210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109210;
        }
    }
    ctx->pc = 0x109234u;
label_109234:
    // 0x109234: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x109234u;
    {
        const bool branch_taken_0x109234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109234u;
        // 0x109238: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109234) {
            ctx->pc = 0x1092C4u;
            goto label_1092c4;
        }
    }
    ctx->pc = 0x10923Cu;
    // 0x10923c: 0x0  nop
    ctx->pc = 0x10923cu;
    // NOP
label_109240:
    // 0x109240: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x109240u;
    {
        const bool branch_taken_0x109240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x109244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109240u;
        // 0x109244: 0x2a82000a  slti        $v0, $s4, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109240) {
            ctx->pc = 0x1092C4u;
            goto label_1092c4;
        }
    }
    ctx->pc = 0x109248u;
    // 0x109248: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x109248u;
    {
        const bool branch_taken_0x109248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109248u;
        // 0x10924c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109248) {
            ctx->pc = 0x1092A0u;
            goto label_1092a0;
        }
    }
    ctx->pc = 0x109250u;
    // 0x109250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109254: 0xc04201a  jal         func_108068
    ctx->pc = 0x109254u;
    SET_GPR_U32(ctx, 31, 0x10925Cu);
    ctx->pc = 0x109258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109254u;
    // 0x109258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108068u, 0x109254u, 0x10925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10925Cu;
label_10925c:
    // 0x10925c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10925cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109260: 0x16600013  bnez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x109260u;
    {
        const bool branch_taken_0x109260 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x109264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109260u;
        // 0x109264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109260) {
            ctx->pc = 0x1092B0u;
            goto label_1092b0;
        }
    }
    ctx->pc = 0x109268u;
    // 0x109268: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x109268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x10926c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x109270: 0x52020010  beql        $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x109270u;
    {
        const bool branch_taken_0x109270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x109270) {
            ctx->pc = 0x109274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109270u;
            // 0x109274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1092B4u;
            goto label_1092b4;
        }
    }
    ctx->pc = 0x109278u;
    // 0x109278: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x109278u;
    SET_GPR_U32(ctx, 31, 0x109280u);
    ctx->pc = 0x10927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109278u;
    // 0x10927c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x109278u, 0x109280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109280u;
label_109280:
    // 0x109280: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x109280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x109284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109288: 0x24a53ac0  addiu       $a1, $a1, 0x3AC0
    ctx->pc = 0x109288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15040));
    // 0x10928c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x109290: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x109290u;
    SET_GPR_U32(ctx, 31, 0x109298u);
    ctx->pc = 0x109294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109290u;
    // 0x109294: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x109290u, 0x109298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109298u;
label_109298:
    // 0x109298: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x109298u;
    {
        const bool branch_taken_0x109298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109298u;
        // 0x10929c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109298) {
            ctx->pc = 0x1092B0u;
            goto label_1092b0;
        }
    }
    ctx->pc = 0x1092A0u;
label_1092a0:
    // 0x1092a0: 0xc061a46  jal         func_186918
    ctx->pc = 0x1092A0u;
    SET_GPR_U32(ctx, 31, 0x1092A8u);
    ctx->pc = 0x1092A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092A0u;
    // 0x1092a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1092A0u, 0x1092A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092A8u;
label_1092a8:
    // 0x1092a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1092a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1092acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1092b0:
    // 0x1092b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1092b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1092b4:
    // 0x1092b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1092b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1092b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092bc: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x1092BCu;
    SET_GPR_U32(ctx, 31, 0x1092C4u);
    ctx->pc = 0x1092C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092BCu;
    // 0x1092c0: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x1092BCu, 0x1092C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092C4u;
label_1092c4:
    // 0x1092c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1092c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1092c8:
    // 0x1092c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1092c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1092cc:
    // 0x1092cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1092ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1092d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1092d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1092d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1092d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1092d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1092d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1092dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1092dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1092e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1092e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1092e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1092E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1092E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092E4u;
        // 0x1092e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1092E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1092ECu;
}
