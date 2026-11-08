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

// Function: Cmd_ACTOR_MOTION_Entry__FP15BsSCDEntControl
// Address: 0x134960 - 0x134e6c
void Cmd_ACTOR_MOTION_Entry__FP15BsSCDEntControl_0x134960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_MOTION_Entry__FP15BsSCDEntControl_0x134960");
#endif

    switch (ctx->pc) {
        case 0x1349a4u: goto label_1349a4;
        case 0x1349e4u: goto label_1349e4;
        case 0x1349fcu: goto label_1349fc;
        case 0x134a20u: goto label_134a20;
        case 0x134a30u: goto label_134a30;
        case 0x134a58u: goto label_134a58;
        case 0x134a60u: goto label_134a60;
        case 0x134a64u: goto label_134a64;
        case 0x134a70u: goto label_134a70;
        case 0x134a90u: goto label_134a90;
        case 0x134aa4u: goto label_134aa4;
        case 0x134adcu: goto label_134adc;
        case 0x134ae0u: goto label_134ae0;
        case 0x134ae8u: goto label_134ae8;
        case 0x134b1cu: goto label_134b1c;
        case 0x134b28u: goto label_134b28;
        case 0x134b40u: goto label_134b40;
        case 0x134b44u: goto label_134b44;
        case 0x134b5cu: goto label_134b5c;
        case 0x134b78u: goto label_134b78;
        case 0x134b94u: goto label_134b94;
        case 0x134bb0u: goto label_134bb0;
        case 0x134be4u: goto label_134be4;
        case 0x134bf0u: goto label_134bf0;
        case 0x134c08u: goto label_134c08;
        case 0x134c0cu: goto label_134c0c;
        case 0x134c24u: goto label_134c24;
        case 0x134c40u: goto label_134c40;
        case 0x134c5cu: goto label_134c5c;
        case 0x134c90u: goto label_134c90;
        case 0x134cbcu: goto label_134cbc;
        case 0x134cc0u: goto label_134cc0;
        case 0x134cd8u: goto label_134cd8;
        case 0x134cf4u: goto label_134cf4;
        case 0x134d10u: goto label_134d10;
        case 0x134d3cu: goto label_134d3c;
        case 0x134d48u: goto label_134d48;
        case 0x134d4cu: goto label_134d4c;
        case 0x134d58u: goto label_134d58;
        case 0x134d68u: goto label_134d68;
        case 0x134d78u: goto label_134d78;
        case 0x134d94u: goto label_134d94;
        case 0x134da0u: goto label_134da0;
        case 0x134db0u: goto label_134db0;
        case 0x134dc0u: goto label_134dc0;
        case 0x134dccu: goto label_134dcc;
        case 0x134de0u: goto label_134de0;
        case 0x134de8u: goto label_134de8;
        case 0x134df8u: goto label_134df8;
        case 0x134e18u: goto label_134e18;
        case 0x134e28u: goto label_134e28;
        case 0x134e44u: goto label_134e44;
        default: break;
    }

    ctx->pc = 0x134960u;

    // 0x134960: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x134960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x134964: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134968: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x134968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x13496c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13496cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134970: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x134970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x134974: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x134974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x134978: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x134978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x13497c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x13497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x134980: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x134980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x134984: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x134984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x134988: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x134988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x13498c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x13498cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134990: 0x8e650024  lw          $a1, 0x24($s3)
    ctx->pc = 0x134990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x134994: 0x8c740040  lw          $s4, 0x40($v1)
    ctx->pc = 0x134994u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x134998: 0x8cb10044  lw          $s1, 0x44($a1)
    ctx->pc = 0x134998u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x13499c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13499Cu;
    SET_GPR_U32(ctx, 31, 0x1349A4u);
    ctx->pc = 0x1349A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13499Cu;
    // 0x1349a0: 0x8670000e  lh          $s0, 0xE($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13499Cu, 0x1349A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349A4u;
