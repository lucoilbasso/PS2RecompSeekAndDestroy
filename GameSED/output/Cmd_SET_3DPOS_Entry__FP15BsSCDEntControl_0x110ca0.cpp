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

// Function: Cmd_SET_3DPOS_Entry__FP15BsSCDEntControl
// Address: 0x110ca0 - 0x111530
void Cmd_SET_3DPOS_Entry__FP15BsSCDEntControl_0x110ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_3DPOS_Entry__FP15BsSCDEntControl_0x110ca0");
#endif

    switch (ctx->pc) {
        case 0x110cd4u: goto label_110cd4;
        case 0x110d2cu: goto label_110d2c;
        case 0x110d44u: goto label_110d44;
        case 0x110d68u: goto label_110d68;
        case 0x110d74u: goto label_110d74;
        case 0x110d8cu: goto label_110d8c;
        case 0x110db4u: goto label_110db4;
        case 0x110de0u: goto label_110de0;
        case 0x110e04u: goto label_110e04;
        case 0x110e08u: goto label_110e08;
        case 0x110e28u: goto label_110e28;
        case 0x110e3cu: goto label_110e3c;
        case 0x110e50u: goto label_110e50;
        case 0x110e64u: goto label_110e64;
        case 0x110e70u: goto label_110e70;
        case 0x110ec4u: goto label_110ec4;
        case 0x110ed0u: goto label_110ed0;
        case 0x110ed8u: goto label_110ed8;
        case 0x110ee8u: goto label_110ee8;
        case 0x110ef0u: goto label_110ef0;
        case 0x110f1cu: goto label_110f1c;
        case 0x110f28u: goto label_110f28;
        case 0x110f3cu: goto label_110f3c;
        case 0x110f68u: goto label_110f68;
        case 0x110f98u: goto label_110f98;
        case 0x110f9cu: goto label_110f9c;
        case 0x110fa8u: goto label_110fa8;
        case 0x110facu: goto label_110fac;
        case 0x110fc0u: goto label_110fc0;
        case 0x111028u: goto label_111028;
        case 0x111050u: goto label_111050;
        case 0x111054u: goto label_111054;
        case 0x111068u: goto label_111068;
        case 0x111090u: goto label_111090;
        case 0x111094u: goto label_111094;
        case 0x1110b0u: goto label_1110b0;
        case 0x1110fcu: goto label_1110fc;
        case 0x11112cu: goto label_11112c;
        case 0x11115cu: goto label_11115c;
        case 0x1111c8u: goto label_1111c8;
        case 0x1111d8u: goto label_1111d8;
        case 0x1111e8u: goto label_1111e8;
        case 0x111210u: goto label_111210;
        case 0x11121cu: goto label_11121c;
        case 0x11123cu: goto label_11123c;
        case 0x111258u: goto label_111258;
        case 0x1112e4u: goto label_1112e4;
        case 0x1112f0u: goto label_1112f0;
        case 0x111310u: goto label_111310;
        case 0x111330u: goto label_111330;
        case 0x1113acu: goto label_1113ac;
        case 0x1113d4u: goto label_1113d4;
        case 0x1113ecu: goto label_1113ec;
        case 0x111420u: goto label_111420;
        case 0x111430u: goto label_111430;
        case 0x1114d8u: goto label_1114d8;
        case 0x1114f0u: goto label_1114f0;
        case 0x111508u: goto label_111508;
        default: break;
    }

    ctx->pc = 0x110ca0u;

    // 0x110ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x110ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x110ca4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x110ca8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x110ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x110cac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x110cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x110cb0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x110cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x110cb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x110cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cb8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x110cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x110cbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x110cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x110cc0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x110cc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cc4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x110cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x110cc8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x110cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x110ccc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110CCCu;
    SET_GPR_U32(ctx, 31, 0x110CD4u);
    ctx->pc = 0x110CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110CCCu;
    // 0x110cd0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110CCCu, 0x110CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CD4u;
label_110cd4:
    // 0x110cd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x110cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110cd8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x110cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x110cdc: 0x8c52b830  lw          $s2, -0x47D0($v0)
    ctx->pc = 0x110cdcu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x1FB830u));
    // 0x110ce0: 0x2e830021  sltiu       $v1, $s4, 0x21
    ctx->pc = 0x110ce0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x110ce4: 0x8f918d10  lw          $s1, -0x72F0($gp)
    ctx->pc = 0x110ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x110ce8: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x110CE8u;
    {
        const bool branch_taken_0x110ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CE8u;
        // 0x110cec: 0x8e500040  lw          $s0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ce8) {
            ctx->pc = 0x1110A8u;
            goto label_1110a8;
        }
    }
    ctx->pc = 0x110CF0u;
    // 0x110cf0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x110cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x110cf4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x110cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x110cf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x110cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x110cfc: 0x8c633f00  lw          $v1, 0x3F00($v1)
    ctx->pc = 0x110cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16128)));
    // 0x110d00: 0x600008  jr          $v1
    ctx->pc = 0x110D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110D08u: goto label_110d08;
            case 0x110D18u: goto label_110d18;
            case 0x110D38u: goto label_110d38;
            case 0x110D50u: goto label_110d50;
            case 0x110D98u: goto label_110d98;
            case 0x110DA8u: goto label_110da8;
            case 0x110DC8u: goto label_110dc8;
            case 0x110DD8u: goto label_110dd8;
            case 0x110E20u: goto label_110e20;
            case 0x110E48u: goto label_110e48;
            case 0x110E90u: goto label_110e90;
            case 0x110EA8u: goto label_110ea8;
            case 0x110EF8u: goto label_110ef8;
            case 0x110F10u: goto label_110f10;
            case 0x110F30u: goto label_110f30;
            case 0x110F48u: goto label_110f48;
            case 0x110F60u: goto label_110f60;
            case 0x110FB8u: goto label_110fb8;
            case 0x110FD8u: goto label_110fd8;
            case 0x110FE8u: goto label_110fe8;
            case 0x111000u: goto label_111000;
            case 0x111010u: goto label_111010;
            case 0x111020u: goto label_111020;
            case 0x111060u: goto label_111060;
            case 0x1110A8u: goto label_1110a8;
            case 0x1110ACu: goto label_1110ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110D00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x110D08u;
