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

// Function: ApDaemonScanAroundList__FP7WcActorfiP9FVector32ii
// Address: 0x137c70 - 0x137eb0
void ApDaemonScanAroundList__FP7WcActorfiP9FVector32ii_0x137c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDaemonScanAroundList__FP7WcActorfiP9FVector32ii_0x137c70");
#endif

    switch (ctx->pc) {
        case 0x137ce8u: goto label_137ce8;
        case 0x137d28u: goto label_137d28;
        case 0x137d30u: goto label_137d30;
        case 0x137d88u: goto label_137d88;
        case 0x137dc8u: goto label_137dc8;
        default: break;
    }

    ctx->pc = 0x137c70u;

    // 0x137c70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x137c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x137c74: 0x24032118  addiu       $v1, $zero, 0x2118
    ctx->pc = 0x137c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x137c78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x137c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x137c7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x137c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x137c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x137c84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x137c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c88: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x137c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x137c8c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x137c8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c90: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x137c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x137c94: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x137c94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137c98: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x137c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x137c9c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x137c9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137ca0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x137ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x137ca4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x137ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x137ca8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x137ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x137cac: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x137cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x137cb0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x137cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x137cb4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x137CB4u;
    {
        const bool branch_taken_0x137cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x137CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CB4u;
        // 0x137cb8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cb4) {
            ctx->pc = 0x137CD0u;
            goto label_137cd0;
        }
    }
    ctx->pc = 0x137CBCu;
    // 0x137cbc: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x137cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
    // 0x137cc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137CC0u;
    {
        const bool branch_taken_0x137cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CC0u;
        // 0x137cc4: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cc0) {
            ctx->pc = 0x137CD4u;
            goto label_137cd4;
        }
    }
    ctx->pc = 0x137CC8u;
    // 0x137cc8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x137CC8u;
    {
        const bool branch_taken_0x137cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CC8u;
        // 0x137ccc: 0xaf808a1c  sw          $zero, -0x75E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cc8) {
            ctx->pc = 0x137E80u;
            goto label_137e80;
        }
    }
    ctx->pc = 0x137CD0u;
label_137cd0:
    // 0x137cd0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x137cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_137cd4:
    // 0x137cd4: 0xaf808a18  sw          $zero, -0x75E8($gp)
    ctx->pc = 0x137cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 0));
    // 0x137cd8: 0x2442a390  addiu       $v0, $v0, -0x5C70
    ctx->pc = 0x137cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x137cdc: 0xaf808a1c  sw          $zero, -0x75E4($gp)
    ctx->pc = 0x137cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 0));
    // 0x137ce0: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x137ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x137ce4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x137ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_137ce8:
    // 0x137ce8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x137ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x137cec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x137cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x137cf0: 0x0  nop
    ctx->pc = 0x137cf0u;
    // NOP
    // 0x137cf4: 0x0  nop
    ctx->pc = 0x137cf4u;
    // NOP
    // 0x137cf8: 0x0  nop
    ctx->pc = 0x137cf8u;
    // NOP
    // 0x137cfc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x137CFCu;
    {
        const bool branch_taken_0x137cfc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x137D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CFCu;
        // 0x137d00: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137cfc) {
            ctx->pc = 0x137CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137ce8;
        }
    }
    ctx->pc = 0x137D04u;
    // 0x137d04: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x137d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x137d08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x137d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137d0c: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x137d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x137d10: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x137d10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x137d14: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x137d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x137d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137D18u;
    {
        const bool branch_taken_0x137d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D18u;
        // 0x137d1c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d18) {
            ctx->pc = 0x137D28u;
            goto label_137d28;
        }
    }
    ctx->pc = 0x137D20u;
    // 0x137d20: 0xc061920  jal         func_186480
    ctx->pc = 0x137D20u;
    SET_GPR_U32(ctx, 31, 0x137D28u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x137D20u, 0x137D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D28u;
label_137d28:
    // 0x137d28: 0xc061422  jal         func_185088
    ctx->pc = 0x137D28u;
    SET_GPR_U32(ctx, 31, 0x137D30u);
    ctx->pc = 0x137D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D28u;
    // 0x137d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x137D28u, 0x137D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D30u;
label_137d30:
    // 0x137d30: 0x26630110  addiu       $v1, $s3, 0x110
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    // 0x137d34: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x137d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137d38: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x137d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x137d3c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x137D3Cu;
    {
        const bool branch_taken_0x137d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D3Cu;
        // 0x137d40: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d3c) {
            ctx->pc = 0x137D74u;
            goto label_137d74;
        }
    }
    ctx->pc = 0x137D44u;
    // 0x137d44: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x137D44u;
    {
        const bool branch_taken_0x137d44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x137d44) {
            ctx->pc = 0x137D68u;
            goto label_137d68;
        }
    }
    ctx->pc = 0x137D4Cu;
    // 0x137d4c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x137d4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137d50: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x137d50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137d54: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x137d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x137d58: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x137d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x137d5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x137D5Cu;
    {
        const bool branch_taken_0x137d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D5Cu;
        // 0x137d60: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d5c) {
            ctx->pc = 0x137D74u;
            goto label_137d74;
        }
    }
    ctx->pc = 0x137D64u;
    // 0x137d64: 0x0  nop
    ctx->pc = 0x137d64u;
    // NOP