label_1349a4:
    // 0x1349a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1349a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1349a8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1349a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1349ac: 0x2ca3000f  sltiu       $v1, $a1, 0xF
    ctx->pc = 0x1349acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1349b0: 0xae900070  sw          $s0, 0x70($s4)
    ctx->pc = 0x1349b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 16));
    // 0x1349b4: 0x10600123  beqz        $v1, . + 4 + (0x123 << 2)
    ctx->pc = 0x1349B4u;
    {
        const bool branch_taken_0x1349b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349B4u;
        // 0x1349b8: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349b4) {
            ctx->pc = 0x134E44u;
            goto label_134e44;
        }
    }
    ctx->pc = 0x1349BCu;
    // 0x1349bc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1349bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1349c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1349c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1349c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1349c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1349c8: 0x8c636540  lw          $v1, 0x6540($v1)
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25920)));
    // 0x1349cc: 0x600008  jr          $v1
    ctx->pc = 0x1349CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1349D8u: goto label_1349d8;
            case 0x1349F0u: goto label_1349f0;
            case 0x134A18u: goto label_134a18;
            case 0x134A28u: goto label_134a28;
            case 0x134A38u: goto label_134a38;
            case 0x134A78u: goto label_134a78;
            case 0x134AB0u: goto label_134ab0;
            case 0x134AF0u: goto label_134af0;
            case 0x134BB8u: goto label_134bb8;
            case 0x134C98u: goto label_134c98;
            case 0x134D18u: goto label_134d18;
            case 0x134D60u: goto label_134d60;
            case 0x134D70u: goto label_134d70;
            case 0x134D80u: goto label_134d80;
            case 0x134E30u: goto label_134e30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1349CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1349D4u;
    // 0x1349d4: 0x0  nop
    ctx->pc = 0x1349d4u;
    // NOP
label_1349d8:
    // 0x1349d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1349d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1349dc: 0xc04eab8  jal         func_13AAE0
    ctx->pc = 0x1349DCu;
    SET_GPR_U32(ctx, 31, 0x1349E4u);
    ctx->pc = 0x1349E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349DCu;
    // 0x1349e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAE0u, 0x1349DCu, 0x1349E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349E4u;
label_1349e4:
    // 0x1349e4: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x1349E4u;
    {
        const bool branch_taken_0x1349e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349E4u;
        // 0x1349e8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349e4) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x1349ECu;
    // 0x1349ec: 0x0  nop
    ctx->pc = 0x1349ecu;
    // NOP
label_1349f0:
    // 0x1349f0: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x1349f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x1349f4: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x1349F4u;
    SET_GPR_U32(ctx, 31, 0x1349FCu);
    ctx->pc = 0x1349F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349F4u;
    // 0x1349f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x1349F4u, 0x1349FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349FCu;
label_1349fc:
    // 0x1349fc: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1349fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x134a00: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x134a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x134a04: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x134a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x134a08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x134a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x134a0c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x134A0Cu;
    {
        const bool branch_taken_0x134a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A0Cu;
        // 0x134a10: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a0c) {
            ctx->pc = 0x134E44u;
            goto label_134e44;
        }
    }
    ctx->pc = 0x134A14u;
    // 0x134a14: 0x0  nop
    ctx->pc = 0x134a14u;
    // NOP
label_134a18:
    // 0x134a18: 0xc04e626  jal         func_139898
    ctx->pc = 0x134A18u;
    SET_GPR_U32(ctx, 31, 0x134A20u);
    ctx->pc = 0x134A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A18u;
    // 0x134a1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139898u, 0x134A18u, 0x134A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A20u;
label_134a20:
    // 0x134a20: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x134A20u;
    {
        const bool branch_taken_0x134a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A20u;
        // 0x134a24: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a20) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134A28u;
label_134a28:
    // 0x134a28: 0xc04e69a  jal         func_139A68
    ctx->pc = 0x134A28u;
    SET_GPR_U32(ctx, 31, 0x134A30u);
    ctx->pc = 0x134A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A28u;
    // 0x134a2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139A68u, 0x134A28u, 0x134A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A30u;
label_134a30:
    // 0x134a30: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x134A30u;
    {
        const bool branch_taken_0x134a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A30u;
        // 0x134a34: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a30) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134A38u;
label_134a38:
    // 0x134a38: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x134a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x134a3c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x134A3Cu;
    {
        const bool branch_taken_0x134a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134a3c) {
            ctx->pc = 0x134A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134A3Cu;
            // 0x134a40: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134A60u;
            goto label_134a60;
        }
    }
    ctx->pc = 0x134A44u;
    // 0x134a44: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x134a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134a48: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x134a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134a4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a50: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134A50u;
    SET_GPR_U32(ctx, 31, 0x134A58u);
    ctx->pc = 0x134A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A50u;
    // 0x134a54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134A50u, 0x134A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A58u;
label_134a58:
    // 0x134a58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134A58u;
    {
        const bool branch_taken_0x134a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A58u;
        // 0x134a5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a58) {
            ctx->pc = 0x134A64u;
            goto label_134a64;
        }
    }
    ctx->pc = 0x134A60u;
