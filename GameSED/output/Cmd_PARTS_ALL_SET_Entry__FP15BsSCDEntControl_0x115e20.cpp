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

// Function: Cmd_PARTS_ALL_SET_Entry__FP15BsSCDEntControl
// Address: 0x115e20 - 0x116140
void Cmd_PARTS_ALL_SET_Entry__FP15BsSCDEntControl_0x115e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARTS_ALL_SET_Entry__FP15BsSCDEntControl_0x115e20");
#endif

    switch (ctx->pc) {
        case 0x115e50u: goto label_115e50;
        case 0x115e70u: goto label_115e70;
        case 0x115e78u: goto label_115e78;
        case 0x115e9cu: goto label_115e9c;
        case 0x115eacu: goto label_115eac;
        case 0x115f68u: goto label_115f68;
        case 0x115f78u: goto label_115f78;
        case 0x11605cu: goto label_11605c;
        case 0x1160a0u: goto label_1160a0;
        case 0x1160b0u: goto label_1160b0;
        case 0x1160d0u: goto label_1160d0;
        case 0x1160dcu: goto label_1160dc;
        case 0x1160ecu: goto label_1160ec;
        case 0x1160f8u: goto label_1160f8;
        case 0x116108u: goto label_116108;
        case 0x116114u: goto label_116114;
        default: break;
    }

    ctx->pc = 0x115e20u;

    // 0x115e20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x115e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115e28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x115e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x115e30: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x115e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x115e34: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x115e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x115e38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115e3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x115e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x115e40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x115e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x115e44: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x115e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x115e48: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115E48u;
    SET_GPR_U32(ctx, 31, 0x115E50u);
    ctx->pc = 0x115E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E48u;
    // 0x115e4c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115E48u, 0x115E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E50u;
label_115e50:
    // 0x115e50: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x115e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x115e54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x115e54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x115e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x115e5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x115e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115e60: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x115e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x115e64: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x115e64u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x115e68: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x115e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x115e6c: 0x0  nop
    ctx->pc = 0x115e6cu;
    // NOP
label_115e70:
    // 0x115e70: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x115E70u;
    {
        const bool branch_taken_0x115e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E70u;
        // 0x115e74: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e70) {
            ctx->pc = 0x116064u;
            goto label_116064;
        }
    }
    ctx->pc = 0x115E78u;
label_115e78:
    // 0x115e78: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x115e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115e7c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x115e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x115e80: 0x2b18818  mult        $s1, $s5, $s1
    ctx->pc = 0x115e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x115e84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x115e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x115e88: 0x28202  srl         $s0, $v0, 8
    ctx->pc = 0x115e88u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x115e8c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x115e8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x115e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e94: 0xc045360  jal         func_114D80
    ctx->pc = 0x115E94u;
    SET_GPR_U32(ctx, 31, 0x115E9Cu);
    ctx->pc = 0x115E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E94u;
    // 0x115e98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115E94u, 0x115E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E9Cu;
label_115e9c:
    // 0x115e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115ea4: 0xc045360  jal         func_114D80
    ctx->pc = 0x115EA4u;
    SET_GPR_U32(ctx, 31, 0x115EACu);
    ctx->pc = 0x115EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115EA4u;
    // 0x115ea8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115EA4u, 0x115EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EACu;
label_115eac:
    // 0x115eac: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x115eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x115eb0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115eb4: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x115eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
    // 0x115eb8: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x115eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x115ebc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x115EBCu;
    {
        const bool branch_taken_0x115ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EBCu;
        // 0x115ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ebc) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115EC4u;
    // 0x115ec4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x115ec8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x115ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115ed0: 0x8c634500  lw          $v1, 0x4500($v1)
    ctx->pc = 0x115ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17664)));
    // 0x115ed4: 0x600008  jr          $v1
    ctx->pc = 0x115ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115EE0u: goto label_115ee0;
            case 0x115EE8u: goto label_115ee8;
            case 0x115EF0u: goto label_115ef0;
            case 0x115EF8u: goto label_115ef8;
            case 0x115F00u: goto label_115f00;
            case 0x115F08u: goto label_115f08;
            case 0x115F10u: goto label_115f10;
            case 0x115F18u: goto label_115f18;
            case 0x115F20u: goto label_115f20;
            case 0x115F28u: goto label_115f28;
            case 0x115F30u: goto label_115f30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115ED4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x115EDCu;
    // 0x115edc: 0x0  nop
    ctx->pc = 0x115edcu;
    // NOP