label_137d68:
    // 0x137d68: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x137d68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137d6c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x137d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x137d70: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x137d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_137d74:
    // 0x137d74: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x137d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d80: 0xc04dd4a  jal         func_137528
    ctx->pc = 0x137D80u;
    SET_GPR_U32(ctx, 31, 0x137D88u);
    ctx->pc = 0x137D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D80u;
    // 0x137d84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x137528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137528u, 0x137D80u, 0x137D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D88u;
label_137d88:
    // 0x137d88: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x137D88u;
    {
        const bool branch_taken_0x137d88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x137D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D88u;
        // 0x137d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d88) {
            ctx->pc = 0x137E84u;
            goto label_137e84;
        }
    }
    ctx->pc = 0x137D90u;
    // 0x137d90: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x137d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x137d94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x137d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d98: 0x2447bc50  addiu       $a3, $v0, -0x43B0
    ctx->pc = 0x137d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949968));
    // 0x137d9c: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x137d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x137da0: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x137DA0u;
    {
        const bool branch_taken_0x137da0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x137DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DA0u;
        // 0x137da4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137da0) {
            ctx->pc = 0x137E70u;
            goto label_137e70;
        }
    }
    ctx->pc = 0x137DA8u;
    // 0x137da8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x137da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x137dac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x137dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x137db0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x137db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x137db4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x137db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x137db8: 0x2446a390  addiu       $a2, $v0, -0x5C70
    ctx->pc = 0x137db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x137dbc: 0x24090946  addiu       $t1, $zero, 0x946
    ctx->pc = 0x137dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x137dc0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x137dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dc4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x137dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_137dc8:
    // 0x137dc8: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x137dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137dcc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x137dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x137dd0: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x137dd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137dd4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x137DD4u;
    {
        const bool branch_taken_0x137dd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DD4u;
        // 0x137dd8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137dd4) {
            ctx->pc = 0x137DE0u;
            goto label_137de0;
        }
    }
    ctx->pc = 0x137DDCu;
    // 0x137ddc: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x137ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137de0:
    // 0x137de0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x137de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137de4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x137de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x137de8: 0x54490006  bnel        $v0, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x137DE8u;
    {
        const bool branch_taken_0x137de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x137de8) {
            ctx->pc = 0x137DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137DE8u;
            // 0x137dec: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x137E04u;
            goto label_137e04;
        }
    }
    ctx->pc = 0x137DF0u;
    // 0x137df0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137df4: 0x8c43018c  lw          $v1, 0x18C($v0)
    ctx->pc = 0x137df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x137df8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x137DF8u;
    {
        const bool branch_taken_0x137df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137df8) {
            ctx->pc = 0x137DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137DF8u;
            // 0x137dfc: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x137E00u;
            goto label_137e00;
        }
    }
    ctx->pc = 0x137E00u;
label_137e00:
    // 0x137e00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x137e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_137e04:
    // 0x137e04: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x137e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137e08: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x137e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x137e0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x137e0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x137e10: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x137e10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x137e14: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x137e14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137e18: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x137E18u;
    {
        const bool branch_taken_0x137e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137e18) {
            ctx->pc = 0x137E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E18u;
            // 0x137e1c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137E54u;
            goto label_137e54;
        }
    }
    ctx->pc = 0x137E20u;
    // 0x137e20: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x137e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x137e24: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x137e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137e28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x137E28u;
    {
        const bool branch_taken_0x137e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E28u;
        // 0x137e2c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e28) {
            ctx->pc = 0x137E54u;
            goto label_137e54;
        }
    }
    ctx->pc = 0x137E30u;
    // 0x137e30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x137e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137e34: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x137e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x137e38: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x137E38u;
    {
        const bool branch_taken_0x137e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x137e38) {
            ctx->pc = 0x137E54u;
            goto label_137e54;
        }
    }
    ctx->pc = 0x137E40u;
    // 0x137e40: 0xac720100  sw          $s2, 0x100($v1)
    ctx->pc = 0x137e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 18));
    // 0x137e44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x137e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x137e48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137e4c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x137e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x137e50: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x137e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_137e54:
    // 0x137e54: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x137e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x137e58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137E58u;
    {
        const bool branch_taken_0x137e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E58u;
        // 0x137e5c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e58) {
            ctx->pc = 0x137E70u;
            goto label_137e70;
        }
    }
    ctx->pc = 0x137E60u;
    // 0x137e60: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x137e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x137e64: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x137e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137e68: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x137E68u;
    {
        const bool branch_taken_0x137e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137e68) {
            ctx->pc = 0x137E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E68u;
            // 0x137e6c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137dc8;
        }
    }
    ctx->pc = 0x137E70u;
label_137e70:
    // 0x137e70: 0xaf888a1c  sw          $t0, -0x75E4($gp)
    ctx->pc = 0x137e70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 8));
    // 0x137e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137E74u;
    {
        const bool branch_taken_0x137e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E74u;
        // 0x137e78: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e74) {
            ctx->pc = 0x137E84u;
            goto label_137e84;
        }
    }
    ctx->pc = 0x137E7Cu;
    // 0x137e7c: 0x0  nop
    ctx->pc = 0x137e7cu;
    // NOP
label_137e80:
    // 0x137e80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137e84:
    // 0x137e84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x137e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x137e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x137e8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x137e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137e90: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x137e90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x137e94: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x137e94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137e98: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x137e98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x137e9c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x137e9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137ea0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x137ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x137ea4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x137ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x137EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EA8u;
        // 0x137eac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137EB0u;
}
