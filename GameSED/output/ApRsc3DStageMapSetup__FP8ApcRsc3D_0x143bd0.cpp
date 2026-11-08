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

// Function: ApRsc3DStageMapSetup__FP8ApcRsc3D
// Address: 0x143bd0 - 0x143d50
void ApRsc3DStageMapSetup__FP8ApcRsc3D_0x143bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DStageMapSetup__FP8ApcRsc3D_0x143bd0");
#endif

    switch (ctx->pc) {
        case 0x143c38u: goto label_143c38;
        case 0x143c50u: goto label_143c50;
        case 0x143c58u: goto label_143c58;
        case 0x143c84u: goto label_143c84;
        case 0x143c98u: goto label_143c98;
        case 0x143cacu: goto label_143cac;
        case 0x143d1cu: goto label_143d1c;
        default: break;
    }

    ctx->pc = 0x143bd0u;

    // 0x143bd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x143bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x143bd4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x143bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x143bd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x143bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x143bdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x143bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143be0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x143be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x143be4: 0x26540080  addiu       $s4, $s2, 0x80
    ctx->pc = 0x143be4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x143be8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x143be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x143bec: 0x26550044  addiu       $s5, $s2, 0x44
    ctx->pc = 0x143becu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x143bf0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x143bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x143bf4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x143bf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bf8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x143bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x143bfc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x143bfcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143c00: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x143c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x143c04: 0x3c1e0044  lui         $fp, 0x44
    ctx->pc = 0x143c04u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)68 << 16));
    // 0x143c08: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x143c08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x143c0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x143c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143c10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x143c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x143c14: 0x37de504d  ori         $fp, $fp, 0x504D
    ctx->pc = 0x143c14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)20557);
    // 0x143c18: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x143c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x143c1c: 0x26510220  addiu       $s1, $s2, 0x220
    ctx->pc = 0x143c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x143c20: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x143c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x143c24: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x143c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x143c28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x143c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x143c2c: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x143c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x143c30: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x143C30u;
    SET_GPR_U32(ctx, 31, 0x143C38u);
    ctx->pc = 0x143C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C30u;
    // 0x143c34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x143C30u, 0x143C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C38u;
label_143c38:
    // 0x143c38: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x143c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x143c3c: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x143C3Cu;
    {
        const bool branch_taken_0x143c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c3c) {
            ctx->pc = 0x143C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143C3Cu;
            // 0x143c40: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143D04u;
            goto label_143d04;
        }
    }
    ctx->pc = 0x143C44u;
    // 0x143c44: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x143c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x143c48: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x143C48u;
    SET_GPR_U32(ctx, 31, 0x143C50u);
    ctx->pc = 0x143C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C48u;
    // 0x143c4c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x143C48u, 0x143C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C50u;
label_143c50:
    // 0x143c50: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x143C50u;
    SET_GPR_U32(ctx, 31, 0x143C58u);
    ctx->pc = 0x143C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C50u;
    // 0x143c54: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x143C50u, 0x143C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C58u;
label_143c58:
    // 0x143c58: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x143c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x143c5c: 0x24646a20  addiu       $a0, $v1, 0x6A20
    ctx->pc = 0x143c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27168));
    // 0x143c60: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x143c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x143c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c68: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x143c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143c70: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x143c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c74: 0x145e0006  bne         $v0, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x143C74u;
    {
        const bool branch_taken_0x143c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x143C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C74u;
        // 0x143c78: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c74) {
            ctx->pc = 0x143C90u;
            goto label_143c90;
        }
    }
    ctx->pc = 0x143C7Cu;
    // 0x143c7c: 0xc050d78  jal         func_1435E0
    ctx->pc = 0x143C7Cu;
    SET_GPR_U32(ctx, 31, 0x143C84u);
    ctx->pc = 0x143C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C7Cu;
    // 0x143c80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1435E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1435E0u, 0x143C7Cu, 0x143C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C84u;
label_143c84:
    // 0x143c84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x143C84u;
    {
        const bool branch_taken_0x143c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143c84) {
            ctx->pc = 0x143CACu;
            goto label_143cac;
        }
    }
    ctx->pc = 0x143C8Cu;
    // 0x143c8c: 0x0  nop
    ctx->pc = 0x143c8cu;
    // NOP
label_143c90:
    // 0x143c90: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x143C90u;
    SET_GPR_U32(ctx, 31, 0x143C98u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x143C90u, 0x143C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C98u;
label_143c98:
    // 0x143c98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c9c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x143c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x143ca0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x143ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x143ca4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x143CA4u;
    SET_GPR_U32(ctx, 31, 0x143CACu);
    ctx->pc = 0x143CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143CA4u;
    // 0x143ca8: 0x24456a08  addiu       $a1, $v0, 0x6A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x143CA4u, 0x143CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143CACu;
label_143cac:
    // 0x143cac: 0x12e00014  beqz        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x143CACu;
    {
        const bool branch_taken_0x143cac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CACu;
        // 0x143cb0: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cac) {
            ctx->pc = 0x143D00u;
            goto label_143d00;
        }
    }
    ctx->pc = 0x143CB4u;
    // 0x143cb4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x143cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x143cb8: 0x433006  srlv        $a2, $v1, $v0
    ctx->pc = 0x143cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x143cbc: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x143cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x143cc0: 0xae460210  sw          $a2, 0x210($s2)
    ctx->pc = 0x143cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 6));
    // 0x143cc4: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x143cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143cc8: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x143cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x143ccc: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x143cccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x143cd0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x143cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x143cd4: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x143cd4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x143cd8: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x143cd8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x143cdc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x143cdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x143ce0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x143ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x143ce4: 0x26660040  addiu       $a2, $s3, 0x40
    ctx->pc = 0x143ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x143ce8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x143ce8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x143cec: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x143cecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143cf0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x143cf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x143cf4: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x143cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x143cf8: 0xae530230  sw          $s3, 0x230($s2)
    ctx->pc = 0x143cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 19));
    // 0x143cfc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x143cfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143d00:
    // 0x143d00: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x143d00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_143d04:
    // 0x143d04: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x143d04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x143d08: 0x2ac20005  slti        $v0, $s6, 0x5
    ctx->pc = 0x143d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x143d0c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x143D0Cu;
    {
        const bool branch_taken_0x143d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D0Cu;
        // 0x143d10: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d0c) {
            ctx->pc = 0x143C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143c38;
        }
    }
    ctx->pc = 0x143D14u;
    // 0x143d14: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x143D14u;
    SET_GPR_U32(ctx, 31, 0x143D1Cu);
    ctx->pc = 0x143D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D14u;
    // 0x143d18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x143D14u, 0x143D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D1Cu;
label_143d1c:
    // 0x143d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x143d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143d20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x143d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143d24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x143d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143d28: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x143d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143d2c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x143d2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143d30: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x143d30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x143d34: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x143d34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143d38: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x143d38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x143d3c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x143d3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143d40: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x143d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x143d44: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x143d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x143d48: 0x3e00008  jr          $ra
    ctx->pc = 0x143D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D48u;
        // 0x143d4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143D50u;
}