label_115ee0:
    // 0x115ee0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115EE0u;
    {
        const bool branch_taken_0x115ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EE0u;
        // 0x115ee4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ee0) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115EE8u;
label_115ee8:
    // 0x115ee8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x115EE8u;
    {
        const bool branch_taken_0x115ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EE8u;
        // 0x115eec: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ee8) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115EF0u;
label_115ef0:
    // 0x115ef0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115EF0u;
    {
        const bool branch_taken_0x115ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EF0u;
        // 0x115ef4: 0x2625007c  addiu       $a1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ef0) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115EF8u;
label_115ef8:
    // 0x115ef8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x115EF8u;
    {
        const bool branch_taken_0x115ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EF8u;
        // 0x115efc: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ef8) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115F00u;
label_115f00:
    // 0x115f00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x115F00u;
    {
        const bool branch_taken_0x115f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F00u;
        // 0x115f04: 0x262500e8  addiu       $a1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f00) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115F08u;
label_115f08:
    // 0x115f08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x115F08u;
    {
        const bool branch_taken_0x115f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F08u;
        // 0x115f0c: 0x2625011c  addiu       $a1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f08) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115F10u;
label_115f10:
    // 0x115f10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115F10u;
    {
        const bool branch_taken_0x115f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F10u;
        // 0x115f14: 0x2625014c  addiu       $a1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f10) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115F18u;
label_115f18:
    // 0x115f18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115F18u;
    {
        const bool branch_taken_0x115f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F18u;
        // 0x115f1c: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f18) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115F20u;
label_115f20:
    // 0x115f20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115F20u;
    {
        const bool branch_taken_0x115f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F20u;
        // 0x115f24: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f20) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115F28u;
label_115f28:
    // 0x115f28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115F28u;
    {
        const bool branch_taken_0x115f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F28u;
        // 0x115f2c: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f28) {
            ctx->pc = 0x115F34u;
            goto label_115f34;
        }
    }
    ctx->pc = 0x115F30u;
label_115f30:
    // 0x115f30: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x115f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_115f34:
    // 0x115f34: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x115f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x115f38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115f3c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x115f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x115f40: 0x16c30046  bne         $s6, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x115F40u;
    {
        const bool branch_taken_0x115f40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x115F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F40u;
        // 0x115f44: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f40) {
            ctx->pc = 0x11605Cu;
            goto label_11605c;
        }
    }
    ctx->pc = 0x115F48u;
    // 0x115f48: 0x141200  sll         $v0, $s4, 8
    ctx->pc = 0x115f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
    // 0x115f4c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x115f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x115f50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x115f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x115f54: 0x28202  srl         $s0, $v0, 8
    ctx->pc = 0x115f54u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x115f58: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x115f58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x115f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f60: 0xc045360  jal         func_114D80
    ctx->pc = 0x115F60u;
    SET_GPR_U32(ctx, 31, 0x115F68u);
    ctx->pc = 0x115F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F60u;
    // 0x115f64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115F60u, 0x115F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F68u;
label_115f68:
    // 0x115f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115f70: 0xc045360  jal         func_114D80
    ctx->pc = 0x115F70u;
    SET_GPR_U32(ctx, 31, 0x115F78u);
    ctx->pc = 0x115F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F70u;
    // 0x115f74: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115F70u, 0x115F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F78u;
label_115f78:
    // 0x115f78: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x115f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x115f7c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x115F7Cu;
    {
        const bool branch_taken_0x115f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F7Cu;
        // 0x115f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f7c) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x115F84u;
    // 0x115f84: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x115f88: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x115f8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115f90: 0x8c634530  lw          $v1, 0x4530($v1)
    ctx->pc = 0x115f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17712)));
    // 0x115f94: 0x600008  jr          $v1
    ctx->pc = 0x115F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115FA0u: goto label_115fa0;
            case 0x115FB0u: goto label_115fb0;
            case 0x115FC0u: goto label_115fc0;
            case 0x115FD0u: goto label_115fd0;
            case 0x115FE0u: goto label_115fe0;
            case 0x115FF0u: goto label_115ff0;
            case 0x116000u: goto label_116000;
            case 0x116010u: goto label_116010;
            case 0x116020u: goto label_116020;
            case 0x116030u: goto label_116030;
            case 0x116040u: goto label_116040;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x115F9Cu;
    // 0x115f9c: 0x0  nop
    ctx->pc = 0x115f9cu;
    // NOP
label_115fa0:
    // 0x115fa0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115fa4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x115FA4u;
    {
        const bool branch_taken_0x115fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FA4u;
        // 0x115fa8: 0x2445c350  addiu       $a1, $v0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fa4) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x115FACu;
    // 0x115fac: 0x0  nop
    ctx->pc = 0x115facu;
    // NOP
label_115fb0:
    // 0x115fb0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115fb4: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x115fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x115fb8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x115FB8u;
    {
        const bool branch_taken_0x115fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FB8u;
        // 0x115fbc: 0x2445004c  addiu       $a1, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fb8) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x115FC0u;
label_115fc0:
    // 0x115fc0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115fc4: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x115fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x115fc8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x115FC8u;
    {
        const bool branch_taken_0x115fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FC8u;
        // 0x115fcc: 0x2445007c  addiu       $a1, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fc8) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x115FD0u;
label_115fd0:
    // 0x115fd0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115fd4: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x115fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x115fd8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x115FD8u;
    {
        const bool branch_taken_0x115fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FD8u;
        // 0x115fdc: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fd8) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x115FE0u;
label_115fe0:
    // 0x115fe0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115fe4: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x115fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x115fe8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x115FE8u;
    {
        const bool branch_taken_0x115fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FE8u;
        // 0x115fec: 0x244500e8  addiu       $a1, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fe8) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x115FF0u;
label_115ff0:
    // 0x115ff0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115ff4: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x115ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x115ff8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115FF8u;
    {
        const bool branch_taken_0x115ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FF8u;
        // 0x115ffc: 0x2445011c  addiu       $a1, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ff8) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x116000u;
label_116000:
    // 0x116000: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116004: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x116004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x116008: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x116008u;
    {
        const bool branch_taken_0x116008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116008u;
        // 0x11600c: 0x2445014c  addiu       $a1, $v0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116008) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x116010u;
label_116010:
    // 0x116010: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116014: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x116014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x116018: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x116018u;
    {
        const bool branch_taken_0x116018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116018u;
        // 0x11601c: 0x2445015c  addiu       $a1, $v0, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116018) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x116020u;
label_116020:
    // 0x116020: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116024: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x116024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x116028: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x116028u;
    {
        const bool branch_taken_0x116028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116028u;
        // 0x11602c: 0x24450180  addiu       $a1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116028) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x116030u;
label_116030:
    // 0x116030: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116034: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x116034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x116038: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116038u;
    {
        const bool branch_taken_0x116038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116038u;
        // 0x11603c: 0x244501a0  addiu       $a1, $v0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116038) {
            ctx->pc = 0x11604Cu;
            goto label_11604c;
        }
    }
    ctx->pc = 0x116040u;
label_116040:
    // 0x116040: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116044: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x116044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x116048: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x116048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_11604c:
    // 0x11604c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x11604cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x116050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116054: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x116054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x116058: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x116058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11605c:
    // 0x11605c: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x11605cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x116060: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x116060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_116064:
    // 0x116064: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11606c: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x11606cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x116070: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x116070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x116074: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x116074u;
    {
        const bool branch_taken_0x116074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116074u;
        // 0x116078: 0x141200  sll         $v0, $s4, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116074) {
            ctx->pc = 0x115E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115e78;
        }
    }
    ctx->pc = 0x11607Cu;
    // 0x11607c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11607cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x116080: 0x2a82000c  slti        $v0, $s4, 0xC
    ctx->pc = 0x116080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x116084: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x116084u;
    {
        const bool branch_taken_0x116084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116084u;
        // 0x116088: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116084) {
            ctx->pc = 0x115E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115e70;
        }
    }
    ctx->pc = 0x11608Cu;
    // 0x11608c: 0x241124d0  addiu       $s1, $zero, 0x24D0
    ctx->pc = 0x11608cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116090: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x116090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x116094: 0x2b18818  mult        $s1, $s5, $s1
    ctx->pc = 0x116094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x116098: 0xc045360  jal         func_114D80
    ctx->pc = 0x116098u;
    SET_GPR_U32(ctx, 31, 0x1160A0u);
    ctx->pc = 0x11609Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116098u;
    // 0x11609c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116098u, 0x1160A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160A0u;
label_1160a0:
    // 0x1160a0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1160a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1160a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1160a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1160a8: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160A8u;
    SET_GPR_U32(ctx, 31, 0x1160B0u);
    ctx->pc = 0x1160ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160A8u;
    // 0x1160ac: 0x3c10001f  lui         $s0, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160A8u, 0x1160B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160B0u;
label_1160b0:
    // 0x1160b0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1160b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1160b4: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x1160b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x1160b8: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x1160b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
    // 0x1160bc: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x1160bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x1160c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1160c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1160c4: 0xae200138  sw          $zero, 0x138($s1)
    ctx->pc = 0x1160c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
    // 0x1160c8: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160C8u;
    SET_GPR_U32(ctx, 31, 0x1160D0u);
    ctx->pc = 0x1160CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160C8u;
    // 0x1160cc: 0x2610c350  addiu       $s0, $s0, -0x3CB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160C8u, 0x1160D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160D0u;
label_1160d0:
    // 0x1160d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1160d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1160d4: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160D4u;
    SET_GPR_U32(ctx, 31, 0x1160DCu);
    ctx->pc = 0x1160D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160D4u;
    // 0x1160d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160D4u, 0x1160DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160DCu;
label_1160dc:
    // 0x1160dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1160dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1160e0: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x1160e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x1160e4: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160E4u;
    SET_GPR_U32(ctx, 31, 0x1160ECu);
    ctx->pc = 0x1160E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160E4u;
    // 0x1160e8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160E4u, 0x1160ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160ECu;
label_1160ec:
    // 0x1160ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1160ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1160f0: 0xc045360  jal         func_114D80
    ctx->pc = 0x1160F0u;
    SET_GPR_U32(ctx, 31, 0x1160F8u);
    ctx->pc = 0x1160F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160F0u;
    // 0x1160f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1160F0u, 0x1160F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160F8u;
label_1160f8:
    // 0x1160f8: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1160f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x1160fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1160fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116100: 0xc045360  jal         func_114D80
    ctx->pc = 0x116100u;
    SET_GPR_U32(ctx, 31, 0x116108u);
    ctx->pc = 0x116104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116100u;
    // 0x116104: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116100u, 0x116108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116108u;
label_116108:
    // 0x116108: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x116108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11610c: 0xc045360  jal         func_114D80
    ctx->pc = 0x11610Cu;
    SET_GPR_U32(ctx, 31, 0x116114u);
    ctx->pc = 0x116110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11610Cu;
    // 0x116110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x11610Cu, 0x116114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116114u;
label_116114:
    // 0x116114: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x116114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x116118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11611c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11611cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x116120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116124: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x116124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116128: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x116128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11612c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11612cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116130: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x116130u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116134: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x116134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116138: 0x3e00008  jr          $ra
    ctx->pc = 0x116138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116138u;
        // 0x11613c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116140u;
}
