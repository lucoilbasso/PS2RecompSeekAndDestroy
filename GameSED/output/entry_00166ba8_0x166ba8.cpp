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

// Function: entry_00166ba8
// Address: 0x166ba8 - 0x166d68
void entry_00166ba8_0x166ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166ba8_0x166ba8");
#endif

    switch (ctx->pc) {
        case 0x166bdcu: goto label_166bdc;
        case 0x166c0cu: goto label_166c0c;
        case 0x166c50u: goto label_166c50;
        case 0x166c6cu: goto label_166c6c;
        case 0x166ca4u: goto label_166ca4;
        case 0x166cbcu: goto label_166cbc;
        case 0x166cfcu: goto label_166cfc;
        case 0x166d14u: goto label_166d14;
        case 0x166d44u: goto label_166d44;
        case 0x166d5cu: goto label_166d5c;
        default: break;
    }

    ctx->pc = 0x166ba8u;

label_166ba8:
    // 0x166ba8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x166ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_166bac:
    // 0x166bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166bb0:
    // 0x166bb0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166bb4:
    // 0x166bb4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166bb8:
    // 0x166bb8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x166bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_166bbc:
    // 0x166bbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166bc0:
    // 0x166bc0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166bc4:
    // 0x166bc4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166bc8:
    // 0x166bc8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166bcc:
    // 0x166bcc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166bd0:
    // 0x166bd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166bd4:
    // 0x166bd4: 0x60f809  jalr        $v1
label_166bd8:
    if (ctx->pc == 0x166BD8u) {
        ctx->pc = 0x166BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BD4u;
        // 0x166bd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166BDCu;
        goto label_166bdc;
    }
    ctx->pc = 0x166BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166BDCu);
        ctx->pc = 0x166BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BD4u;
        // 0x166bd8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166BD4u, 0x166BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166BDCu;
label_166bdc:
    // 0x166bdc: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x166bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_166be0:
    // 0x166be0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x166be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166be4:
    // 0x166be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166be8:
    // 0x166be8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166bec:
    // 0x166bec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x166becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_166bf0:
    // 0x166bf0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x166bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166bf4:
    // 0x166bf4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x166bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_166bf8:
    // 0x166bf8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x166bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_166bfc:
    // 0x166bfc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x166bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_166c00:
    // 0x166c00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x166c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_166c04:
    // 0x166c04: 0x60f809  jalr        $v1
label_166c08:
    if (ctx->pc == 0x166C08u) {
        ctx->pc = 0x166C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C04u;
        // 0x166c08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C0Cu;
        goto label_166c0c;
    }
    ctx->pc = 0x166C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x166C0Cu);
        ctx->pc = 0x166C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C04u;
        // 0x166c08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166C04u, 0x166C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166C0Cu;
label_166c0c:
    // 0x166c0c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x166c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_166c10:
    // 0x166c10: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x166c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166c14:
    // 0x166c14: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166c18:
    // 0x166c18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_166c1c:
    // 0x166c1c: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x166c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_166c20:
    // 0x166c20: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x166c20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166c24:
    // 0x166c24: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x166c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166c28:
    // 0x166c28: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x166c28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166c2c:
    // 0x166c2c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166c30:
    // 0x166c30: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166c30u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166c34:
    // 0x166c34: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166c34u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166c38:
    // 0x166c38: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166c38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166c3c:
    // 0x166c3c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166c40:
    // 0x166c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166c44:
    // 0x166c44: 0xc79783a4  lwc1        $f23, -0x7C5C($gp)
    ctx->pc = 0x166c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_166c48:
    // 0x166c48: 0xc06164c  jal         func_185930
label_166c4c:
    if (ctx->pc == 0x166C4Cu) {
        ctx->pc = 0x166C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C48u;
        // 0x166c4c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C50u;
        goto label_166c50;
    }
    ctx->pc = 0x166C48u;
    SET_GPR_U32(ctx, 31, 0x166C50u);
    ctx->pc = 0x166C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C48u;
    // 0x166c4c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166C48u, 0x166C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C50u;
label_166c50:
    // 0x166c50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166c54:
    // 0x166c54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166c58:
    // 0x166c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166c5c:
    // 0x166c5c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166c5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166c60:
    // 0x166c60: 0xc79683a8  lwc1        $f22, -0x7C58($gp)
    ctx->pc = 0x166c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_166c64:
    // 0x166c64: 0xc069532  jal         func_1A54C8
label_166c68:
    if (ctx->pc == 0x166C68u) {
        ctx->pc = 0x166C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C64u;
        // 0x166c68: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C6Cu;
        goto label_166c6c;
    }
    ctx->pc = 0x166C64u;
    SET_GPR_U32(ctx, 31, 0x166C6Cu);
    ctx->pc = 0x166C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C64u;
    // 0x166c68: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166C64u, 0x166C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166C6Cu;
label_166c6c:
    // 0x166c6c: 0xc78083ac  lwc1        $f0, -0x7C54($gp)
    ctx->pc = 0x166c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166c70:
    // 0x166c70: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x166c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_166c74:
    // 0x166c74: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x166c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_166c78:
    // 0x166c78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166c7c:
    // 0x166c7c: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x166c7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166c80:
    // 0x166c80: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x166c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166c84:
    // 0x166c84: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166c88:
    // 0x166c88: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166c88u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166c8c:
    // 0x166c8c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166c8cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166c90:
    // 0x166c90: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166c90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166c94:
    // 0x166c94: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166c98:
    // 0x166c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166c9c:
    // 0x166c9c: 0xc06164c  jal         func_185930