label_110d08:
    // 0x110d08: 0xfa400000  sqc2        $vf0, 0x0($s2)
    ctx->pc = 0x110d08u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x110d0c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x110D0Cu;
    {
        const bool branch_taken_0x110d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D0Cu;
        // 0x110d10: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d0c) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110D14u;
    // 0x110d14: 0x0  nop
    ctx->pc = 0x110d14u;
    // NOP
label_110d18:
    // 0x110d18: 0xfa400000  sqc2        $vf0, 0x0($s2)
    ctx->pc = 0x110d18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x110d1c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x110d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110d20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d24: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x110D24u;
    SET_GPR_U32(ctx, 31, 0x110D2Cu);
    ctx->pc = 0x110D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D24u;
    // 0x110d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x110D24u, 0x110D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D2Cu;
label_110d2c:
    // 0x110d2c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x110D2Cu;
    {
        const bool branch_taken_0x110d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D2Cu;
        // 0x110d30: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d2c) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110D34u;
    // 0x110d34: 0x0  nop
    ctx->pc = 0x110d34u;
    // NOP
label_110d38:
    // 0x110d38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110d3c: 0xc044302  jal         func_110C08
    ctx->pc = 0x110D3Cu;
    SET_GPR_U32(ctx, 31, 0x110D44u);
    ctx->pc = 0x110D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D3Cu;
    // 0x110d40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C08u, 0x110D3Cu, 0x110D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D44u;
label_110d44:
    // 0x110d44: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x110D44u;
    {
        const bool branch_taken_0x110d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D44u;
        // 0x110d48: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d44) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110D4Cu;
    // 0x110d4c: 0x0  nop
    ctx->pc = 0x110d4cu;
    // NOP
label_110d50:
    // 0x110d50: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x110d50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110d54: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x110d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x110d58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110D58u;
    {
        const bool branch_taken_0x110d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x110D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D58u;
        // 0x110d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d58) {
            ctx->pc = 0x110D68u;
            goto label_110d68;
        }
    }
    ctx->pc = 0x110D60u;
    // 0x110d60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110D60u;
    {
        const bool branch_taken_0x110d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D60u;
        // 0x110d64: 0x8e100260  lw          $s0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d60) {
            ctx->pc = 0x110D74u;
            goto label_110d74;
        }
    }
    ctx->pc = 0x110D68u;
label_110d68:
    // 0x110d68: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x110d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x110d6c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x110d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x110d70: 0x8c70fff0  lw          $s0, -0x10($v1)
    ctx->pc = 0x110d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_110d74:
    // 0x110d74: 0x160000cd  bnez        $s0, . + 4 + (0xCD << 2)
    ctx->pc = 0x110D74u;
    {
        const bool branch_taken_0x110d74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x110D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D74u;
        // 0x110d78: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d74) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110D7Cu;
    // 0x110d7c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110d80: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x110d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x110d84: 0xc068186  jal         func_1A0618
    ctx->pc = 0x110D84u;
    SET_GPR_U32(ctx, 31, 0x110D8Cu);
    ctx->pc = 0x110D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110D84u;
    // 0x110d88: 0x24a53e88  addiu       $a1, $a1, 0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x110D84u, 0x110D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110D8Cu;
label_110d8c:
    // 0x110d8c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x110D8Cu;
    {
        const bool branch_taken_0x110d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D8Cu;
        // 0x110d90: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d8c) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110D94u;
    // 0x110d94: 0x0  nop
    ctx->pc = 0x110d94u;
    // NOP
label_110d98:
    // 0x110d98: 0x8e303630  lw          $s0, 0x3630($s1)
    ctx->pc = 0x110d98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13872)));
    // 0x110d9c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x110D9Cu;
    {
        const bool branch_taken_0x110d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D9Cu;
        // 0x110da0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d9c) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110DA4u;
    // 0x110da4: 0x0  nop
    ctx->pc = 0x110da4u;
    // NOP
label_110da8:
    // 0x110da8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110dac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110DACu;
    SET_GPR_U32(ctx, 31, 0x110DB4u);
    ctx->pc = 0x110DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DACu;
    // 0x110db0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110DACu, 0x110DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DB4u;
label_110db4:
    // 0x110db4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110db8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x110db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x110dbc: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x110DBCu;
    {
        const bool branch_taken_0x110dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DBCu;
        // 0x110dc0: 0x8c503630  lw          $s0, 0x3630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dbc) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110DC4u;
    // 0x110dc4: 0x0  nop
    ctx->pc = 0x110dc4u;
    // NOP
label_110dc8:
    // 0x110dc8: 0x8f908a30  lw          $s0, -0x75D0($gp)
    ctx->pc = 0x110dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x110dcc: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x110DCCu;
    {
        const bool branch_taken_0x110dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110DCCu;
        // 0x110dd0: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110dcc) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110DD4u;
    // 0x110dd4: 0x0  nop
    ctx->pc = 0x110dd4u;
    // NOP
label_110dd8:
    // 0x110dd8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110DD8u;
    SET_GPR_U32(ctx, 31, 0x110DE0u);
    ctx->pc = 0x110DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DD8u;
    // 0x110ddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110DD8u, 0x110DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110DE0u;
label_110de0:
    // 0x110de0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110de4: 0x2a220080  slti        $v0, $s1, 0x80
    ctx->pc = 0x110de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x110de8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x110DE8u;
    {
        const bool branch_taken_0x110de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110de8) {
            ctx->pc = 0x110DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110DE8u;
            // 0x110dec: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110E08u;
            goto label_110e08;
        }
    }
    ctx->pc = 0x110DF0u;
    // 0x110df0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x110df4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x110df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110df8: 0x24a53e50  addiu       $a1, $a1, 0x3E50
    ctx->pc = 0x110df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15952));
    // 0x110dfc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x110DFCu;
    SET_GPR_U32(ctx, 31, 0x110E04u);
    ctx->pc = 0x110E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110DFCu;
    // 0x110e00: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x110DFCu, 0x110E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E04u;
label_110e04:
    // 0x110e04: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x110e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_110e08:
    // 0x110e08: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x110e08u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x110e0c: 0x26d6f730  addiu       $s6, $s6, -0x8D0
    ctx->pc = 0x110e0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965040));
    // 0x110e10: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x110e10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x110e14: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x110E14u;
    {
        const bool branch_taken_0x110e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E14u;
        // 0x110e18: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e14) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110E1Cu;
    // 0x110e1c: 0x0  nop
    ctx->pc = 0x110e1cu;
    // NOP
label_110e20:
    // 0x110e20: 0xc0533f0  jal         func_14CFC0
    ctx->pc = 0x110E20u;
    SET_GPR_U32(ctx, 31, 0x110E28u);
    ctx->pc = 0x110E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E20u;
    // 0x110e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CFC0u, 0x110E20u, 0x110E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E28u;
label_110e28:
    // 0x110e28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x110E28u;
    {
        const bool branch_taken_0x110e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E28u;
        // 0x110e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e28) {
            ctx->pc = 0x110E70u;
            goto label_110e70;
        }
    }
    ctx->pc = 0x110E30u;
    // 0x110e30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e34: 0xc0668ca  jal         func_19A328
    ctx->pc = 0x110E34u;
    SET_GPR_U32(ctx, 31, 0x110E3Cu);
    ctx->pc = 0x110E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E34u;
    // 0x110e38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A328u, 0x110E34u, 0x110E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E3Cu;
