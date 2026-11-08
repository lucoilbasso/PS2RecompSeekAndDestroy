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

// Function: GetFloorPosition__8ApcRsc3DP9FVector32fP14ApDiagSurfInfob
// Address: 0x144a68 - 0x144c5c
void GetFloorPosition__8ApcRsc3DP9FVector32fP14ApDiagSurfInfob_0x144a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFloorPosition__8ApcRsc3DP9FVector32fP14ApDiagSurfInfob_0x144a68");
#endif

    switch (ctx->pc) {
        case 0x144b1cu: goto label_144b1c;
        case 0x144b68u: goto label_144b68;
        case 0x144b94u: goto label_144b94;
        case 0x144bb0u: goto label_144bb0;
        case 0x144bc0u: goto label_144bc0;
        case 0x144bd4u: goto label_144bd4;
        default: break;
    }

    ctx->pc = 0x144a68u;

    // 0x144a68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x144a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x144a6c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x144a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x144a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x144a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144a74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x144a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x144a78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x144a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a7c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x144a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x144a80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x144a80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a84: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x144a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x144a88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x144a88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a8c: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x144a8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x144a90: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x144a90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x144a94: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x144a94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x144a98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x144a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x144a9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x144a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x144aa0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x144aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x144aa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x144aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x144aa8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x144aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x144aac: 0x8e910328  lw          $s1, 0x328($s4)
    ctx->pc = 0x144aacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
    // 0x144ab0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x144ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x144ab4: 0x26224020  addiu       $v0, $s1, 0x4020
    ctx->pc = 0x144ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16416));
    // 0x144ab8: 0x26264030  addiu       $a2, $s1, 0x4030
    ctx->pc = 0x144ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16432));
    // 0x144abc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x144abcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x144ac0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x144ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x144ac4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x144ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x144ac8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x144ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x144acc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x144accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x144ad0: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x144ad0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x144ad4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x144ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x144ad8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x144ad8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x144adc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x144adcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x144ae0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x144ae0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x144ae4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x144ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x144ae8: 0x2629402c  addiu       $t1, $s1, 0x402C
    ctx->pc = 0x144ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16428));
    // 0x144aec: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x144aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144af0: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x144af0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x144af4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144af8: 0xa1200003  sb          $zero, 0x3($t1)
    ctx->pc = 0x144af8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x144afc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x144afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b00: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x144b00u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x144b04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x144b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b08: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x144b08u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x144b0c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x144b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b10: 0xc6204000  lwc1        $f0, 0x4000($s1)
    ctx->pc = 0x144b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144b14: 0xc051318  jal         func_144C60
    ctx->pc = 0x144B14u;
    SET_GPR_U32(ctx, 31, 0x144B1Cu);
    ctx->pc = 0x144B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B14u;
    // 0x144b18: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x144C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144C60u, 0x144B14u, 0x144B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B1Cu;
label_144b1c:
    // 0x144b1c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x144B1Cu;
    {
        const bool branch_taken_0x144b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B1Cu;
        // 0x144b20: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b1c) {
            ctx->pc = 0x144C30u;
            goto label_144c30;
        }
    }
    ctx->pc = 0x144B24u;
    // 0x144b24: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x144b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x144b28: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x144B28u;
    {
        const bool branch_taken_0x144b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B28u;
        // 0x144b2c: 0x26304050  addiu       $s0, $s1, 0x4050 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b28) {
            ctx->pc = 0x144C30u;
            goto label_144c30;
        }
    }
    ctx->pc = 0x144B30u;
    // 0x144b30: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x144b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x144b34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x144b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144b38: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x144b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x144b3c: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x144b3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x144b40: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x144b40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x144b44: 0xe6150010  swc1        $f21, 0x10($s0)
    ctx->pc = 0x144b44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x144b48: 0x1260001f  beqz        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x144B48u;
    {
        const bool branch_taken_0x144b48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x144B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144B48u;
        // 0x144b4c: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144b48) {
            ctx->pc = 0x144BC8u;
            goto label_144bc8;
        }
    }
    ctx->pc = 0x144B50u;
    // 0x144b50: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x144b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x144b54: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x144b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x144b58: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x144B58u;
    {
        const bool branch_taken_0x144b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144b58) {
            ctx->pc = 0x144B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144B58u;
            // 0x144b5c: 0x8e84006c  lw          $a0, 0x6C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144BCCu;
            goto label_144bcc;
        }
    }
    ctx->pc = 0x144B60u;
    // 0x144b60: 0xc0609fe  jal         func_1827F8
    ctx->pc = 0x144B60u;
    SET_GPR_U32(ctx, 31, 0x144B68u);
    ctx->pc = 0x144B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B60u;
    // 0x144b64: 0x8e720020  lw          $s2, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1827F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1827F8u, 0x144B60u, 0x144B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B68u;