label_134a60:
    // 0x134a60: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x134a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_134a64:
    // 0x134a64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a68: 0xc04e592  jal         func_139648
    ctx->pc = 0x134A68u;
    SET_GPR_U32(ctx, 31, 0x134A70u);
    ctx->pc = 0x134A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A68u;
    // 0x134a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139648u, 0x134A68u, 0x134A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A70u;
label_134a70:
    // 0x134a70: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x134A70u;
    {
        const bool branch_taken_0x134a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A70u;
        // 0x134a74: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a70) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134A78u;
label_134a78:
    // 0x134a78: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x134a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134a7c: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x134a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134a80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a88: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134A88u;
    SET_GPR_U32(ctx, 31, 0x134A90u);
    ctx->pc = 0x134A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A88u;
    // 0x134a8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134A88u, 0x134A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A90u;
label_134a90:
    // 0x134a90: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134a94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a98: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x134a98u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134a9c: 0xc04e592  jal         func_139648
    ctx->pc = 0x134A9Cu;
    SET_GPR_U32(ctx, 31, 0x134AA4u);
    ctx->pc = 0x134AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A9Cu;
    // 0x134aa0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139648u, 0x134A9Cu, 0x134AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AA4u;
label_134aa4:
    // 0x134aa4: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x134AA4u;
    {
        const bool branch_taken_0x134aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AA4u;
        // 0x134aa8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aa4) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134AACu;
    // 0x134aac: 0x0  nop
    ctx->pc = 0x134aacu;
    // NOP
label_134ab0:
    // 0x134ab0: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x134ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134ab4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134ab8: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x134ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134abc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x134abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x134ac0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134ac4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x134AC4u;
    {
        const bool branch_taken_0x134ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x134AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AC4u;
        // 0x134ac8: 0x8c650044  lw          $a1, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ac4) {
            ctx->pc = 0x134AE0u;
            goto label_134ae0;
        }
    }
    ctx->pc = 0x134ACCu;
    // 0x134acc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x134accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ad4: 0xc04110c  jal         func_104430
    ctx->pc = 0x134AD4u;
    SET_GPR_U32(ctx, 31, 0x134ADCu);
    ctx->pc = 0x134AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AD4u;
    // 0x134ad8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x134AD4u, 0x134ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ADCu;
label_134adc:
    // 0x134adc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x134adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134ae0:
    // 0x134ae0: 0xc04e704  jal         func_139C10
    ctx->pc = 0x134AE0u;
    SET_GPR_U32(ctx, 31, 0x134AE8u);
    ctx->pc = 0x134AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AE0u;
    // 0x134ae4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C10u, 0x134AE0u, 0x134AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AE8u;
label_134ae8:
    // 0x134ae8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x134AE8u;
    {
        const bool branch_taken_0x134ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AE8u;
        // 0x134aec: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ae8) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134AF0u;
label_134af0:
    // 0x134af0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134af4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x134af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x134af8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134afc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x134afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134b04: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x134B04u;
    {
        const bool branch_taken_0x134b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x134B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B04u;
        // 0x134b08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b04) {
            ctx->pc = 0x134B28u;
            goto label_134b28;
        }
    }
    ctx->pc = 0x134B0Cu;
    // 0x134b0c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134b10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b14: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134B14u;
    SET_GPR_U32(ctx, 31, 0x134B1Cu);
    ctx->pc = 0x134B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B14u;
    // 0x134b18: 0x8c50b830  lw          $s0, -0x47D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134B14u, 0x134B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B1Cu;
label_134b1c:
    // 0x134b1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x134B1Cu;
    {
        const bool branch_taken_0x134b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B1Cu;
        // 0x134b20: 0x8e63001c  lw          $v1, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b1c) {
            ctx->pc = 0x134B44u;
            goto label_134b44;
        }
    }
    ctx->pc = 0x134B24u;
    // 0x134b24: 0x0  nop
    ctx->pc = 0x134b24u;
    // NOP