label_110e3c:
    // 0x110e3c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x110E3Cu;
    {
        const bool branch_taken_0x110e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E3Cu;
        // 0x110e40: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e3c) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110E44u;
    // 0x110e44: 0x0  nop
    ctx->pc = 0x110e44u;
    // NOP
label_110e48:
    // 0x110e48: 0xc0533f0  jal         func_14CFC0
    ctx->pc = 0x110E48u;
    SET_GPR_U32(ctx, 31, 0x110E50u);
    ctx->pc = 0x110E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E48u;
    // 0x110e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CFC0u, 0x110E48u, 0x110E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E50u;
label_110e50:
    // 0x110e50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110E50u;
    {
        const bool branch_taken_0x110e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E50u;
        // 0x110e54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e50) {
            ctx->pc = 0x110E70u;
            goto label_110e70;
        }
    }
    ctx->pc = 0x110E58u;
    // 0x110e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x110e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e5c: 0xc066a3a  jal         func_19A8E8
    ctx->pc = 0x110E5Cu;
    SET_GPR_U32(ctx, 31, 0x110E64u);
    ctx->pc = 0x110E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110E5Cu;
    // 0x110e60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A8E8u, 0x110E5Cu, 0x110E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110E64u;
label_110e64:
    // 0x110e64: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x110E64u;
    {
        const bool branch_taken_0x110e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E64u;
        // 0x110e68: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e64) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110E6Cu;
    // 0x110e6c: 0x0  nop
    ctx->pc = 0x110e6cu;
    // NOP
label_110e70:
    // 0x110e70: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x110e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x110e74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110e78: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x110e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x110e7c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110e80: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x110e80u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x110e84: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x110E84u;
    {
        const bool branch_taken_0x110e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E84u;
        // 0x110e88: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e84) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110E8Cu;
    // 0x110e8c: 0x0  nop
    ctx->pc = 0x110e8cu;
    // NOP
label_110e90:
    // 0x110e90: 0x260300c0  addiu       $v1, $s0, 0xC0
    ctx->pc = 0x110e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x110e94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110e98: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x110e98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x110e9c: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x110E9Cu;
    {
        const bool branch_taken_0x110e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E9Cu;
        // 0x110ea0: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e9c) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110EA4u;
    // 0x110ea4: 0x0  nop
    ctx->pc = 0x110ea4u;
    // NOP
label_110ea8:
    // 0x110ea8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x110ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110eac: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x110eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x110eb0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x110eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x110eb4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x110EB4u;
    {
        const bool branch_taken_0x110eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x110EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EB4u;
        // 0x110eb8: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eb4) {
            ctx->pc = 0x110ED8u;
            goto label_110ed8;
        }
    }
    ctx->pc = 0x110EBCu;
    // 0x110ebc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110EBCu;
    SET_GPR_U32(ctx, 31, 0x110EC4u);
    ctx->pc = 0x110EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EBCu;
    // 0x110ec0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110EBCu, 0x110EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EC4u;
label_110ec4:
    // 0x110ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ec8: 0xc05328a  jal         func_14CA28
    ctx->pc = 0x110EC8u;
    SET_GPR_U32(ctx, 31, 0x110ED0u);
    ctx->pc = 0x110ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EC8u;
    // 0x110ecc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CA28u, 0x110EC8u, 0x110ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110ED0u;
label_110ed0:
    // 0x110ed0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110ED0u;
    {
        const bool branch_taken_0x110ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ED0u;
        // 0x110ed4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ed0) {
            ctx->pc = 0x110EF0u;
            goto label_110ef0;
        }
    }
    ctx->pc = 0x110ED8u;
label_110ed8:
    // 0x110ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x110ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110edc: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0
    ctx->pc = 0x110edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    // 0x110ee0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x110EE0u;
    SET_GPR_U32(ctx, 31, 0x110EE8u);
    ctx->pc = 0x110EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110EE0u;
    // 0x110ee4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x110EE0u, 0x110EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110EE8u;
label_110ee8:
    // 0x110ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110eec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x110eecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_110ef0:
    // 0x110ef0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x110EF0u;
    {
        const bool branch_taken_0x110ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EF0u;
        // 0x110ef4: 0x2694fffa  addiu       $s4, $s4, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ef0) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110EF8u;
label_110ef8:
    // 0x110ef8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x110ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x110efc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110f00: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x110f00u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x110f04: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x110F04u;
    {
        const bool branch_taken_0x110f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F04u;
        // 0x110f08: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f04) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110F0Cu;
    // 0x110f0c: 0x0  nop
    ctx->pc = 0x110f0cu;
    // NOP
label_110f10:
    // 0x110f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f14: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110F14u;
    SET_GPR_U32(ctx, 31, 0x110F1Cu);
    ctx->pc = 0x110F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F14u;
    // 0x110f18: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110F14u, 0x110F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F1Cu;
label_110f1c:
    // 0x110f1c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x110f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x110f20: 0xc04e2a0  jal         func_138A80
    ctx->pc = 0x110F20u;
    SET_GPR_U32(ctx, 31, 0x110F28u);
    ctx->pc = 0x110F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F20u;
    // 0x110f24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138A80u, 0x110F20u, 0x110F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F28u;
label_110f28:
    // 0x110f28: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x110F28u;
    {
        const bool branch_taken_0x110f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F28u;
        // 0x110f2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f28) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110F30u;
label_110f30:
    // 0x110f30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x110f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f34: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x110F34u;
    SET_GPR_U32(ctx, 31, 0x110F3Cu);
    ctx->pc = 0x110F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F34u;
    // 0x110f38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x110F34u, 0x110F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F3Cu;
label_110f3c:
    // 0x110f3c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x110F3Cu;
    {
        const bool branch_taken_0x110f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F3Cu;
        // 0x110f40: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f3c) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110F44u;
    // 0x110f44: 0x0  nop
    ctx->pc = 0x110f44u;
    // NOP
label_110f48:
    // 0x110f48: 0x8f908a30  lw          $s0, -0x75D0($gp)
    ctx->pc = 0x110f48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x110f4c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x110f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x110f50: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x110f50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110f54: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x110f54u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x110f58: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x110F58u;
    {
        const bool branch_taken_0x110f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F58u;
        // 0x110f5c: 0x2683ffff  addiu       $v1, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f58) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x110F60u;
label_110f60:
    // 0x110f60: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110F60u;
    SET_GPR_U32(ctx, 31, 0x110F68u);
    ctx->pc = 0x110F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110F60u;
    // 0x110f64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110F60u, 0x110F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110F68u;
label_110f68:
    // 0x110f68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110f6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x110f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x110f70: 0x8c513630  lw          $s1, 0x3630($v0)
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x110f74: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x110F74u;
    {
        const bool branch_taken_0x110f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F74u;
        // 0x110f78: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f74) {
            ctx->pc = 0x110F98u;
            goto label_110f98;
        }
    }
    ctx->pc = 0x110F7Cu;
    // 0x110f7c: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x110f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x110f80: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x110F80u;
    {
        const bool branch_taken_0x110f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110f80) {
            ctx->pc = 0x110F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110F80u;
            // 0x110f84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110F9Cu;
            goto label_110f9c;
        }
    }
    ctx->pc = 0x110F88u;
    // 0x110f88: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x110f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x110f8c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x110F8Cu;
    {
        const bool branch_taken_0x110f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110f8c) {
            ctx->pc = 0x110F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110F8Cu;
            // 0x110f90: 0x8e2201ac  lw          $v0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110FACu;
            goto label_110fac;
        }
    }
    ctx->pc = 0x110F94u;
    // 0x110f94: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x110f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_110f98:
    // 0x110f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_110f9c:
    // 0x110f9c: 0x24a53eb8  addiu       $a1, $a1, 0x3EB8
    ctx->pc = 0x110f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16056));
    // 0x110fa0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x110FA0u;
    SET_GPR_U32(ctx, 31, 0x110FA8u);
    ctx->pc = 0x110FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FA0u;
    // 0x110fa4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x110FA0u, 0x110FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FA8u;
label_110fa8:
    // 0x110fa8: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x110fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
label_110fac:
    // 0x110fac: 0x2414001b  addiu       $s4, $zero, 0x1B
    ctx->pc = 0x110facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x110fb0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x110FB0u;
    {
        const bool branch_taken_0x110fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FB0u;
        // 0x110fb4: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fb0) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110FB8u;
label_110fb8:
    // 0x110fb8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x110FB8u;
    SET_GPR_U32(ctx, 31, 0x110FC0u);
    ctx->pc = 0x110FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110FB8u;
    // 0x110fbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x110FB8u, 0x110FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110FC0u;
label_110fc0:
    // 0x110fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x110fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x110fc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x110fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x110fc8: 0x8c503630  lw          $s0, 0x3630($v0)
    ctx->pc = 0x110fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13872)));
    // 0x110fcc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x110fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x110fd0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x110FD0u;
    {
        const bool branch_taken_0x110fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FD0u;
        // 0x110fd4: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fd0) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110FD8u;
label_110fd8:
    // 0x110fd8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x110fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x110fdc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x110fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x110fe0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x110FE0u;
    {
        const bool branch_taken_0x110fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FE0u;
        // 0x110fe4: 0x8c750044  lw          $s5, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fe0) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110FE8u;
label_110fe8:
    // 0x110fe8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x110fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x110fec: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x110fecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x110ff0: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x110ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x110ff4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x110FF4u;
    {
        const bool branch_taken_0x110ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FF4u;
        // 0x110ff8: 0x8c550044  lw          $s5, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ff4) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x110FFCu;
    // 0x110ffc: 0x0  nop
    ctx->pc = 0x110ffcu;
    // NOP
label_111000:
    // 0x111000: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x111000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x111004: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x111004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x111008: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x111008u;
    {
        const bool branch_taken_0x111008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111008u;
        // 0x11100c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111008) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x111010u;
label_111010:
    // 0x111010: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x111010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x111014: 0x24140019  addiu       $s4, $zero, 0x19
    ctx->pc = 0x111014u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x111018: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x111018u;
    {
        const bool branch_taken_0x111018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111018u;
        // 0x11101c: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111018) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x111020u;
label_111020:
    // 0x111020: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111020u;
    SET_GPR_U32(ctx, 31, 0x111028u);
    ctx->pc = 0x111024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111020u;
    // 0x111024: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111020u, 0x111028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111028u;
label_111028:
    // 0x111028: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x111028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11102c: 0x30510fff  andi        $s1, $v0, 0xFFF
    ctx->pc = 0x11102cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x111030: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x111030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111034: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x111034u;
    {
        const bool branch_taken_0x111034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111034) {
            ctx->pc = 0x111038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111034u;
            // 0x111038: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111054u;
            goto label_111054;
        }
    }
    ctx->pc = 0x11103Cu;
    // 0x11103c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11103cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111044: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0
    ctx->pc = 0x111044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    // 0x111048: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111048u;
    SET_GPR_U32(ctx, 31, 0x111050u);
    ctx->pc = 0x11104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111048u;
    // 0x11104c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111048u, 0x111050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111050u;
label_111050:
    // 0x111050: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x111050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_111054:
    // 0x111054: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x111054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x111058: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x111058u;
    {
        const bool branch_taken_0x111058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111058u;
        // 0x11105c: 0x2414001a  addiu       $s4, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111058) {
            ctx->pc = 0x11109Cu;
            goto label_11109c;
        }
    }
    ctx->pc = 0x111060u;
label_111060:
    // 0x111060: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111060u;
    SET_GPR_U32(ctx, 31, 0x111068u);
    ctx->pc = 0x111064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111060u;
    // 0x111064: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111060u, 0x111068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111068u;
label_111068:
    // 0x111068: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x111068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11106c: 0x30510fff  andi        $s1, $v0, 0xFFF
    ctx->pc = 0x11106cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x111070: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x111070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111074: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x111074u;
    {
        const bool branch_taken_0x111074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111074) {
            ctx->pc = 0x111078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111074u;
            // 0x111078: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111094u;
            goto label_111094;
        }
    }
    ctx->pc = 0x11107Cu;
    // 0x11107c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11107cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111084: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0
    ctx->pc = 0x111084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    // 0x111088: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111088u;
    SET_GPR_U32(ctx, 31, 0x111090u);
    ctx->pc = 0x11108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111088u;
    // 0x11108c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111088u, 0x111090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111090u;
label_111090:
    // 0x111090: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x111090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_111094:
    // 0x111094: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x111094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x111098: 0x2414001b  addiu       $s4, $zero, 0x1B
    ctx->pc = 0x111098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_11109c:
    // 0x11109c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11109cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1110a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1110A0u;
    {
        const bool branch_taken_0x1110a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110A0u;
        // 0x1110a4: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110a0) {
            ctx->pc = 0x1110ACu;
            goto label_1110ac;
        }
    }
    ctx->pc = 0x1110A8u;
label_1110a8:
    // 0x1110a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1110a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1110ac:
    // 0x1110ac: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1110acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_1110b0:
    // 0x1110b0: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x1110b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x1110b4: 0x50400115  beql        $v0, $zero, . + 4 + (0x115 << 2)
    ctx->pc = 0x1110B4u;
    {
        const bool branch_taken_0x1110b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1110b4) {
            ctx->pc = 0x1110B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1110B4u;
            // 0x1110b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1110BCu;
    // 0x1110bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1110bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1110c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1110c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1110c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1110c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1110c8: 0x8c633f90  lw          $v1, 0x3F90($v1)
    ctx->pc = 0x1110c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16272)));
    // 0x1110cc: 0x600008  jr          $v1
    ctx->pc = 0x1110CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1110D8u: goto label_1110d8;
            case 0x111108u: goto label_111108;
            case 0x111138u: goto label_111138;
            case 0x111168u: goto label_111168;
            case 0x111178u: goto label_111178;
            case 0x111188u: goto label_111188;
            case 0x1111A8u: goto label_1111a8;
            case 0x1111E0u: goto label_1111e0;
            case 0x1113E0u: goto label_1113e0;
            case 0x1114E0u: goto label_1114e0;
            case 0x1114F8u: goto label_1114f8;
            case 0x111508u: goto label_111508;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1110CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1110D4u;
    // 0x1110d4: 0x0  nop
    ctx->pc = 0x1110d4u;
    // NOP
