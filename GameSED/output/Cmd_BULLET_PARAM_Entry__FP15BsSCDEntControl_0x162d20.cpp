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

// Function: Cmd_BULLET_PARAM_Entry__FP15BsSCDEntControl
// Address: 0x162d20 - 0x162e9c
void Cmd_BULLET_PARAM_Entry__FP15BsSCDEntControl_0x162d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_BULLET_PARAM_Entry__FP15BsSCDEntControl_0x162d20");
#endif

    switch (ctx->pc) {
        case 0x162d50u: goto label_162d50;
        case 0x162d5cu: goto label_162d5c;
        case 0x162d90u: goto label_162d90;
        case 0x162d9cu: goto label_162d9c;
        case 0x162db4u: goto label_162db4;
        case 0x162e44u: goto label_162e44;
        default: break;
    }

    ctx->pc = 0x162d20u;

    // 0x162d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162d24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162d28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x162d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x162d2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x162d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x162d34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x162d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x162d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x162d3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x162d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x162d40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162d44: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x162d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x162d48: 0xc04110c  jal         func_104430
    ctx->pc = 0x162D48u;
    SET_GPR_U32(ctx, 31, 0x162D50u);
    ctx->pc = 0x162D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D48u;
    // 0x162d4c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x162D48u, 0x162D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D50u;
label_162d50:
    // 0x162d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d54: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162D54u;
    SET_GPR_U32(ctx, 31, 0x162D5Cu);
    ctx->pc = 0x162D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D54u;
    // 0x162d58: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162D54u, 0x162D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D5Cu;
label_162d5c:
    // 0x162d5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x162d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d60: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x162D60u;
    {
        const bool branch_taken_0x162d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D60u;
        // 0x162d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d60) {
            ctx->pc = 0x162D78u;
            goto label_162d78;
        }
    }
    ctx->pc = 0x162D68u;
    // 0x162d68: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x162D68u;
    {
        const bool branch_taken_0x162d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162d68) {
            ctx->pc = 0x162D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162D68u;
            // 0x162d6c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162E30u;
            goto label_162e30;
        }
    }
    ctx->pc = 0x162D70u;
    // 0x162d70: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x162D70u;
    {
        const bool branch_taken_0x162d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D70u;
        // 0x162d74: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d70) {
            ctx->pc = 0x162E84u;
            goto label_162e84;
        }
    }
    ctx->pc = 0x162D78u;
label_162d78:
    // 0x162d78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x162d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x162d7c: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x162d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x162d80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162D80u;
    {
        const bool branch_taken_0x162d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D80u;
        // 0x162d84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d80) {
            ctx->pc = 0x162D94u;
            goto label_162d94;
        }
    }
    ctx->pc = 0x162D88u;
    // 0x162d88: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162D88u;
    SET_GPR_U32(ctx, 31, 0x162D90u);
    ctx->pc = 0x162D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D88u;
    // 0x162d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162D88u, 0x162D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D90u;
label_162d90:
    // 0x162d90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x162d90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162d94:
    // 0x162d94: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162D94u;
    SET_GPR_U32(ctx, 31, 0x162D9Cu);
    ctx->pc = 0x162D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D94u;
    // 0x162d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162D94u, 0x162D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D9Cu;
label_162d9c:
    // 0x162d9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162da0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x162da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x162da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162da8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x162da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dac: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x162DACu;
    SET_GPR_U32(ctx, 31, 0x162DB4u);
    ctx->pc = 0x162DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DACu;
    // 0x162db0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x162DACu, 0x162DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162DB4u;
label_162db4:
    // 0x162db4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x162DB4u;
    {
        const bool branch_taken_0x162db4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x162DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DB4u;
        // 0x162db8: 0x8e430600  lw          $v1, 0x600($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162db4) {
            ctx->pc = 0x162DC8u;
            goto label_162dc8;
        }
    }
    ctx->pc = 0x162DBCu;
    // 0x162dbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x162DBCu;
    {
        const bool branch_taken_0x162dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DBCu;
        // 0x162dc0: 0x8c6301b4  lw          $v1, 0x1B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dbc) {
            ctx->pc = 0x162E08u;
            goto label_162e08;
        }
    }
    ctx->pc = 0x162DC4u;
    // 0x162dc4: 0x0  nop
    ctx->pc = 0x162dc4u;
    // NOP
