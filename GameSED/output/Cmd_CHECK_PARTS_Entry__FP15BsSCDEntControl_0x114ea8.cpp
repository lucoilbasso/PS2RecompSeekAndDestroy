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

// Function: Cmd_CHECK_PARTS_Entry__FP15BsSCDEntControl
// Address: 0x114ea8 - 0x114fd0
void Cmd_CHECK_PARTS_Entry__FP15BsSCDEntControl_0x114ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_CHECK_PARTS_Entry__FP15BsSCDEntControl_0x114ea8");
#endif

    switch (ctx->pc) {
        case 0x114ec8u: goto label_114ec8;
        case 0x114ee8u: goto label_114ee8;
        case 0x114f10u: goto label_114f10;
        case 0x114f20u: goto label_114f20;
        default: break;
    }

    ctx->pc = 0x114ea8u;

    // 0x114ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x114ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x114eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114eb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x114eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x114eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114eb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x114eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x114ebc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114ec0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x114EC0u;
    SET_GPR_U32(ctx, 31, 0x114EC8u);
    ctx->pc = 0x114EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EC0u;
    // 0x114ec4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x114EC0u, 0x114EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EC8u;
label_114ec8:
    // 0x114ec8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x114ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x114ecc: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x114eccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x114ed0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x114ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x114ed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x114ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x114ed8: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114ED8u;
    {
        const bool branch_taken_0x114ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x114EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114ED8u;
        // 0x114edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ed8) {
            ctx->pc = 0x114EECu;
            goto label_114eec;
        }
    }
    ctx->pc = 0x114EE0u;
    // 0x114ee0: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x114EE0u;
    SET_GPR_U32(ctx, 31, 0x114EE8u);
    ctx->pc = 0x114EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114EE0u;
    // 0x114ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x114EE0u, 0x114EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EE8u;
label_114ee8:
    // 0x114ee8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x114ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_114eec:
    // 0x114eec: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x114eecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x114ef0: 0x128202  srl         $s0, $s2, 8
    ctx->pc = 0x114ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x114ef4: 0xb18818  mult        $s1, $a1, $s1
    ctx->pc = 0x114ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x114ef8: 0x325200ff  andi        $s2, $s2, 0xFF
    ctx->pc = 0x114ef8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x114efc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x114efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x114f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114f04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x114f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114f08: 0xc045360  jal         func_114D80
    ctx->pc = 0x114F08u;
    SET_GPR_U32(ctx, 31, 0x114F10u);
    ctx->pc = 0x114F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F08u;
    // 0x114f0c: 0x2453fcb0  addiu       $s3, $v0, -0x350 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x114F08u, 0x114F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F10u;
label_114f10:
    // 0x114f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x114f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114f14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x114f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114f18: 0xc045360  jal         func_114D80
    ctx->pc = 0x114F18u;
    SET_GPR_U32(ctx, 31, 0x114F20u);
    ctx->pc = 0x114F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114F18u;
    // 0x114f1c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x114F18u, 0x114F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F20u;
label_114f20:
    // 0x114f20: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x114f20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x114f24: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x114f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x114f28: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x114f28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
    // 0x114f2c: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x114f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x114f30: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x114F30u;
    {
        const bool branch_taken_0x114f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F30u;
        // 0x114f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f30) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F38u;
    // 0x114f38: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x114f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x114f3c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x114f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x114f40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114f44: 0x8c6343b0  lw          $v1, 0x43B0($v1)
    ctx->pc = 0x114f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17328)));
    // 0x114f48: 0x600008  jr          $v1
    ctx->pc = 0x114F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114F50u: goto label_114f50;
            case 0x114F58u: goto label_114f58;
            case 0x114F60u: goto label_114f60;
            case 0x114F68u: goto label_114f68;
            case 0x114F70u: goto label_114f70;
            case 0x114F78u: goto label_114f78;
            case 0x114F80u: goto label_114f80;
            case 0x114F88u: goto label_114f88;
            case 0x114F90u: goto label_114f90;
            case 0x114F98u: goto label_114f98;
            case 0x114FA0u: goto label_114fa0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114F48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x114F50u;
label_114f50:
    // 0x114f50: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x114F50u;
    {
        const bool branch_taken_0x114f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F50u;
        // 0x114f54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f50) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F58u;
label_114f58:
    // 0x114f58: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x114F58u;
    {
        const bool branch_taken_0x114f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F58u;
        // 0x114f5c: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f58) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F60u;
label_114f60:
    // 0x114f60: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x114F60u;
    {
        const bool branch_taken_0x114f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F60u;
        // 0x114f64: 0x2625007c  addiu       $a1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f60) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F68u;
label_114f68:
    // 0x114f68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x114F68u;
    {
        const bool branch_taken_0x114f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F68u;
        // 0x114f6c: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f68) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F70u;
label_114f70:
    // 0x114f70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x114F70u;
    {
        const bool branch_taken_0x114f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F70u;
        // 0x114f74: 0x262500e8  addiu       $a1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f70) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F78u;
label_114f78:
    // 0x114f78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x114F78u;
    {
        const bool branch_taken_0x114f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F78u;
        // 0x114f7c: 0x2625011c  addiu       $a1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f78) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F80u;
label_114f80:
    // 0x114f80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x114F80u;
    {
        const bool branch_taken_0x114f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F80u;
        // 0x114f84: 0x2625014c  addiu       $a1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f80) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F88u;
label_114f88:
    // 0x114f88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114F88u;
    {
        const bool branch_taken_0x114f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F88u;
        // 0x114f8c: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f88) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F90u;
label_114f90:
    // 0x114f90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114F90u;
    {
        const bool branch_taken_0x114f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F90u;
        // 0x114f94: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f90) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114F98u;
label_114f98:
    // 0x114f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x114F98u;
    {
        const bool branch_taken_0x114f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F98u;
        // 0x114f9c: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f98) {
            ctx->pc = 0x114FA4u;
            goto label_114fa4;
        }
    }
    ctx->pc = 0x114FA0u;
label_114fa0:
    // 0x114fa0: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x114fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_114fa4:
    // 0x114fa4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x114fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x114fa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x114fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114fac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x114facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x114fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114fb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x114fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114fbc: 0xae630400  sw          $v1, 0x400($s3)
    ctx->pc = 0x114fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1024), GPR_U32(ctx, 3));
    // 0x114fc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114fc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x114fc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x114fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x114FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FC8u;
        // 0x114fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114FD0u;
}