label_1110d8:
    // 0x1110d8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1110d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1110dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1110dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1110e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1110e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1110e4: 0x50640109  beql        $v1, $a0, . + 4 + (0x109 << 2)
    ctx->pc = 0x1110E4u;
    {
        const bool branch_taken_0x1110e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1110e4) {
            ctx->pc = 0x1110E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1110E4u;
            // 0x1110e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1110ECu;
    // 0x1110ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1110ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1110f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110f4: 0xc0442de  jal         func_110B78
    ctx->pc = 0x1110F4u;
    SET_GPR_U32(ctx, 31, 0x1110FCu);
    ctx->pc = 0x1110F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110F4u;
    // 0x1110f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B78u, 0x1110F4u, 0x1110FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110FCu;
label_1110fc:
    // 0x1110fc: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x1110FCu;
    {
        const bool branch_taken_0x1110fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110FCu;
        // 0x111100: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110fc) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x111104u;
    // 0x111104: 0x0  nop
    ctx->pc = 0x111104u;
    // NOP
label_111108:
    // 0x111108: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x111108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11110c: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x11110cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x111110: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x111110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x111114: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x111114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111118: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x111118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x11111c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111120: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111124: 0xc0442a8  jal         func_110AA0
    ctx->pc = 0x111124u;
    SET_GPR_U32(ctx, 31, 0x11112Cu);
    ctx->pc = 0x111128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111124u;
    // 0x111128: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110AA0u, 0x111124u, 0x11112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x11112Cu;
    {
        const bool branch_taken_0x11112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11112Cu;
        // 0x111130: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11112c) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x111134u;
    // 0x111134: 0x0  nop
    ctx->pc = 0x111134u;
    // NOP
label_111138:
    // 0x111138: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x111138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x11113c: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x11113cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x111140: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x111140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x111144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x111144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111148: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x111148u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x11114c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111150: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111154: 0xc04425e  jal         func_110978
    ctx->pc = 0x111154u;
    SET_GPR_U32(ctx, 31, 0x11115Cu);
    ctx->pc = 0x111158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111154u;
    // 0x111158: 0x2300a  movz        $a2, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110978u, 0x111154u, 0x11115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11115Cu;
label_11115c:
    // 0x11115c: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x11115Cu;
    {
        const bool branch_taken_0x11115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11115Cu;
        // 0x111160: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11115c) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x111164u;
    // 0x111164: 0x0  nop
    ctx->pc = 0x111164u;
    // NOP
label_111168:
    // 0x111168: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x111168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11116c: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x11116cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x111170: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x111170u;
    {
        const bool branch_taken_0x111170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111170u;
        // 0x111174: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111170) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x111178u;
label_111178:
    // 0x111178: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x111178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11117c: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x11117cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x111180: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x111180u;
    {
        const bool branch_taken_0x111180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111180u;
        // 0x111184: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111180) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x111188u;
label_111188:
    // 0x111188: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x111188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11118c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x11118cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x111190: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x111190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x111194: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x111194u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x111198: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x111198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11119c: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x11119cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x1111a0: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1111A0u;
    {
        const bool branch_taken_0x1111a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111A0u;
        // 0x1111a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111a0) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1111A8u;
label_1111a8:
    // 0x1111a8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1111a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1111ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1111acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1111b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1111b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1111b4: 0x106400d5  beq         $v1, $a0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1111B4u;
    {
        const bool branch_taken_0x1111b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1111B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111B4u;
        // 0x1111b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111b4) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1111BCu;
    // 0x1111bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1111bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111c0: 0xc0416dc  jal         func_105B70
    ctx->pc = 0x1111C0u;
    SET_GPR_U32(ctx, 31, 0x1111C8u);
    ctx->pc = 0x1111C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111C0u;
    // 0x1111c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B70u, 0x1111C0u, 0x1111C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111C8u;
label_1111c8:
    // 0x1111c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1111c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1111ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1111d0: 0xc0442de  jal         func_110B78
    ctx->pc = 0x1111D0u;
    SET_GPR_U32(ctx, 31, 0x1111D8u);
    ctx->pc = 0x1111D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111D0u;
    // 0x1111d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B78u, 0x1111D0u, 0x1111D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111D8u;
label_1111d8:
    // 0x1111d8: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1111D8u;
    {
        const bool branch_taken_0x1111d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111D8u;
        // 0x1111dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111d8) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1111E0u;
label_1111e0:
    // 0x1111e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1111E0u;
    SET_GPR_U32(ctx, 31, 0x1111E8u);
    ctx->pc = 0x1111E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1111E0u;
    // 0x1111e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1111E0u, 0x1111E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1111E8u;
label_1111e8:
    // 0x1111e8: 0x12a00073  beqz        $s5, . + 4 + (0x73 << 2)
    ctx->pc = 0x1111E8u;
    {
        const bool branch_taken_0x1111e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1111ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111E8u;
        // 0x1111ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1111e8) {
            ctx->pc = 0x1113B8u;
            goto label_1113b8;
        }
    }
    ctx->pc = 0x1111F0u;
    // 0x1111f0: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x1111f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1111f4: 0x24021846  addiu       $v0, $zero, 0x1846
    ctx->pc = 0x1111f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x1111f8: 0x54620035  bnel        $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1111F8u;
    {
        const bool branch_taken_0x1111f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1111f8) {
            ctx->pc = 0x1111FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1111F8u;
            // 0x1111fc: 0x24022846  addiu       $v0, $zero, 0x2846 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10310));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1112D0u;
            goto label_1112d0;
        }
    }
    ctx->pc = 0x111200u;
    // 0x111200: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x111200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x111204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111208: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x111208u;
    SET_GPR_U32(ctx, 31, 0x111210u);
    ctx->pc = 0x11120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111208u;
    // 0x11120c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x111208u, 0x111210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111210u;
label_111210:
    // 0x111210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x111210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111214: 0xc04171a  jal         func_105C68
    ctx->pc = 0x111214u;
    SET_GPR_U32(ctx, 31, 0x11121Cu);
    ctx->pc = 0x111218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111214u;
    // 0x111218: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x111214u, 0x11121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11121Cu;
label_11121c:
    // 0x11121c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11121Cu;
    {
        const bool branch_taken_0x11121c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11121Cu;
        // 0x111220: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11121c) {
            ctx->pc = 0x111290u;
            goto label_111290;
        }
    }
    ctx->pc = 0x111224u;
    // 0x111224: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x111224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x111228: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11122c: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11122Cu;
    {
        const bool branch_taken_0x11122c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x111230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11122Cu;
        // 0x111230: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11122c) {
            ctx->pc = 0x11127Cu;
            goto label_11127c;
        }
    }
    ctx->pc = 0x111234u;
    // 0x111234: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111234u;
    SET_GPR_U32(ctx, 31, 0x11123Cu);
    ctx->pc = 0x111238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111234u;
    // 0x111238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111234u, 0x11123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11123Cu;
label_11123c:
    // 0x11123c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11123cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111240: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111244: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x111244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111248: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111248u;
    {
        const bool branch_taken_0x111248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111248u;
        // 0x11124c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111248) {
            ctx->pc = 0x111278u;
            goto label_111278;
        }
    }
    ctx->pc = 0x111250u;
    // 0x111250: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x111250u;
    {
        const bool branch_taken_0x111250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111250u;
        // 0x111254: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111250) {
            ctx->pc = 0x111274u;
            goto label_111274;
        }
    }
    ctx->pc = 0x111258u;
label_111258:
    // 0x111258: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x111258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11125c: 0x0  nop
    ctx->pc = 0x11125cu;
    // NOP
    // 0x111260: 0x0  nop
    ctx->pc = 0x111260u;
    // NOP
    // 0x111264: 0x0  nop
    ctx->pc = 0x111264u;
    // NOP
    // 0x111268: 0x0  nop
    ctx->pc = 0x111268u;
    // NOP
    // 0x11126c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11126Cu;
    {
        const bool branch_taken_0x11126c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11126Cu;
        // 0x111270: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11126c) {
            ctx->pc = 0x111258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111258;
        }
    }
    ctx->pc = 0x111274u;
label_111274:
    // 0x111274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x111274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111278:
    // 0x111278: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x111278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11127c:
    // 0x11127c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x11127cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111280: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x111280u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x111284: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x111284u;
    {
        const bool branch_taken_0x111284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111284) {
            ctx->pc = 0x1113A4u;
            goto label_1113a4;
        }
    }
    ctx->pc = 0x11128Cu;
    // 0x11128c: 0x0  nop
    ctx->pc = 0x11128cu;
    // NOP
label_111290:
    // 0x111290: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111290u;
    {
        const bool branch_taken_0x111290 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x111290) {
            ctx->pc = 0x1112A0u;
            goto label_1112a0;
        }
    }
    ctx->pc = 0x111298u;
    // 0x111298: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x111298u;
    {
        const bool branch_taken_0x111298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111298u;
        // 0x11129c: 0x8ea201b4  lw          $v0, 0x1B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111298) {
            ctx->pc = 0x11138Cu;
            goto label_11138c;
        }
    }
    ctx->pc = 0x1112A0u;
