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

// Function: LandActorTrace__7ApcTank
// Address: 0x151d80 - 0x151ff0
void LandActorTrace__7ApcTank_0x151d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LandActorTrace__7ApcTank_0x151d80");
#endif

    switch (ctx->pc) {
        case 0x151e00u: goto label_151e00;
        case 0x151e08u: goto label_151e08;
        case 0x151e8cu: goto label_151e8c;
        case 0x151eb0u: goto label_151eb0;
        case 0x151ebcu: goto label_151ebc;
        case 0x151f10u: goto label_151f10;
        case 0x151f60u: goto label_151f60;
        case 0x151fa0u: goto label_151fa0;
        default: break;
    }

    ctx->pc = 0x151d80u;

    // 0x151d80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x151d84: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x151d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x151d88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x151d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d8c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x151d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x151d90: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x151d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x151d94: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x151d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x151d98: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x151d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x151d9c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x151d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x151da0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x151da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x151da4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x151da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x151da8: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x151da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x151dac: 0x50600082  beql        $v1, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x151DACu;
    {
        const bool branch_taken_0x151dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151dac) {
            ctx->pc = 0x151DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151DACu;
            // 0x151db0: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FB8u;
            goto label_151fb8;
        }
    }
    ctx->pc = 0x151DB4u;
    // 0x151db4: 0x8e5001f4  lw          $s0, 0x1F4($s2)
    ctx->pc = 0x151db4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x151db8: 0x5200007f  beql        $s0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x151DB8u;
    {
        const bool branch_taken_0x151db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x151db8) {
            ctx->pc = 0x151DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151DB8u;
            // 0x151dbc: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FB8u;
            goto label_151fb8;
        }
    }
    ctx->pc = 0x151DC0u;
    // 0x151dc0: 0x8e4203b0  lw          $v0, 0x3B0($s2)
    ctx->pc = 0x151dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    // 0x151dc4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x151dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x151dc8: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x151DC8u;
    {
        const bool branch_taken_0x151dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DC8u;
        // 0x151dcc: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151dc8) {
            ctx->pc = 0x151FB8u;
            goto label_151fb8;
        }
    }
    ctx->pc = 0x151DD0u;
    // 0x151dd0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x151dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x151dd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151DD4u;
    {
        const bool branch_taken_0x151dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DD4u;
        // 0x151dd8: 0x26130020  addiu       $s3, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151dd4) {
            ctx->pc = 0x151DE8u;
            goto label_151de8;
        }
    }
    ctx->pc = 0x151DDCu;
    // 0x151ddc: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x151ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x151de0: 0x1043002d  beq         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x151DE0u;
    {
        const bool branch_taken_0x151de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x151DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DE0u;
        // 0x151de4: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151de0) {
            ctx->pc = 0x151E98u;
            goto label_151e98;
        }
    }
    ctx->pc = 0x151DE8u;
label_151de8:
    // 0x151de8: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x151de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x151dec: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x151decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x151df0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151DF0u;
    {
        const bool branch_taken_0x151df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DF0u;
        // 0x151df4: 0x26510870  addiu       $s1, $s2, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151df0) {
            ctx->pc = 0x151E00u;
            goto label_151e00;
        }
    }
    ctx->pc = 0x151DF8u;
    // 0x151df8: 0xc061920  jal         func_186480
    ctx->pc = 0x151DF8u;
    SET_GPR_U32(ctx, 31, 0x151E00u);
    ctx->pc = 0x151DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DF8u;
    // 0x151dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x151DF8u, 0x151E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E00u;
label_151e00:
    // 0x151e00: 0xc061422  jal         func_185088
    ctx->pc = 0x151E00u;
    SET_GPR_U32(ctx, 31, 0x151E08u);
    ctx->pc = 0x151E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E00u;
    // 0x151e04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x151E00u, 0x151E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E08u;