label_134b28:
    // 0x134b28: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x134b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x134b2c: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x134b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134b30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b38: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134B38u;
    SET_GPR_U32(ctx, 31, 0x134B40u);
    ctx->pc = 0x134B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B38u;
    // 0x134b3c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134B38u, 0x134B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B40u;
label_134b40:
    // 0x134b40: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_134b44:
    // 0x134b44: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x134b44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x134b48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134b4c: 0x50510005  beql        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134B4Cu;
    {
        const bool branch_taken_0x134b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x134b4c) {
            ctx->pc = 0x134B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134B4Cu;
            // 0x134b50: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134B64u;
            goto label_134b64;
        }
    }
    ctx->pc = 0x134B54u;
    // 0x134b54: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134B54u;
    SET_GPR_U32(ctx, 31, 0x134B5Cu);
    ctx->pc = 0x134B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B54u;
    // 0x134b58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134B54u, 0x134B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B5Cu;
label_134b5c:
    // 0x134b5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x134b5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x134b60: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_134b64:
    // 0x134b64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134b68: 0x5071000c  beql        $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x134B68u;
    {
        const bool branch_taken_0x134b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x134b68) {
            ctx->pc = 0x134B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134B68u;
            // 0x134b6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134B9Cu;
            goto label_134b9c;
        }
    }
    ctx->pc = 0x134B70u;
    // 0x134b70: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x134B70u;
    SET_GPR_U32(ctx, 31, 0x134B78u);
    ctx->pc = 0x134B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B70u;
    // 0x134b74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134B70u, 0x134B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B78u;
label_134b78:
    // 0x134b78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b7c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134b80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134b84: 0x50710005  beql        $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134B84u;
    {
        const bool branch_taken_0x134b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x134b84) {
            ctx->pc = 0x134B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134B84u;
            // 0x134b88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134B9Cu;
            goto label_134b9c;
        }
    }
    ctx->pc = 0x134B8Cu;
    // 0x134b8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134B8Cu;
    SET_GPR_U32(ctx, 31, 0x134B94u);
    ctx->pc = 0x134B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B8Cu;
    // 0x134b90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134B8Cu, 0x134B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B94u;
label_134b94:
    // 0x134b94: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x134b94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x134b98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_134b9c:
    // 0x134b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ba0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134ba0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134ba4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x134ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ba8: 0xc04e7a8  jal         func_139EA0
    ctx->pc = 0x134BA8u;
    SET_GPR_U32(ctx, 31, 0x134BB0u);
    ctx->pc = 0x134BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BA8u;
    // 0x134bac: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139EA0u, 0x134BA8u, 0x134BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BB0u;
label_134bb0:
    // 0x134bb0: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x134BB0u;
    {
        const bool branch_taken_0x134bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BB0u;
        // 0x134bb4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bb0) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134BB8u;
label_134bb8:
    // 0x134bb8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134bbc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x134bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x134bc0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134bc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x134bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134bcc: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x134BCCu;
    {
        const bool branch_taken_0x134bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x134BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BCCu;
        // 0x134bd0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bcc) {
            ctx->pc = 0x134BF0u;
            goto label_134bf0;
        }
    }
    ctx->pc = 0x134BD4u;
    // 0x134bd4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134bd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bdc: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134BDCu;
    SET_GPR_U32(ctx, 31, 0x134BE4u);
    ctx->pc = 0x134BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BDCu;
    // 0x134be0: 0x8c50b830  lw          $s0, -0x47D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134BDCu, 0x134BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BE4u;
label_134be4:
    // 0x134be4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x134BE4u;
    {
        const bool branch_taken_0x134be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BE4u;
        // 0x134be8: 0x8e63001c  lw          $v1, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134be4) {
            ctx->pc = 0x134C0Cu;
            goto label_134c0c;
        }
    }
    ctx->pc = 0x134BECu;
    // 0x134bec: 0x0  nop
    ctx->pc = 0x134becu;
    // NOP
label_134bf0:
    // 0x134bf0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x134bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x134bf4: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x134bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c00: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134C00u;
    SET_GPR_U32(ctx, 31, 0x134C08u);
    ctx->pc = 0x134C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C00u;
    // 0x134c04: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134C00u, 0x134C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C08u;