label_1112a0:
    // 0x1112a0: 0x6230005  bgezl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1112A0u;
    {
        const bool branch_taken_0x1112a0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1112a0) {
            ctx->pc = 0x1112A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1112A0u;
            // 0x1112a4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1112B8u;
            goto label_1112b8;
        }
    }
    ctx->pc = 0x1112A8u;
    // 0x1112a8: 0x8ea301b4  lw          $v1, 0x1B4($s5)
    ctx->pc = 0x1112a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
    // 0x1112ac: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x1112acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1112b0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1112B0u;
    {
        const bool branch_taken_0x1112b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112B0u;
        // 0x1112b4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112b0) {
            ctx->pc = 0x11138Cu;
            goto label_11138c;
        }
    }
    ctx->pc = 0x1112B8u;
label_1112b8:
    // 0x1112b8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1112b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1112bc: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x1112bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1112c0: 0x4420032  bltzl       $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1112C0u;
    {
        const bool branch_taken_0x1112c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1112c0) {
            ctx->pc = 0x1112C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1112C0u;
            // 0x1112c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11138Cu;
            goto label_11138c;
        }
    }
    ctx->pc = 0x1112C8u;
    // 0x1112c8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1112C8u;
    {
        const bool branch_taken_0x1112c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112C8u;
        // 0x1112cc: 0x8ea301b4  lw          $v1, 0x1B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112c8) {
            ctx->pc = 0x111384u;
            goto label_111384;
        }
    }
    ctx->pc = 0x1112D0u;
