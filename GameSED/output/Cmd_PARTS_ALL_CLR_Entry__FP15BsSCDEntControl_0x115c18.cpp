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

// Function: Cmd_PARTS_ALL_CLR_Entry__FP15BsSCDEntControl
// Address: 0x115c18 - 0x115e1c
void Cmd_PARTS_ALL_CLR_Entry__FP15BsSCDEntControl_0x115c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PARTS_ALL_CLR_Entry__FP15BsSCDEntControl_0x115c18");
#endif

    switch (ctx->pc) {
        case 0x115c40u: goto label_115c40;
        case 0x115c60u: goto label_115c60;
        case 0x115c78u: goto label_115c78;
        case 0x115c94u: goto label_115c94;
        case 0x115d60u: goto label_115d60;
        case 0x115d80u: goto label_115d80;
        case 0x115db8u: goto label_115db8;
        case 0x115dc8u: goto label_115dc8;
        default: break;
    }

    ctx->pc = 0x115c18u;

    // 0x115c18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x115c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115c1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x115c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x115c20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x115c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x115c24: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x115c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x115c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115c30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x115c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x115c34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x115c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x115c38: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115C38u;
    SET_GPR_U32(ctx, 31, 0x115C40u);
    ctx->pc = 0x115C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C38u;
    // 0x115c3c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115C38u, 0x115C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C40u;
label_115c40:
    // 0x115c40: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x115c40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c44: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115c48: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x115c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115c4c: 0x3c14001f  lui         $s4, 0x1F
    ctx->pc = 0x115c4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31 << 16));
    // 0x115c50: 0x2694d190  addiu       $s4, $s4, -0x2E70
    ctx->pc = 0x115c50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955408));
    // 0x115c54: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x115c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x115c58: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x115c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x115c5c: 0x0  nop
    ctx->pc = 0x115c5cu;
    // NOP
label_115c60:
    // 0x115c60: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x115c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115c68: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x115c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x115c6c: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x115C6Cu;
    {
        const bool branch_taken_0x115c6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x115C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C6Cu;
        // 0x115c70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c6c) {
            ctx->pc = 0x115D34u;
            goto label_115d34;
        }
    }
    ctx->pc = 0x115C74u;
    // 0x115c74: 0x0  nop
    ctx->pc = 0x115c74u;
    // NOP
label_115c78:
    // 0x115c78: 0x3270ffff  andi        $s0, $s3, 0xFFFF
    ctx->pc = 0x115c78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x115c7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115c80: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x115c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x115c84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x115c88: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x115c88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x115c8c: 0xc045360  jal         func_114D80
    ctx->pc = 0x115C8Cu;
    SET_GPR_U32(ctx, 31, 0x115C94u);
    ctx->pc = 0x115C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C8Cu;
    // 0x115c90: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115C8Cu, 0x115C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C94u;
label_115c94:
    // 0x115c94: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x115c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x115c98: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x115C98u;
    {
        const bool branch_taken_0x115c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C98u;
        // 0x115c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c98) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115CA0u;
    // 0x115ca0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x115ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x115ca4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x115ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x115ca8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115cac: 0x8c6344d0  lw          $v1, 0x44D0($v1)
    ctx->pc = 0x115cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17616)));
    // 0x115cb0: 0x600008  jr          $v1
    ctx->pc = 0x115CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115CB8u: goto label_115cb8;
            case 0x115CC0u: goto label_115cc0;
            case 0x115CC8u: goto label_115cc8;
            case 0x115CD0u: goto label_115cd0;
            case 0x115CD8u: goto label_115cd8;
            case 0x115CE0u: goto label_115ce0;
            case 0x115CE8u: goto label_115ce8;
            case 0x115CF0u: goto label_115cf0;
            case 0x115CF8u: goto label_115cf8;
            case 0x115D00u: goto label_115d00;
            case 0x115D08u: goto label_115d08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115CB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x115CB8u;