label_134c08:
    // 0x134c08: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x134c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_134c0c:
    // 0x134c0c: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x134c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x134c10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134c14: 0x50510005  beql        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134C14u;
    {
        const bool branch_taken_0x134c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x134c14) {
            ctx->pc = 0x134C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134C14u;
            // 0x134c18: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C2Cu;
            goto label_134c2c;
        }
    }
    ctx->pc = 0x134C1Cu;
    // 0x134c1c: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134C1Cu;
    SET_GPR_U32(ctx, 31, 0x134C24u);
    ctx->pc = 0x134C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C1Cu;
    // 0x134c20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134C1Cu, 0x134C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C24u;
label_134c24:
    // 0x134c24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x134c24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x134c28: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_134c2c:
    // 0x134c2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134c30: 0x5071000c  beql        $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x134C30u;
    {
        const bool branch_taken_0x134c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x134c30) {
            ctx->pc = 0x134C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134C30u;
            // 0x134c34: 0x8e63001c  lw          $v1, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C64u;
            goto label_134c64;
        }
    }
    ctx->pc = 0x134C38u;
    // 0x134c38: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x134C38u;
    SET_GPR_U32(ctx, 31, 0x134C40u);
    ctx->pc = 0x134C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C38u;
    // 0x134c3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134C38u, 0x134C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C40u;
label_134c40:
    // 0x134c40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c44: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134c48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134c4c: 0x50710005  beql        $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134C4Cu;
    {
        const bool branch_taken_0x134c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x134c4c) {
            ctx->pc = 0x134C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134C4Cu;
            // 0x134c50: 0x8e63001c  lw          $v1, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134C64u;
            goto label_134c64;
        }
    }
    ctx->pc = 0x134C54u;
    // 0x134c54: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x134C54u;
    SET_GPR_U32(ctx, 31, 0x134C5Cu);
    ctx->pc = 0x134C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C54u;
    // 0x134c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134C54u, 0x134C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C5Cu;
label_134c5c:
    // 0x134c5c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x134c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c60: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x134c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_134c64:
    // 0x134c64: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x134c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134c68: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x134c68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134c6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134c74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134c78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134c7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x134c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c80: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x134c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x134c84: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x134c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c88: 0xc04e7e8  jal         func_139FA0
    ctx->pc = 0x134C88u;
    SET_GPR_U32(ctx, 31, 0x134C90u);
    ctx->pc = 0x134C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134C88u;
    // 0x134c8c: 0x122400b  movn        $t0, $t1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FA0u, 0x134C88u, 0x134C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C90u;
label_134c90:
    // 0x134c90: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x134C90u;
    {
        const bool branch_taken_0x134c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134C90u;
        // 0x134c94: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c90) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134C98u;
label_134c98:
    // 0x134c98: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x134c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134c9c: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x134c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x134ca0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134ca4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x134ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ca8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134cac: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134CACu;
    {
        const bool branch_taken_0x134cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x134CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CACu;
        // 0x134cb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134cac) {
            ctx->pc = 0x134CC0u;
            goto label_134cc0;
        }
    }
    ctx->pc = 0x134CB4u;
    // 0x134cb4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134CB4u;
    SET_GPR_U32(ctx, 31, 0x134CBCu);
    ctx->pc = 0x134CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134CB4u;
    // 0x134cb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134CB4u, 0x134CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134CBCu;
label_134cbc:
    // 0x134cbc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x134cbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_134cc0:
    // 0x134cc0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134cc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134cc8: 0x1070000c  beq         $v1, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x134CC8u;
    {
        const bool branch_taken_0x134cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x134CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CC8u;
        // 0x134ccc: 0x8f858a30  lw          $a1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134cc8) {
            ctx->pc = 0x134CFCu;
            goto label_134cfc;
        }
    }
    ctx->pc = 0x134CD0u;
    // 0x134cd0: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x134CD0u;
    SET_GPR_U32(ctx, 31, 0x134CD8u);
    ctx->pc = 0x134CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134CD0u;
    // 0x134cd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134CD0u, 0x134CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134CD8u;
label_134cd8:
    // 0x134cd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134cdc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134ce0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134ce4: 0x10700005  beq         $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134CE4u;
    {
        const bool branch_taken_0x134ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x134CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134CE4u;
        // 0x134ce8: 0x8f858a30  lw          $a1, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ce4) {
            ctx->pc = 0x134CFCu;
            goto label_134cfc;
        }
    }
    ctx->pc = 0x134CECu;
    // 0x134cec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134CECu;
    SET_GPR_U32(ctx, 31, 0x134CF4u);
    ctx->pc = 0x134CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134CECu;
    // 0x134cf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134CECu, 0x134CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134CF4u;