label_1112d0:
    // 0x1112d0: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1112D0u;
    {
        const bool branch_taken_0x1112d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112D0u;
        // 0x1112d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112d0) {
            ctx->pc = 0x1113B8u;
            goto label_1113b8;
        }
    }
    ctx->pc = 0x1112D8u;
    // 0x1112d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1112d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112dc: 0xc05ac0a  jal         func_16B028
    ctx->pc = 0x1112DCu;
    SET_GPR_U32(ctx, 31, 0x1112E4u);
    ctx->pc = 0x1112E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112DCu;
    // 0x1112e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B028u, 0x1112DCu, 0x1112E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E4u;
label_1112e4:
    // 0x1112e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1112e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112e8: 0xc04171a  jal         func_105C68
    ctx->pc = 0x1112E8u;
    SET_GPR_U32(ctx, 31, 0x1112F0u);
    ctx->pc = 0x1112ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112E8u;
    // 0x1112ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x1112E8u, 0x1112F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112F0u;
label_1112f0:
    // 0x1112f0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1112F0u;
    {
        const bool branch_taken_0x1112f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112F0u;
        // 0x1112f4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112f0) {
            ctx->pc = 0x111368u;
            goto label_111368;
        }
    }
    ctx->pc = 0x1112F8u;
    // 0x1112f8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1112f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1112fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1112fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111300: 0x10640014  beq         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x111300u;
    {
        const bool branch_taken_0x111300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x111304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111300u;
        // 0x111304: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111300) {
            ctx->pc = 0x111354u;
            goto label_111354;
        }
    }
    ctx->pc = 0x111308u;
    // 0x111308: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111308u;
    SET_GPR_U32(ctx, 31, 0x111310u);
    ctx->pc = 0x11130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111308u;
    // 0x11130c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111308u, 0x111310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111310u;