label_166ca0:
    if (ctx->pc == 0x166CA0u) {
        ctx->pc = 0x166CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C9Cu;
        // 0x166ca0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166CA4u;
        goto label_166ca4;
    }
    ctx->pc = 0x166C9Cu;
    SET_GPR_U32(ctx, 31, 0x166CA4u);
    ctx->pc = 0x166CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166C9Cu;
    // 0x166ca0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166C9Cu, 0x166CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CA4u;
label_166ca4:
    // 0x166ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166ca8:
    // 0x166ca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166cac:
    // 0x166cac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166cb0:
    // 0x166cb0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166cb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166cb4:
    // 0x166cb4: 0xc069532  jal         func_1A54C8
label_166cb8:
    if (ctx->pc == 0x166CB8u) {
        ctx->pc = 0x166CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CB4u;
        // 0x166cb8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166CBCu;
        goto label_166cbc;
    }
    ctx->pc = 0x166CB4u;
    SET_GPR_U32(ctx, 31, 0x166CBCu);
    ctx->pc = 0x166CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CB4u;
    // 0x166cb8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166CB4u, 0x166CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CBCu;
label_166cbc:
    // 0x166cbc: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x166cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_166cc0:
    // 0x166cc0: 0x8e6601b4  lw          $a2, 0x1B4($s3)
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_166cc4:
    // 0x166cc4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x166cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_166cc8:
    // 0x166cc8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x166cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_166ccc:
    // 0x166ccc: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x166cccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_166cd0:
    // 0x166cd0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x166cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166cd4:
    // 0x166cd4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x166cd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166cd8:
    // 0x166cd8: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x166cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166cdc:
    // 0x166cdc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166ce0:
    // 0x166ce0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166ce0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166ce4:
    // 0x166ce4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166ce4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166ce8:
    // 0x166ce8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166ce8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166cec:
    // 0x166cec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166cf0:
    // 0x166cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166cf4:
    // 0x166cf4: 0xc06164c  jal         func_185930
label_166cf8:
    if (ctx->pc == 0x166CF8u) {
        ctx->pc = 0x166CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CF4u;
        // 0x166cf8: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166CFCu;
        goto label_166cfc;
    }
    ctx->pc = 0x166CF4u;
    SET_GPR_U32(ctx, 31, 0x166CFCu);
    ctx->pc = 0x166CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166CF4u;
    // 0x166cf8: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166CF4u, 0x166CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CFCu;
label_166cfc:
    // 0x166cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166d00:
    // 0x166d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166d04:
    // 0x166d04: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166d08:
    // 0x166d08: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166d08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166d0c:
    // 0x166d0c: 0xc069532  jal         func_1A54C8
label_166d10:
    if (ctx->pc == 0x166D10u) {
        ctx->pc = 0x166D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D0Cu;
        // 0x166d10: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D14u;
        goto label_166d14;
    }
    ctx->pc = 0x166D0Cu;
    SET_GPR_U32(ctx, 31, 0x166D14u);
    ctx->pc = 0x166D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D0Cu;
    // 0x166d10: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166D0Cu, 0x166D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D14u;
label_166d14:
    // 0x166d14: 0xc78083b0  lwc1        $f0, -0x7C50($gp)
    ctx->pc = 0x166d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166d18:
    // 0x166d18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x166d18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_166d1c:
    // 0x166d1c: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x166d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_166d20:
    // 0x166d20: 0x4404a800  mfc1        $a0, $f21
    ctx->pc = 0x166d20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_166d24:
    // 0x166d24: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x166d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_166d28:
    // 0x166d28: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x166d28u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_166d2c:
    // 0x166d2c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x166d2cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_166d30:
    // 0x166d30: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x166d30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_166d34:
    // 0x166d34: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x166d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_166d38:
    // 0x166d38: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x166d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_166d3c:
    // 0x166d3c: 0xc06164c  jal         func_185930
label_166d40:
    if (ctx->pc == 0x166D40u) {
        ctx->pc = 0x166D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D3Cu;
        // 0x166d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D44u;
        goto label_166d44;
    }
    ctx->pc = 0x166D3Cu;
    SET_GPR_U32(ctx, 31, 0x166D44u);
    ctx->pc = 0x166D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D3Cu;
    // 0x166d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x166D3Cu, 0x166D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D44u;
label_166d44:
    // 0x166d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166d48:
    // 0x166d48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166d4c:
    // 0x166d4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x166d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_166d50:
    // 0x166d50: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x166d50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_166d54:
    // 0x166d54: 0xc069532  jal         func_1A54C8
label_166d58:
    if (ctx->pc == 0x166D58u) {
        ctx->pc = 0x166D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D54u;
        // 0x166d58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D5Cu;
        goto label_166d5c;
    }
    ctx->pc = 0x166D54u;
    SET_GPR_U32(ctx, 31, 0x166D5Cu);
    ctx->pc = 0x166D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166D54u;
    // 0x166d58: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x166D54u, 0x166D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166D5Cu;
label_166d5c:
    // 0x166d5c: 0x10000190  b           . + 4 + (0x190 << 2)
label_166d60:
    if (ctx->pc == 0x166D60u) {
        ctx->pc = 0x166D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D5Cu;
        // 0x166d60: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166D64u;
        goto label_166d64;
    }
    ctx->pc = 0x166D5Cu;
    {
        const bool branch_taken_0x166d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166D5Cu;
        // 0x166d60: 0xae54000c  sw          $s4, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166d5c) {
            ctx->pc = 0x1673A0u;
            return;
        }
    }
    ctx->pc = 0x166D64u;
label_166d64:
    // 0x166d64: 0x0  nop
    ctx->pc = 0x166d64u;
    // NOP
    ctx->pc = 0x166d68u;
}