label_115cb8:
    // 0x115cb8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115CB8u;
    {
        const bool branch_taken_0x115cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CB8u;
        // 0x115cbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cb8) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115CC0u;
label_115cc0:
    // 0x115cc0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x115CC0u;
    {
        const bool branch_taken_0x115cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CC0u;
        // 0x115cc4: 0x2625004c  addiu       $a1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cc0) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115CC8u;
label_115cc8:
    // 0x115cc8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115CC8u;
    {
        const bool branch_taken_0x115cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CC8u;
        // 0x115ccc: 0x2625007c  addiu       $a1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cc8) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115CD0u;
label_115cd0:
    // 0x115cd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x115CD0u;
    {
        const bool branch_taken_0x115cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CD0u;
        // 0x115cd4: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cd0) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115CD8u;
label_115cd8:
    // 0x115cd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x115CD8u;
    {
        const bool branch_taken_0x115cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CD8u;
        // 0x115cdc: 0x262500e8  addiu       $a1, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cd8) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115CE0u;
label_115ce0:
    // 0x115ce0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x115CE0u;
    {
        const bool branch_taken_0x115ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CE0u;
        // 0x115ce4: 0x2625011c  addiu       $a1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ce0) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115CE8u;
label_115ce8:
    // 0x115ce8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115CE8u;
    {
        const bool branch_taken_0x115ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CE8u;
        // 0x115cec: 0x2625014c  addiu       $a1, $s1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ce8) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115CF0u;
label_115cf0:
    // 0x115cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115CF0u;
    {
        const bool branch_taken_0x115cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CF0u;
        // 0x115cf4: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cf0) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115CF8u;
label_115cf8:
    // 0x115cf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115CF8u;
    {
        const bool branch_taken_0x115cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115CF8u;
        // 0x115cfc: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115cf8) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115D00u;
label_115d00:
    // 0x115d00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115D00u;
    {
        const bool branch_taken_0x115d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D00u;
        // 0x115d04: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d00) {
            ctx->pc = 0x115D0Cu;
            goto label_115d0c;
        }
    }
    ctx->pc = 0x115D08u;
label_115d08:
    // 0x115d08: 0x262501c0  addiu       $a1, $s1, 0x1C0
    ctx->pc = 0x115d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_115d0c:
    // 0x115d0c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x115d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x115d10: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x115d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x115d14: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x115d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x115d18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x115d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x115d1c: 0x8484c0a8  lh          $a0, -0x3F58($a0)
    ctx->pc = 0x115d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294951080)));
    // 0x115d20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x115d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x115d24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x115d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x115d28: 0x244202a  slt         $a0, $s2, $a0
    ctx->pc = 0x115d28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x115d2c: 0x1480ffd2  bnez        $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x115D2Cu;
    {
        const bool branch_taken_0x115d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x115D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D2Cu;
        // 0x115d30: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d2c) {
            ctx->pc = 0x115C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c78;
        }
    }
    ctx->pc = 0x115D34u;
label_115d34:
    // 0x115d34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x115d34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x115d38: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x115d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x115d3c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x115D3Cu;
    {
        const bool branch_taken_0x115d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D3Cu;
        // 0x115d40: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d3c) {
            ctx->pc = 0x115C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c60;
        }
    }
    ctx->pc = 0x115D44u;
    // 0x115d44: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115d48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x115d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115d4c: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x115d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115d50: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x115d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115d54: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x115d54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
    // 0x115d58: 0x2652c540  addiu       $s2, $s2, -0x3AC0
    ctx->pc = 0x115d58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952256));
    // 0x115d5c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x115d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_115d60:
    // 0x115d60: 0x118600  sll         $s0, $s1, 24
    ctx->pc = 0x115d60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x115d64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x115d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x115d68: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x115d68u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x115d6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d74: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x115d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x115d78: 0xc045360  jal         func_114D80
    ctx->pc = 0x115D78u;
    SET_GPR_U32(ctx, 31, 0x115D80u);
    ctx->pc = 0x115D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D78u;
    // 0x115d7c: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x115D78u, 0x115D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D80u;
label_115d80:
    // 0x115d80: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x115d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x115d84: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x115d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x115d88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x115D88u;
    {
        const bool branch_taken_0x115d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D88u;
        // 0x115d8c: 0xa6130ff0  sh          $s3, 0xFF0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4080), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d88) {
            ctx->pc = 0x115D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115d60;
        }
    }
    ctx->pc = 0x115D90u;
    // 0x115d90: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x115d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x115d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d98: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x115d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x115d9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x115d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115da0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115da4: 0x2421c540  addiu       $at, $at, -0x3AC0
    ctx->pc = 0x115da4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294952256));
    // 0x115da8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x115da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x115dac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115db0: 0x24441008  addiu       $a0, $v0, 0x1008
    ctx->pc = 0x115db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4104));
    // 0x115db4: 0x0  nop
    ctx->pc = 0x115db4u;
    // NOP
label_115db8:
    // 0x115db8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x115db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x115dbc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x115dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x115dc0: 0x24a211d6  addiu       $v0, $a1, 0x11D6
    ctx->pc = 0x115dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4566));
    // 0x115dc4: 0x0  nop
    ctx->pc = 0x115dc4u;
    // NOP
label_115dc8:
    // 0x115dc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115dcc: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x115dccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x115dd0: 0x0  nop
    ctx->pc = 0x115dd0u;
    // NOP
    // 0x115dd4: 0x0  nop
    ctx->pc = 0x115dd4u;
    // NOP
    // 0x115dd8: 0x0  nop
    ctx->pc = 0x115dd8u;
    // NOP
    // 0x115ddc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115DDCu;
    {
        const bool branch_taken_0x115ddc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x115DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DDCu;
        // 0x115de0: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ddc) {
            ctx->pc = 0x115DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115dc8;
        }
    }
    ctx->pc = 0x115DE4u;
    // 0x115de4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115de8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x115de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x115dec: 0x28e2006e  slti        $v0, $a3, 0x6E
    ctx->pc = 0x115decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x115df0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x115DF0u;
    {
        const bool branch_taken_0x115df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DF0u;
        // 0x115df4: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115df0) {
            ctx->pc = 0x115DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115db8;
        }
    }
    ctx->pc = 0x115DF8u;
    // 0x115df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115e00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x115e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115e04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x115e04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x115e08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x115e08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115e0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x115e0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x115e10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x115e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115e14: 0x3e00008  jr          $ra
    ctx->pc = 0x115E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E14u;
        // 0x115e18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115E1Cu;
}