label_111310:
    // 0x111310: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111314: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x111314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x111318: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x111318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11131c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11131Cu;
    {
        const bool branch_taken_0x11131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11131Cu;
        // 0x111320: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11131c) {
            ctx->pc = 0x111350u;
            goto label_111350;
        }
    }
    ctx->pc = 0x111324u;
    // 0x111324: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x111324u;
    {
        const bool branch_taken_0x111324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111324u;
        // 0x111328: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111324) {
            ctx->pc = 0x11134Cu;
            goto label_11134c;
        }
    }
    ctx->pc = 0x11132Cu;
    // 0x11132c: 0x0  nop
    ctx->pc = 0x11132cu;
    // NOP
label_111330:
    // 0x111330: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x111330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x111334: 0x0  nop
    ctx->pc = 0x111334u;
    // NOP
    // 0x111338: 0x0  nop
    ctx->pc = 0x111338u;
    // NOP
    // 0x11133c: 0x0  nop
    ctx->pc = 0x11133cu;
    // NOP
    // 0x111340: 0x0  nop
    ctx->pc = 0x111340u;
    // NOP
    // 0x111344: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111344u;
    {
        const bool branch_taken_0x111344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111344u;
        // 0x111348: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111344) {
            ctx->pc = 0x111330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111330;
        }
    }
    ctx->pc = 0x11134Cu;
label_11134c:
    // 0x11134c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111350:
    // 0x111350: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_111354:
    // 0x111354: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x111354u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x111358: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x111358u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x11135c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11135Cu;
    {
        const bool branch_taken_0x11135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11135c) {
            ctx->pc = 0x1113A4u;
            goto label_1113a4;
        }
    }
    ctx->pc = 0x111364u;
    // 0x111364: 0x0  nop
    ctx->pc = 0x111364u;
    // NOP
label_111368:
    // 0x111368: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x111368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11136c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111370: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x111370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x111374: 0x8c420c0c  lw          $v0, 0xC0C($v0)
    ctx->pc = 0x111374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3084)));
    // 0x111378: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111378u;
    {
        const bool branch_taken_0x111378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x111378) {
            ctx->pc = 0x11137Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111378u;
            // 0x11137c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11138Cu;
            goto label_11138c;
        }
    }
    ctx->pc = 0x111380u;
    // 0x111380: 0x8ea301b4  lw          $v1, 0x1B4($s5)
    ctx->pc = 0x111380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
label_111384:
    // 0x111384: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x111384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x111388: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x111388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11138c:
    // 0x11138c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x11138Cu;
    {
        const bool branch_taken_0x11138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11138Cu;
        // 0x111390: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11138c) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x111394u;
    // 0x111394: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x111394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111398: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x111398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x11139c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x11139cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1113a0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1113a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_1113a4:
    // 0x1113a4: 0xc04171a  jal         func_105C68
    ctx->pc = 0x1113A4u;
    SET_GPR_U32(ctx, 31, 0x1113ACu);
    ctx->pc = 0x1113A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113A4u;
    // 0x1113a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x1113A4u, 0x1113ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113ACu;
label_1113ac:
    // 0x1113ac: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1113ACu;
    {
        const bool branch_taken_0x1113ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113ACu;
        // 0x1113b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113ac) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1113B4u;
    // 0x1113b4: 0x0  nop
    ctx->pc = 0x1113b4u;
    // NOP
label_1113b8:
    // 0x1113b8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1113B8u;
    {
        const bool branch_taken_0x1113b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113b8) {
            ctx->pc = 0x1113BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1113B8u;
            // 0x1113bc: 0x8e700024  lw          $s0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1113C0u;
            goto label_1113c0;
        }
    }
    ctx->pc = 0x1113C0u;
label_1113c0:
    // 0x1113c0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1113c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1113c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1113c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113c8: 0x24a53ee0  addiu       $a1, $a1, 0x3EE0
    ctx->pc = 0x1113c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16096));
    // 0x1113cc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1113CCu;
    SET_GPR_U32(ctx, 31, 0x1113D4u);
    ctx->pc = 0x1113D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113CCu;
    // 0x1113d0: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1113CCu, 0x1113D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113D4u;
label_1113d4:
    // 0x1113d4: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1113D4u;
    {
        const bool branch_taken_0x1113d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113D4u;
        // 0x1113d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113d4) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1113DCu;
    // 0x1113dc: 0x0  nop
    ctx->pc = 0x1113dcu;
    // NOP
label_1113e0:
    // 0x1113e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1113e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113e4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1113E4u;
    SET_GPR_U32(ctx, 31, 0x1113ECu);
    ctx->pc = 0x1113E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113E4u;
    // 0x1113e8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1113E4u, 0x1113ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113ECu;
label_1113ec:
    // 0x1113ec: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1113ECu;
    {
        const bool branch_taken_0x1113ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113ECu;
        // 0x1113f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113ec) {
            ctx->pc = 0x111404u;
            goto label_111404;
        }
    }
    ctx->pc = 0x1113F4u;
    // 0x1113f4: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x1113f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1113f8: 0x24021846  addiu       $v0, $zero, 0x1846
    ctx->pc = 0x1113f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x1113fc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1113FCu;
    {
        const bool branch_taken_0x1113fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x111400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113FCu;
        // 0x111400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113fc) {
            ctx->pc = 0x111424u;
            goto label_111424;
        }
    }
    ctx->pc = 0x111404u;