label_162dc8:
    // 0x162dc8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x162DC8u;
    {
        const bool branch_taken_0x162dc8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x162DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DC8u;
        // 0x162dcc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dc8) {
            ctx->pc = 0x162DE0u;
            goto label_162de0;
        }
    }
    ctx->pc = 0x162DD0u;
    // 0x162dd0: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x162dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x162dd4: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x162dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x162dd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x162DD8u;
    {
        const bool branch_taken_0x162dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DD8u;
        // 0x162ddc: 0x621823  subu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dd8) {
            ctx->pc = 0x162E08u;
            goto label_162e08;
        }
    }
    ctx->pc = 0x162DE0u;
label_162de0:
    // 0x162de0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162de4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x162de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x162de8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162DE8u;
    {
        const bool branch_taken_0x162de8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x162DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DE8u;
        // 0x162dec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162de8) {
            ctx->pc = 0x162E00u;
            goto label_162e00;
        }
    }
    ctx->pc = 0x162DF0u;
    // 0x162df0: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x162df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x162df4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x162DF4u;
    {
        const bool branch_taken_0x162df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DF4u;
        // 0x162df8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162df4) {
            ctx->pc = 0x162E04u;
            goto label_162e04;
        }
    }
    ctx->pc = 0x162DFCu;
    // 0x162dfc: 0x0  nop
    ctx->pc = 0x162dfcu;
    // NOP
label_162e00:
    // 0x162e00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x162e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162e04:
    // 0x162e04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x162e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162e08:
    // 0x162e08: 0x131140  sll         $v0, $s3, 5
    ctx->pc = 0x162e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x162e0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x162e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162e10: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x162e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x162e14: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x162e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x162e18: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x162e18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162e1c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x162e1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x162e20: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x162e20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x162e24: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x162e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x162e28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x162E28u;
    {
        const bool branch_taken_0x162e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E28u;
        // 0x162e2c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e28) {
            ctx->pc = 0x162E80u;
            goto label_162e80;
        }
    }
    ctx->pc = 0x162E30u;
label_162e30:
    // 0x162e30: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x162e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x162e34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162E34u;
    {
        const bool branch_taken_0x162e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E34u;
        // 0x162e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e34) {
            ctx->pc = 0x162E48u;
            goto label_162e48;
        }
    }
    ctx->pc = 0x162E3Cu;
    // 0x162e3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x162E3Cu;
    SET_GPR_U32(ctx, 31, 0x162E44u);
    ctx->pc = 0x162E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E3Cu;
    // 0x162e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x162E3Cu, 0x162E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E44u;
label_162e44:
    // 0x162e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_162e48:
    // 0x162e48: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x162e48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x162e4c: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x162e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x162e50: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x162e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x162e54: 0x24c6a430  addiu       $a2, $a2, -0x5BD0
    ctx->pc = 0x162e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943792));
    // 0x162e58: 0x24a50610  addiu       $a1, $a1, 0x610
    ctx->pc = 0x162e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1552));
    // 0x162e5c: 0x8cc41400  lw          $a0, 0x1400($a2)
    ctx->pc = 0x162e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x162e60: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x162e60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162e64: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x162e64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x162e68: 0x8cc31400  lw          $v1, 0x1400($a2)
    ctx->pc = 0x162e68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x162e6c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x162e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x162e70: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x162e70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x162e74: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x162e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x162e78: 0x8cc21400  lw          $v0, 0x1400($a2)
    ctx->pc = 0x162e78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FB830u));
    // 0x162e7c: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x162e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
label_162e80:
    // 0x162e80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x162e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162e84:
    // 0x162e84: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x162e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162e88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x162e88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162e8c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x162e8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x162e90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162e94: 0x3e00008  jr          $ra
    ctx->pc = 0x162E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E94u;
        // 0x162e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162E9Cu;
}