label_144b68:
    // 0x144b68: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x144b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x144b6c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x144b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x144b70: 0xa0430020  sb          $v1, 0x20($v0)
    ctx->pc = 0x144b70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x144b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b78: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x144b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x144b7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b80: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x144b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x144b84: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x144b84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144b88: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x144b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x144b8c: 0xc0600d6  jal         func_180358
    ctx->pc = 0x144B8Cu;
    SET_GPR_U32(ctx, 31, 0x144B94u);
    ctx->pc = 0x144B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144B8Cu;
    // 0x144b90: 0xc60d0014  lwc1        $f13, 0x14($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x180358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180358u, 0x144B8Cu, 0x144B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B94u;
label_144b94:
    // 0x144b94: 0x10550008  beq         $v0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x144B94u;
    {
        const bool branch_taken_0x144b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x144b94) {
            ctx->pc = 0x144BB8u;
            goto label_144bb8;
        }
    }
    ctx->pc = 0x144B9Cu;
    // 0x144b9c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x144b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x144ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ba4: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x144ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x144ba8: 0xc060aa2  jal         func_182A88
    ctx->pc = 0x144BA8u;
    SET_GPR_U32(ctx, 31, 0x144BB0u);
    ctx->pc = 0x144BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BA8u;
    // 0x144bac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A88u, 0x144BA8u, 0x144BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BB0u;
label_144bb0:
    // 0x144bb0: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x144BB0u;
    {
        const bool branch_taken_0x144bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x144bb0) {
            ctx->pc = 0x144BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144BB0u;
            // 0x144bb4: 0x8e84006c  lw          $a0, 0x6C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144BCCu;
            goto label_144bcc;
        }
    }
    ctx->pc = 0x144BB8u;
label_144bb8:
    // 0x144bb8: 0xc060a94  jal         func_182A50
    ctx->pc = 0x144BB8u;
    SET_GPR_U32(ctx, 31, 0x144BC0u);
    ctx->pc = 0x144BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BB8u;
    // 0x144bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182A50u, 0x144BB8u, 0x144BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BC0u;
label_144bc0:
    // 0x144bc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x144BC0u;
    {
        const bool branch_taken_0x144bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BC0u;
        // 0x144bc4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144bc0) {
            ctx->pc = 0x144BE0u;
            goto label_144be0;
        }
    }
    ctx->pc = 0x144BC8u;
label_144bc8:
    // 0x144bc8: 0x8e84006c  lw          $a0, 0x6C($s4)
    ctx->pc = 0x144bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_144bcc:
    // 0x144bcc: 0xc0601be  jal         func_1806F8
    ctx->pc = 0x144BCCu;
    SET_GPR_U32(ctx, 31, 0x144BD4u);
    ctx->pc = 0x144BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144BCCu;
    // 0x144bd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1806F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806F8u, 0x144BCCu, 0x144BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BD4u;
label_144bd4:
    // 0x144bd4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x144BD4u;
    {
        const bool branch_taken_0x144bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144bd4) {
            ctx->pc = 0x144BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144BD4u;
            // 0x144bd8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x144C30u;
            goto label_144c30;
        }
    }
    ctx->pc = 0x144BDCu;
    // 0x144bdc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x144bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_144be0:
    // 0x144be0: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x144be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x144be4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x144be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144be8: 0x26254030  addiu       $a1, $s1, 0x4030
    ctx->pc = 0x144be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16432));
    // 0x144bec: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x144becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x144bf0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x144bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x144bf4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x144bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x144bf8: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x144bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x144bfc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x144bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144c00: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x144c00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x144c04: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x144c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
    // 0x144c08: 0x26254020  addiu       $a1, $s1, 0x4020
    ctx->pc = 0x144c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16416));
    // 0x144c0c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x144c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x144c10: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x144c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x144c14: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x144c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144c18: 0xae244020  sw          $a0, 0x4020($s1)
    ctx->pc = 0x144c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16416), GPR_U32(ctx, 4));
    // 0x144c1c: 0xae22402c  sw          $v0, 0x402C($s1)
    ctx->pc = 0x144c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16428), GPR_U32(ctx, 2));
    // 0x144c20: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x144c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x144c24: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x144c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x144c28: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x144c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x144c2c: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x144c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_144c30:
    // 0x144c30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x144c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144c34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x144c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x144c38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x144c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144c3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x144c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x144c40: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x144c40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144c44: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x144c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x144c48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x144c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144c4c: 0xc7b50050  lwc1        $f21, 0x50($sp)
    ctx->pc = 0x144c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x144c50: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x144c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x144c54: 0x3e00008  jr          $ra
    ctx->pc = 0x144C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C54u;
        // 0x144c58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144C5Cu;
}
