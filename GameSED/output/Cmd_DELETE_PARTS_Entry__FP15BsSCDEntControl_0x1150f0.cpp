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

// Function: Cmd_DELETE_PARTS_Entry__FP15BsSCDEntControl
// Address: 0x1150f0 - 0x115208
void Cmd_DELETE_PARTS_Entry__FP15BsSCDEntControl_0x1150f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DELETE_PARTS_Entry__FP15BsSCDEntControl_0x1150f0");
#endif

    switch (ctx->pc) {
        case 0x11510cu: goto label_11510c;
        case 0x11512cu: goto label_11512c;
        case 0x11514cu: goto label_11514c;
        case 0x11515cu: goto label_11515c;
        default: break;
    }

    ctx->pc = 0x1150f0u;

    // 0x1150f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1150f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1150f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1150f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1150f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1150f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1150fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1150fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115100: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x115100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x115104: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115104u;
    SET_GPR_U32(ctx, 31, 0x11510Cu);
    ctx->pc = 0x115108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115104u;
    // 0x115108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115104u, 0x11510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11510Cu;
label_11510c:
    // 0x11510c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x11510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x115110: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x115110u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x115114: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x115114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x115118: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x115118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11511c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11511Cu;
    {
        const bool branch_taken_0x11511c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x115120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11511Cu;
        // 0x115120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11511c) {
            ctx->pc = 0x115130u;
            goto label_115130;
        }
    }
    ctx->pc = 0x115124u;
    // 0x115124: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115124u;
    SET_GPR_U32(ctx, 31, 0x11512Cu);
    ctx->pc = 0x115128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115124u;
    // 0x115128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115124u, 0x11512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11512Cu;
label_11512c:
    // 0x11512c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x11512cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_115130:
    // 0x115130: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x115130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115134: 0x128202  srl         $s0, $s2, 8
    ctx->pc = 0x115134u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x115138: 0xb18818  mult        $s1, $a1, $s1
    ctx->pc = 0x115138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x11513c: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x11513cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x115140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115144: 0xc045360  jal         func_114D80
    ctx->pc = 0x115144u;
    SET_GPR_U32(ctx, 31, 0x11514Cu);
    ctx->pc = 0x115148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115144u;
    // 0x115148: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115144u, 0x11514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11514Cu;
label_11514c:
    // 0x11514c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115154: 0xc045360  jal         func_114D80
    ctx->pc = 0x115154u;
    SET_GPR_U32(ctx, 31, 0x11515Cu);
    ctx->pc = 0x115158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115154u;
    // 0x115158: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115154u, 0x11515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11515Cu;
label_11515c:
    // 0x11515c: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x11515cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x115160: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115164: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x115164u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
    // 0x115168: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x115168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x11516c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x11516Cu;
    {
        const bool branch_taken_0x11516c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11516Cu;
        // 0x115170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11516c) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x115174u;
    // 0x115174: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x115178: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x11517c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115180: 0x8c634410  lw          $v1, 0x4410($v1)
    ctx->pc = 0x115180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17424)));
    // 0x115184: 0x600008  jr          $v1
    ctx->pc = 0x115184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115190u: goto label_115190;
            case 0x115198u: goto label_115198;
            case 0x1151A0u: goto label_1151a0;
            case 0x1151A8u: goto label_1151a8;
            case 0x1151B0u: goto label_1151b0;
            case 0x1151B8u: goto label_1151b8;
            case 0x1151C0u: goto label_1151c0;
            case 0x1151C8u: goto label_1151c8;
            case 0x1151D0u: goto label_1151d0;
            case 0x1151D8u: goto label_1151d8;
            case 0x1151E0u: goto label_1151e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11518Cu;
    // 0x11518c: 0x0  nop
    ctx->pc = 0x11518cu;
    // NOP
label_115190:
    // 0x115190: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115190u;
    {
        const bool branch_taken_0x115190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115190u;
        // 0x115194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115190) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x115198u;
label_115198:
    // 0x115198: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x115198u;
    {
        const bool branch_taken_0x115198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115198u;
        // 0x11519c: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115198) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x1151A0u;
label_1151a0:
    // 0x1151a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1151A0u;
    {
        const bool branch_taken_0x1151a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A0u;
        // 0x1151a4: 0x2625007c  addiu       $a1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151a0) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x1151A8u;
label_1151a8:
    // 0x1151a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1151A8u;
    {
        const bool branch_taken_0x1151a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A8u;
        // 0x1151ac: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151a8) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x1151B0u;
label_1151b0:
    // 0x1151b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1151B0u;
    {
        const bool branch_taken_0x1151b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151B0u;
        // 0x1151b4: 0x262500e8  addiu       $a1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151b0) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x1151B8u;
label_1151b8:
    // 0x1151b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1151B8u;
    {
        const bool branch_taken_0x1151b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151B8u;
        // 0x1151bc: 0x2625011c  addiu       $a1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151b8) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x1151C0u;
label_1151c0:
    // 0x1151c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1151C0u;
    {
        const bool branch_taken_0x1151c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151C0u;
        // 0x1151c4: 0x2625014c  addiu       $a1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151c0) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x1151C8u;
label_1151c8:
    // 0x1151c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1151C8u;
    {
        const bool branch_taken_0x1151c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151C8u;
        // 0x1151cc: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151c8) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x1151D0u;
label_1151d0:
    // 0x1151d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1151D0u;
    {
        const bool branch_taken_0x1151d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D0u;
        // 0x1151d4: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d0) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x1151D8u;
label_1151d8:
    // 0x1151d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1151D8u;
    {
        const bool branch_taken_0x1151d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D8u;
        // 0x1151dc: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d8) {
            ctx->pc = 0x1151E4u;
            goto label_1151e4;
        }
    }
    ctx->pc = 0x1151E0u;
label_1151e0:
    // 0x1151e0: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x1151e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_1151e4:
    // 0x1151e4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1151e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1151e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1151e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1151ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1151ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1151f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1151f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1151f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1151f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1151f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1151f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1151fc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1151fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x115200: 0x3e00008  jr          $ra
    ctx->pc = 0x115200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115200u;
        // 0x115204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115208u;
}