label_151e08:
    // 0x151e08: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x151e0c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x151e0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151e10: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x151e10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x151e14: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x151e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x151e18: 0x26430880  addiu       $v1, $s2, 0x880
    ctx->pc = 0x151e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2176));
    // 0x151e1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x151e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151e20: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x151e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x151e24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x151e24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151e28: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x151e28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151e2c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151e2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151e30: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151e30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151e34: 0x8e4401f4  lw          $a0, 0x1F4($s2)
    ctx->pc = 0x151e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x151e38: 0x8e4701f0  lw          $a3, 0x1F0($s2)
    ctx->pc = 0x151e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x151e3c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x151e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x151e40: 0xae470894  sw          $a3, 0x894($s2)
    ctx->pc = 0x151e40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2196), GPR_U32(ctx, 7));
    // 0x151e44: 0xae430890  sw          $v1, 0x890($s2)
    ctx->pc = 0x151e44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2192), GPR_U32(ctx, 3));
    // 0x151e48: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x151e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x151e4c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x151e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x151e50: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x151E50u;
    {
        const bool branch_taken_0x151e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e50) {
            ctx->pc = 0x151E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151E50u;
            // 0x151e54: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FACu;
            goto label_151fac;
        }
    }
    ctx->pc = 0x151E58u;
    // 0x151e58: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x151e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x151e5c: 0x24026000  addiu       $v0, $zero, 0x6000
    ctx->pc = 0x151e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x151e60: 0xac6200b4  sw          $v0, 0xB4($v1)
    ctx->pc = 0x151e60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400B4u, _value); } while (0);
    // 0x151e64: 0xaf928a30  sw          $s2, -0x75D0($gp)
    ctx->pc = 0x151e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 18));
    // 0x151e68: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x151e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x151e6c: 0x4a2004f  bltzl       $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x151E6Cu;
    {
        const bool branch_taken_0x151e6c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x151e6c) {
            ctx->pc = 0x151E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151E6Cu;
            // 0x151e70: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FACu;
            goto label_151fac;
        }
    }
    ctx->pc = 0x151E74u;
    // 0x151e74: 0x8ce40174  lw          $a0, 0x174($a3)
    ctx->pc = 0x151e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x151e78: 0x5080004c  beql        $a0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x151E78u;
    {
        const bool branch_taken_0x151e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e78) {
            ctx->pc = 0x151E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151E78u;
            // 0x151e7c: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151FACu;
            goto label_151fac;
        }
    }
    ctx->pc = 0x151E80u;
    // 0x151e80: 0x8ce801b4  lw          $t0, 0x1B4($a3)
    ctx->pc = 0x151e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    // 0x151e84: 0xc041228  jal         func_1048A0
    ctx->pc = 0x151E84u;
    SET_GPR_U32(ctx, 31, 0x151E8Cu);
    ctx->pc = 0x151E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151E84u;
    // 0x151e88: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x151E84u, 0x151E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E8Cu;
label_151e8c:
    // 0x151e8c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x151E8Cu;
    {
        const bool branch_taken_0x151e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E8Cu;
        // 0x151e90: 0x8e420184  lw          $v0, 0x184($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e8c) {
            ctx->pc = 0x151FACu;
            goto label_151fac;
        }
    }
    ctx->pc = 0x151E94u;
    // 0x151e94: 0x0  nop
    ctx->pc = 0x151e94u;
    // NOP
label_151e98:
    // 0x151e98: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x151e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x151e9c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x151e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x151ea0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x151EA0u;
    {
        const bool branch_taken_0x151ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ea0) {
            ctx->pc = 0x151EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151EA0u;
            // 0x151ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151EB4u;
            goto label_151eb4;
        }
    }
    ctx->pc = 0x151EA8u;
    // 0x151ea8: 0xc061920  jal         func_186480
    ctx->pc = 0x151EA8u;
    SET_GPR_U32(ctx, 31, 0x151EB0u);
    ctx->pc = 0x151EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EA8u;
    // 0x151eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x151EA8u, 0x151EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EB0u;
label_151eb0:
    // 0x151eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x151eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151eb4:
    // 0x151eb4: 0xc061422  jal         func_185088
    ctx->pc = 0x151EB4u;
    SET_GPR_U32(ctx, 31, 0x151EBCu);
    ctx->pc = 0x151EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EB4u;
    // 0x151eb8: 0x26150110  addiu       $s5, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x151EB4u, 0x151EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EBCu;