label_134cf4:
    // 0x134cf4: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x134cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x134cf8: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x134cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_134cfc:
    // 0x134cfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134d00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134d04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x134d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d08: 0xc04e8bc  jal         func_13A2F0
    ctx->pc = 0x134D08u;
    SET_GPR_U32(ctx, 31, 0x134D10u);
    ctx->pc = 0x134D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D08u;
    // 0x134d0c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A2F0u, 0x134D08u, 0x134D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D10u;
label_134d10:
    // 0x134d10: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x134D10u;
    {
        const bool branch_taken_0x134d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D10u;
        // 0x134d14: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d10) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134D18u;
label_134d18:
    // 0x134d18: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x134d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x134d1c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x134D1Cu;
    {
        const bool branch_taken_0x134d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134d1c) {
            ctx->pc = 0x134D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134D1Cu;
            // 0x134d20: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134D48u;
            goto label_134d48;
        }
    }
    ctx->pc = 0x134D24u;
    // 0x134d24: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x134d24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x134d28: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x134d28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x134d2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d34: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x134D34u;
    SET_GPR_U32(ctx, 31, 0x134D3Cu);
    ctx->pc = 0x134D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D34u;
    // 0x134d38: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x134D34u, 0x134D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D3Cu;
label_134d3c:
    // 0x134d3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x134D3Cu;
    {
        const bool branch_taken_0x134d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D3Cu;
        // 0x134d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d3c) {
            ctx->pc = 0x134D4Cu;
            goto label_134d4c;
        }
    }
    ctx->pc = 0x134D44u;
    // 0x134d44: 0x0  nop
    ctx->pc = 0x134d44u;
    // NOP
label_134d48:
    // 0x134d48: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x134d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_134d4c:
    // 0x134d4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d50: 0xc04eb1a  jal         func_13AC68
    ctx->pc = 0x134D50u;
    SET_GPR_U32(ctx, 31, 0x134D58u);
    ctx->pc = 0x134D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D50u;
    // 0x134d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC68u, 0x134D50u, 0x134D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D58u;