label_111404:
    // 0x111404: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x111404u;
    {
        const bool branch_taken_0x111404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x111404) {
            ctx->pc = 0x111408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111404u;
            // 0x111408: 0x8e700024  lw          $s0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11140Cu;
            goto label_11140c;
        }
    }
    ctx->pc = 0x11140Cu;
label_11140c:
    // 0x11140c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11140cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111414: 0x24a53ee0  addiu       $a1, $a1, 0x3EE0
    ctx->pc = 0x111414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16096));
    // 0x111418: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111418u;
    SET_GPR_U32(ctx, 31, 0x111420u);
    ctx->pc = 0x11141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111418u;
    // 0x11141c: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111418u, 0x111420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111420u;
label_111420:
    // 0x111420: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_111424:
    // 0x111424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x111424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111428: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x111428u;
    SET_GPR_U32(ctx, 31, 0x111430u);
    ctx->pc = 0x11142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111428u;
    // 0x11142c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x111428u, 0x111430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111430u;
label_111430:
    // 0x111430: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x111430u;
    {
        const bool branch_taken_0x111430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111430) {
            ctx->pc = 0x111478u;
            goto label_111478;
        }
    }
    ctx->pc = 0x111438u;
    // 0x111438: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x111438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11143c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x11143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x111440: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x111440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x111444: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x111444u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111448: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x111448u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11144c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x11144cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x111450: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x111450u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x111454: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x111454u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x111458: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x111458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11145c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11145cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x111460: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x111460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x111464: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x111464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x111468: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x111468u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11146c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x11146Cu;
    {
        const bool branch_taken_0x11146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11146Cu;
        // 0x111470: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11146c) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x111474u;
    // 0x111474: 0x0  nop
    ctx->pc = 0x111474u;
    // NOP
label_111478:
    // 0x111478: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111478u;
    {
        const bool branch_taken_0x111478 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x111478) {
            ctx->pc = 0x111488u;
            goto label_111488;
        }
    }
    ctx->pc = 0x111480u;
    // 0x111480: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x111480u;
    {
        const bool branch_taken_0x111480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111480u;
        // 0x111484: 0x8e8201b4  lw          $v0, 0x1B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111480) {
            ctx->pc = 0x1114C4u;
            goto label_1114c4;
        }
    }
    ctx->pc = 0x111488u;
label_111488:
    // 0x111488: 0x6230005  bgezl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x111488u;
    {
        const bool branch_taken_0x111488 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x111488) {
            ctx->pc = 0x11148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111488u;
            // 0x11148c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1114A0u;
            goto label_1114a0;
        }
    }
    ctx->pc = 0x111490u;
    // 0x111490: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x111490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x111494: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x111494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x111498: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x111498u;
    {
        const bool branch_taken_0x111498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111498u;
        // 0x11149c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111498) {
            ctx->pc = 0x1114C4u;
            goto label_1114c4;
        }
    }
    ctx->pc = 0x1114A0u;
label_1114a0:
    // 0x1114a0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1114a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1114a4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x1114a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1114a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1114A8u;
    {
        const bool branch_taken_0x1114a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1114ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114A8u;
        // 0x1114ac: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114a8) {
            ctx->pc = 0x1114C0u;
            goto label_1114c0;
        }
    }
    ctx->pc = 0x1114B0u;
    // 0x1114b0: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x1114b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x1114b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1114B4u;
    {
        const bool branch_taken_0x1114b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114B4u;
        // 0x1114b8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114b4) {
            ctx->pc = 0x1114C4u;
            goto label_1114c4;
        }
    }
    ctx->pc = 0x1114BCu;
    // 0x1114bc: 0x0  nop
    ctx->pc = 0x1114bcu;
    // NOP
label_1114c0:
    // 0x1114c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1114c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1114c4:
    // 0x1114c4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1114C4u;
    {
        const bool branch_taken_0x1114c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114C4u;
        // 0x1114c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114c4) {
            ctx->pc = 0x111508u;
            goto label_111508;
        }
    }
    ctx->pc = 0x1114CCu;
    // 0x1114cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1114ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1114d0: 0xc04425e  jal         func_110978
    ctx->pc = 0x1114D0u;
    SET_GPR_U32(ctx, 31, 0x1114D8u);
    ctx->pc = 0x1114D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114D0u;
    // 0x1114d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110978u, 0x1114D0u, 0x1114D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114D8u;
label_1114d8:
    // 0x1114d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1114D8u;
    {
        const bool branch_taken_0x1114d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114D8u;
        // 0x1114dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114d8) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1114E0u;
label_1114e0:
    // 0x1114e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1114e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1114e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114e8: 0xc0442a8  jal         func_110AA0
    ctx->pc = 0x1114E8u;
    SET_GPR_U32(ctx, 31, 0x1114F0u);
    ctx->pc = 0x1114ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1114E8u;
    // 0x1114ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110AA0u, 0x1114E8u, 0x1114F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1114F0u;
label_1114f0:
    // 0x1114f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1114F0u;
    {
        const bool branch_taken_0x1114f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1114F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114F0u;
        // 0x1114f4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1114f0) {
            ctx->pc = 0x11150Cu;
            goto label_11150c;
        }
    }
    ctx->pc = 0x1114F8u;
label_1114f8:
    // 0x1114f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1114f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1114fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1114fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111500: 0xc04425e  jal         func_110978
    ctx->pc = 0x111500u;
    SET_GPR_U32(ctx, 31, 0x111508u);
    ctx->pc = 0x111504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111500u;
    // 0x111504: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110978u, 0x111500u, 0x111508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111508u;
label_111508:
    // 0x111508: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11150c:
    // 0x11150c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11150cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x111510: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111514: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x111514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x111518: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x111518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11151c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11151cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x111520: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x111520u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111524: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x111524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x111528: 0x3e00008  jr          $ra
    ctx->pc = 0x111528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111528u;
        // 0x11152c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111530u;
}
