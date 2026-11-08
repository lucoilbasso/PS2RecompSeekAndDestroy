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

// Function: caseD_1
// Address: 0x166aa0 - 0x166ba8
void caseD_1_0x166aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x166aa0");
#endif

    switch (ctx->pc) {
        case 0x166aa0u: goto label_166aa0;
        case 0x166aa4u: goto label_166aa4;
        case 0x166aa8u: goto label_166aa8;
        case 0x166aacu: goto label_166aac;
        case 0x166ab0u: goto label_166ab0;
        case 0x166ab4u: goto label_166ab4;
        case 0x166ab8u: goto label_166ab8;
        case 0x166abcu: goto label_166abc;
        case 0x166ac0u: goto label_166ac0;
        case 0x166ac4u: goto label_166ac4;
        case 0x166ac8u: goto label_166ac8;
        case 0x166accu: goto label_166acc;
        case 0x166ad0u: goto label_166ad0;
        case 0x166ad4u: goto label_166ad4;
        case 0x166ad8u: goto label_166ad8;
        case 0x166adcu: goto label_166adc;
        case 0x166ae0u: goto label_166ae0;
        case 0x166ae4u: goto label_166ae4;
        case 0x166ae8u: goto label_166ae8;
        case 0x166aecu: goto label_166aec;
        case 0x166af0u: goto label_166af0;
        case 0x166af4u: goto label_166af4;
        case 0x166af8u: goto label_166af8;
        case 0x166afcu: goto label_166afc;
        case 0x166b00u: goto label_166b00;
        case 0x166b04u: goto label_166b04;
        case 0x166b08u: goto label_166b08;
        case 0x166b0cu: goto label_166b0c;
        case 0x166b10u: goto label_166b10;
        case 0x166b14u: goto label_166b14;
        case 0x166b18u: goto label_166b18;
        case 0x166b1cu: goto label_166b1c;
        case 0x166b20u: goto label_166b20;
        case 0x166b24u: goto label_166b24;
        case 0x166b28u: goto label_166b28;
        case 0x166b2cu: goto label_166b2c;
        case 0x166b30u: goto label_166b30;
        case 0x166b34u: goto label_166b34;
        case 0x166b38u: goto label_166b38;
        case 0x166b3cu: goto label_166b3c;
        case 0x166b40u: goto label_166b40;
        case 0x166b44u: goto label_166b44;
        case 0x166b48u: goto label_166b48;
        case 0x166b4cu: goto label_166b4c;
        case 0x166b50u: goto label_166b50;
        case 0x166b54u: goto label_166b54;
        case 0x166b58u: goto label_166b58;
        case 0x166b5cu: goto label_166b5c;
        case 0x166b60u: goto label_166b60;
        case 0x166b64u: goto label_166b64;
        case 0x166b68u: goto label_166b68;
        case 0x166b6cu: goto label_166b6c;
        case 0x166b70u: goto label_166b70;
        case 0x166b74u: goto label_166b74;
        case 0x166b78u: goto label_166b78;
        case 0x166b7cu: goto label_166b7c;
        case 0x166b80u: goto label_166b80;
        case 0x166b84u: goto label_166b84;
        case 0x166b88u: goto label_166b88;
        case 0x166b8cu: goto label_166b8c;
        case 0x166b90u: goto label_166b90;
        case 0x166b94u: goto label_166b94;
        case 0x166b98u: goto label_166b98;
        case 0x166b9cu: goto label_166b9c;
        case 0x166ba0u: goto label_166ba0;
        case 0x166ba4u: goto label_166ba4;
        default: break;
    }

    ctx->pc = 0x166aa0u;

label_166aa0:
    // 0x166aa0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x166aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_166aa4:
    // 0x166aa4: 0x14400239  bnez        $v0, . + 4 + (0x239 << 2)
label_166aa8:
    if (ctx->pc == 0x166AA8u) {
        ctx->pc = 0x166AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AA4u;
        // 0x166aa8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AACu;
        goto label_166aac;
    }
    ctx->pc = 0x166AA4u;
    {
        const bool branch_taken_0x166aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AA4u;
        // 0x166aa8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166aa4) {
            ctx->pc = 0x16738Cu;
            return;
        }
    }
    ctx->pc = 0x166AACu;
label_166aac:
    // 0x166aac: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
label_166ab0:
    if (ctx->pc == 0x166AB0u) {
        ctx->pc = 0x166AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AACu;
        // 0x166ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AB4u;
        goto label_166ab4;
    }
    ctx->pc = 0x166AACu;
    {
        const bool branch_taken_0x166aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AACu;
        // 0x166ab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166aac) {
            ctx->pc = 0x166BA8u;
            return;
        }
    }
    ctx->pc = 0x166AB4u;
label_166ab4:
    // 0x166ab4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166ab8:
    // 0x166ab8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166abc:
    // 0x166abc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166ac0:
    // 0x166ac0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166ac4:
    // 0x166ac4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166ac8:
    // 0x166ac8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166acc:
    // 0x166acc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166ad0:
    // 0x166ad0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166ad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166ad4:
    // 0x166ad4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166ad8:
    // 0x166ad8: 0x60f809  jalr        $v1