label_151ebc:
    // 0x151ebc: 0x26540870  addiu       $s4, $s2, 0x870
    ctx->pc = 0x151ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 2160));
    // 0x151ec0: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x151ec0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x151ec4: 0xda830000  lqc2        $vf3, 0x0($s4)
    ctx->pc = 0x151ec4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151ec8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151ec8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151ecc: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x151eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151ed0: 0x8e4201f4  lw          $v0, 0x1F4($s2)
    ctx->pc = 0x151ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x151ed4: 0x8e430890  lw          $v1, 0x890($s2)
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2192)));
    // 0x151ed8: 0x8c560034  lw          $s6, 0x34($v0)
    ctx->pc = 0x151ed8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x151edc: 0x2c39823  subu        $s3, $s6, $v1
    ctx->pc = 0x151edcu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x151ee0: 0x32627fff  andi        $v0, $s3, 0x7FFF
    ctx->pc = 0x151ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32767);
    // 0x151ee4: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x151ee4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x151ee8: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x151ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x151eec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x151eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ef0: 0x64980a  movz        $s3, $v1, $a0
    ctx->pc = 0x151ef0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x151ef4: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x151EF4u;
    {
        const bool branch_taken_0x151ef4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EF4u;
        // 0x151ef8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ef4) {
            ctx->pc = 0x151F60u;
            goto label_151f60;
        }
    }
    ctx->pc = 0x151EFCu;
    // 0x151efc: 0x26510880  addiu       $s1, $s2, 0x880
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2176));
    // 0x151f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f08: 0xc06760e  jal         func_19D838
    ctx->pc = 0x151F08u;
    SET_GPR_U32(ctx, 31, 0x151F10u);
    ctx->pc = 0x151F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F08u;
    // 0x151f0c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D838u, 0x151F08u, 0x151F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F10u;
label_151f10:
    // 0x151f10: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151f10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151f14: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x151f14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151f18: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151f18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151f1c: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151f20: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x151f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151f24: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x151f24u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151f28: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151f2c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x151f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151f30: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x151f30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151f34: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x151f34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151f38: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151f3c: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x151f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151f40: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x151f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x151f44: 0xae560890  sw          $s6, 0x890($s2)
    ctx->pc = 0x151f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2192), GPR_U32(ctx, 22));
    // 0x151f48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x151f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151f4c: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x151f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x151f50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x151f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x151f54: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x151f58: 0xc0618d4  jal         func_186350
    ctx->pc = 0x151F58u;
    SET_GPR_U32(ctx, 31, 0x151F60u);
    ctx->pc = 0x151F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F58u;
    // 0x151f5c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x151F58u, 0x151F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F60u;
label_151f60:
    // 0x151f60: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x151f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151f64: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x151f64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151f68: 0x4a0002ff  vnop
    ctx->pc = 0x151f68u;
    // NOP operation, no action needed for VU0
    // 0x151f6c: 0x4a0002ff  vnop
    ctx->pc = 0x151f6cu;
    // NOP operation, no action needed for VU0
    // 0x151f70: 0x4a0002ff  vnop
    ctx->pc = 0x151f70u;
    // NOP operation, no action needed for VU0
    // 0x151f74: 0x4a0002ff  vnop
    ctx->pc = 0x151f74u;
    // NOP operation, no action needed for VU0
    // 0x151f78: 0x4a0002ff  vnop
    ctx->pc = 0x151f78u;
    // NOP operation, no action needed for VU0
    // 0x151f7c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x151f7cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x151f80: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x151f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x151f84: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x151f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x151f88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151F88u;
    {
        const bool branch_taken_0x151f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F88u;
        // 0x151f8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f88) {
            ctx->pc = 0x151FA0u;
            goto label_151fa0;
        }
    }
    ctx->pc = 0x151F90u;
    // 0x151f90: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x151f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x151f94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f98: 0xc0618c2  jal         func_186308
    ctx->pc = 0x151F98u;
    SET_GPR_U32(ctx, 31, 0x151FA0u);
    ctx->pc = 0x151F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F98u;
    // 0x151f9c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x151F98u, 0x151FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FA0u;
label_151fa0:
    // 0x151fa0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x151fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x151fa4: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x151fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x151fa8: 0x8e420184  lw          $v0, 0x184($s2)
    ctx->pc = 0x151fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
label_151fac:
    // 0x151fac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x151FACu;
    {
        const bool branch_taken_0x151fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FACu;
        // 0x151fb0: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fac) {
            ctx->pc = 0x151FC4u;
            goto label_151fc4;
        }
    }
    ctx->pc = 0x151FB4u;
    // 0x151fb4: 0x0  nop
    ctx->pc = 0x151fb4u;
    // NOP
label_151fb8:
    // 0x151fb8: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x151fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x151fbc: 0xae400894  sw          $zero, 0x894($s2)
    ctx->pc = 0x151fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2196), GPR_U32(ctx, 0));
    // 0x151fc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x151fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_151fc4:
    // 0x151fc4: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x151fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    // 0x151fc8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x151fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151fcc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x151fccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x151fd0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x151fd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151fd4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x151fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x151fd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x151fd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151fdc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x151fdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x151fe0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x151fe0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151fe4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x151fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x151FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FE8u;
        // 0x151fec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151FF0u;
}