label_134d58:
    // 0x134d58: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x134D58u;
    {
        const bool branch_taken_0x134d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D58u;
        // 0x134d5c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d58) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134D60u;
label_134d60:
    // 0x134d60: 0xc04eb3e  jal         func_13ACF8
    ctx->pc = 0x134D60u;
    SET_GPR_U32(ctx, 31, 0x134D68u);
    ctx->pc = 0x134D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D60u;
    // 0x134d64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ACF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ACF8u, 0x134D60u, 0x134D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D68u;
label_134d68:
    // 0x134d68: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x134D68u;
    {
        const bool branch_taken_0x134d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D68u;
        // 0x134d6c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d68) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134D70u;
label_134d70:
    // 0x134d70: 0xc04e93e  jal         func_13A4F8
    ctx->pc = 0x134D70u;
    SET_GPR_U32(ctx, 31, 0x134D78u);
    ctx->pc = 0x134D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D70u;
    // 0x134d74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A4F8u, 0x134D70u, 0x134D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D78u;
label_134d78:
    // 0x134d78: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x134D78u;
    {
        const bool branch_taken_0x134d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134D78u;
        // 0x134d7c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d78) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134D80u;
label_134d80:
    // 0x134d80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x134d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134d84: 0x54820018  bnel        $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x134D84u;
    {
        const bool branch_taken_0x134d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134d84) {
            ctx->pc = 0x134D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134D84u;
            // 0x134d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134D8Cu;
    // 0x134d8c: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x134D8Cu;
    SET_GPR_U32(ctx, 31, 0x134D94u);
    ctx->pc = 0x134D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D8Cu;
    // 0x134d90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x134D8Cu, 0x134D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D94u;
label_134d94:
    // 0x134d94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d98: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x134D98u;
    SET_GPR_U32(ctx, 31, 0x134DA0u);
    ctx->pc = 0x134D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134D98u;
    // 0x134d9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x134D98u, 0x134DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DA0u;
label_134da0:
    // 0x134da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134da4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134da8: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x134DA8u;
    SET_GPR_U32(ctx, 31, 0x134DB0u);
    ctx->pc = 0x134DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DA8u;
    // 0x134dac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x134DA8u, 0x134DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DB0u;
label_134db0:
    // 0x134db0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134db8: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x134DB8u;
    SET_GPR_U32(ctx, 31, 0x134DC0u);
    ctx->pc = 0x134DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DB8u;
    // 0x134dbc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x134DB8u, 0x134DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DC0u;
label_134dc0:
    // 0x134dc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dc4: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134DC4u;
    SET_GPR_U32(ctx, 31, 0x134DCCu);
    ctx->pc = 0x134DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DC4u;
    // 0x134dc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134DC4u, 0x134DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DCCu;
label_134dcc:
    // 0x134dcc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x134dccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x134dd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dd8: 0xc04e9a8  jal         func_13A6A0
    ctx->pc = 0x134DD8u;
    SET_GPR_U32(ctx, 31, 0x134DE0u);
    ctx->pc = 0x134DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DD8u;
    // 0x134ddc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A6A0u, 0x134DD8u, 0x134DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DE0u;
label_134de0:
    // 0x134de0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x134DE0u;
    {
        const bool branch_taken_0x134de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DE0u;
        // 0x134de4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134de0) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134DE8u;
label_134de8:
    // 0x134de8: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x134DE8u;
    {
        const bool branch_taken_0x134de8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134de8) {
            ctx->pc = 0x134DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134DE8u;
            // 0x134dec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134E08u;
            goto label_134e08;
        }
    }
    ctx->pc = 0x134DF0u;
    // 0x134df0: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x134DF0u;
    SET_GPR_U32(ctx, 31, 0x134DF8u);
    ctx->pc = 0x134DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134DF0u;
    // 0x134df4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x134DF0u, 0x134DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134DF8u;
label_134df8:
    // 0x134df8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134dfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134DFCu;
    {
        const bool branch_taken_0x134dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DFCu;
        // 0x134e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dfc) {
            ctx->pc = 0x134E20u;
            goto label_134e20;
        }
    }
    ctx->pc = 0x134E04u;
    // 0x134e04: 0x0  nop
    ctx->pc = 0x134e04u;
    // NOP
label_134e08:
    // 0x134e08: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x134E08u;
    {
        const bool branch_taken_0x134e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x134E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E08u;
        // 0x134e0c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e08) {
            ctx->pc = 0x134E48u;
            goto label_134e48;
        }
    }
    ctx->pc = 0x134E10u;
    // 0x134e10: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x134E10u;
    SET_GPR_U32(ctx, 31, 0x134E18u);
    ctx->pc = 0x134E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E10u;
    // 0x134e14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x134E10u, 0x134E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E18u;
label_134e18:
    // 0x134e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x134e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134e20:
    // 0x134e20: 0xc04eb56  jal         func_13AD58
    ctx->pc = 0x134E20u;
    SET_GPR_U32(ctx, 31, 0x134E28u);
    ctx->pc = 0x134E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E20u;
    // 0x134e24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD58u, 0x134E20u, 0x134E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E28u;
label_134e28:
    // 0x134e28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x134E28u;
    {
        const bool branch_taken_0x134e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E28u;
        // 0x134e2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e28) {
            ctx->pc = 0x134E44u;
            goto label_134e44;
        }
    }
    ctx->pc = 0x134E30u;
label_134e30:
    // 0x134e30: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134e34: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x134e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x134e38: 0x8c46b830  lw          $a2, -0x47D0($v0)
    ctx->pc = 0x134e38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1FB830u));
    // 0x134e3c: 0xc04ea76  jal         func_13A9D8
    ctx->pc = 0x134E3Cu;
    SET_GPR_U32(ctx, 31, 0x134E44u);
    ctx->pc = 0x134E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E3Cu;
    // 0x134e40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A9D8u, 0x134E3Cu, 0x134E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E44u;
label_134e44:
    // 0x134e44: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x134e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_134e48:
    // 0x134e48: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x134e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x134e4c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x134e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x134e50: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x134e50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x134e54: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x134e54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134e58: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x134e58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x134e5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x134e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x134e60: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x134e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x134e64: 0x3e00008  jr          $ra
    ctx->pc = 0x134E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E64u;
        // 0x134e68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134E6Cu;
}