label_166adc:
    if (ctx->pc == 0x166ADCu) {
        ctx->pc = 0x166ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AD8u;
        // 0x166adc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166AE0u;
        goto label_166ae0;
    }
    ctx->pc = 0x166AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166AE0u);
        ctx->pc = 0x166ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AD8u;
        // 0x166adc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166AD8u, 0x166AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166AE0u;
label_166ae0:
    // 0x166ae0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166ae4:
    // 0x166ae4: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166ae8:
    // 0x166ae8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x166ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166aec:
    // 0x166aec: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166af0:
    // 0x166af0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166af4:
    // 0x166af4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166af8:
    // 0x166af8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166afc:
    // 0x166afc: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166b00:
    // 0x166b00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166b00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166b04:
    // 0x166b04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166b08:
    // 0x166b08: 0x60f809  jalr        $v1
label_166b0c:
    if (ctx->pc == 0x166B0Cu) {
        ctx->pc = 0x166B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B08u;
        // 0x166b0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B10u;
        goto label_166b10;
    }
    ctx->pc = 0x166B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166B10u);
        ctx->pc = 0x166B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B08u;
        // 0x166b0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B08u, 0x166B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166B10u;
label_166b10:
    // 0x166b10: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x166b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_166b14:
    // 0x166b14: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x166b14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166b18:
    // 0x166b18: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x166b18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_166b1c:
    // 0x166b1c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x166b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_166b20:
    // 0x166b20: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166b24:
    // 0x166b24: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x166b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_166b28:
    // 0x166b28: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166b2c:
    // 0x166b2c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166b30:
    // 0x166b30: 0xc79583a0  lwc1        $f21, -0x7C60($gp)
    ctx->pc = 0x166b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_166b34:
    // 0x166b34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166b38:
    // 0x166b38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x166b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_166b3c:
    // 0x166b3c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x166b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166b40:
    // 0x166b40: 0xc06164c  jal         func_185930
label_166b44:
    if (ctx->pc == 0x166B44u) {
        ctx->pc = 0x166B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B40u;
        // 0x166b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B48u;
        goto label_166b48;
    }
    ctx->pc = 0x166B40u;
    SET_GPR_U32(ctx, 31, 0x166B48u);
    ctx->pc = 0x166B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B40u;
    // 0x166b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166B40u, 0x166B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B48u;
label_166b48:
    // 0x166b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166b4c:
    // 0x166b4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166b50:
    // 0x166b50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166b54:
    // 0x166b54: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x166b54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_166b58:
    // 0x166b58: 0xc069532  jal         func_1A54C8
label_166b5c:
    if (ctx->pc == 0x166B5Cu) {
        ctx->pc = 0x166B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B58u;
        // 0x166b5c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B60u;
        goto label_166b60;
    }
    ctx->pc = 0x166B58u;
    SET_GPR_U32(ctx, 31, 0x166B60u);
    ctx->pc = 0x166B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B58u;
    // 0x166b5c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166B58u, 0x166B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B60u;
label_166b60:
    // 0x166b60: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166b64:
    // 0x166b64: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166b68:
    // 0x166b68: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x166b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_166b6c:
    // 0x166b6c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166b70:
    // 0x166b70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166b74:
    // 0x166b74: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x166b74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166b78:
    // 0x166b78: 0xc06164c  jal         func_185930
label_166b7c:
    if (ctx->pc == 0x166B7Cu) {
        ctx->pc = 0x166B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B78u;
        // 0x166b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B80u;
        goto label_166b80;
    }
    ctx->pc = 0x166B78u;
    SET_GPR_U32(ctx, 31, 0x166B80u);
    ctx->pc = 0x166B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B78u;
    // 0x166b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166B78u, 0x166B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B80u;
label_166b80:
    // 0x166b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166b84:
    // 0x166b84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166b88:
    // 0x166b88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x166b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166b8c:
    // 0x166b8c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x166b8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_166b90:
    // 0x166b90: 0xc069532  jal         func_1A54C8
label_166b94:
    if (ctx->pc == 0x166B94u) {
        ctx->pc = 0x166B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B90u;
        // 0x166b94: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166B98u;
        goto label_166b98;
    }
    ctx->pc = 0x166B90u;
    SET_GPR_U32(ctx, 31, 0x166B98u);
    ctx->pc = 0x166B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166B90u;
    // 0x166b94: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166B90u, 0x166B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166B98u;
label_166b98:
    // 0x166b98: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x166b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
label_166b9c:
    // 0x166b9c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x166b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_166ba0:
    // 0x166ba0: 0x10000201  b           . + 4 + (0x201 << 2)
label_166ba4:
    if (ctx->pc == 0x166BA4u) {
        ctx->pc = 0x166BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BA0u;
        // 0x166ba4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166BA8u;
        goto label_fallthrough_0x166ba0;
    }
    ctx->pc = 0x166BA0u;
    {
        const bool branch_taken_0x166ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BA0u;
        // 0x166ba4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ba0) {
            ctx->pc = 0x1673A8u;
            return;
        }
    }
label_fallthrough_0x166ba0:
    ctx->pc = 0x166BA8u;
}
