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

// Function: entry_0016d974
// Address: 0x16d974 - 0x16da68
void entry_0016d974_0x16d974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d974_0x16d974");
#endif

    switch (ctx->pc) {
        case 0x16d988u: goto label_16d988;
        case 0x16d990u: goto label_16d990;
        case 0x16d9acu: goto label_16d9ac;
        case 0x16da08u: goto label_16da08;
        default: break;
    }

    ctx->pc = 0x16d974u;

label_16d974:
    // 0x16d974: 0x24040306  addiu       $a0, $zero, 0x306
    ctx->pc = 0x16d974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16d978:
    // 0x16d978: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x16d978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_16d97c:
    // 0x16d97c: 0x24110306  addiu       $s1, $zero, 0x306
    ctx->pc = 0x16d97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
label_16d980:
    // 0x16d980: 0xc0682b2  jal         func_1A0AC8
label_16d984:
    if (ctx->pc == 0x16D984u) {
        ctx->pc = 0x16D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D980u;
        // 0x16d984: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D988u;
        goto label_16d988;
    }
    ctx->pc = 0x16D980u;
    SET_GPR_U32(ctx, 31, 0x16D988u);
    ctx->pc = 0x16D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D980u;
    // 0x16d984: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x16D980u, 0x16D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D988u;
label_16d988:
    // 0x16d988: 0xc0682b6  jal         func_1A0AD8
label_16d98c:
    if (ctx->pc == 0x16D98Cu) {
        ctx->pc = 0x16D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D988u;
        // 0x16d98c: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D990u;
        goto label_16d990;
    }
    ctx->pc = 0x16D988u;
    SET_GPR_U32(ctx, 31, 0x16D990u);
    ctx->pc = 0x16D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D988u;
    // 0x16d98c: 0x24040310  addiu       $a0, $zero, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16D988u, 0x16D990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D990u;
label_16d990:
    // 0x16d990: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16d990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16d994:
    // 0x16d994: 0x2463f5d0  addiu       $v1, $v1, -0xA30
    ctx->pc = 0x16d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964688));
label_16d998:
    // 0x16d998: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16d998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d99c:
    // 0x16d99c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x16d99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_16d9a0:
    // 0x16d9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16d9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16d9a4:
    // 0x16d9a4: 0xc061258  jal         func_184960
label_16d9a8:
    if (ctx->pc == 0x16D9A8u) {
        ctx->pc = 0x16D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D9A4u;
        // 0x16d9a8: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D9ACu;
        goto label_16d9ac;
    }
    ctx->pc = 0x16D9A4u;
    SET_GPR_U32(ctx, 31, 0x16D9ACu);
    ctx->pc = 0x16D9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D9A4u;
    // 0x16d9a8: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x16D9A4u, 0x16D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D9ACu;
label_16d9ac:
    // 0x16d9ac: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x16d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_16d9b0:
    // 0x16d9b0: 0xc78084a8  lwc1        $f0, -0x7B58($gp)
    ctx->pc = 0x16d9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d9b4:
    // 0x16d9b4: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x16d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_16d9b8:
    // 0x16d9b8: 0xae500150  sw          $s0, 0x150($s2)
    ctx->pc = 0x16d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 16));
label_16d9bc:
    // 0x16d9bc: 0xe640020c  swc1        $f0, 0x20C($s2)
    ctx->pc = 0x16d9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 524), bits); }
label_16d9c0:
    // 0x16d9c0: 0xe6400200  swc1        $f0, 0x200($s2)
    ctx->pc = 0x16d9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 512), bits); }
label_16d9c4:
    // 0x16d9c4: 0xae530154  sw          $s3, 0x154($s2)
    ctx->pc = 0x16d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 19));
label_16d9c8:
    // 0x16d9c8: 0xae400204  sw          $zero, 0x204($s2)
    ctx->pc = 0x16d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 0));
label_16d9cc:
    // 0x16d9cc: 0xae400208  sw          $zero, 0x208($s2)
    ctx->pc = 0x16d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
label_16d9d0:
    // 0x16d9d0: 0xae400210  sw          $zero, 0x210($s2)
    ctx->pc = 0x16d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 528), GPR_U32(ctx, 0));
label_16d9d4:
    // 0x16d9d4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d9d8:
    // 0x16d9d8: 0x26420240  addiu       $v0, $s2, 0x240
    ctx->pc = 0x16d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
label_16d9dc:
    // 0x16d9dc: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x16d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d9e0:
    // 0x16d9e0: 0x26430290  addiu       $v1, $s2, 0x290
    ctx->pc = 0x16d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
label_16d9e4:
    // 0x16d9e4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x16d9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d9e8:
    // 0x16d9e8: 0x264402a0  addiu       $a0, $s2, 0x2A0
    ctx->pc = 0x16d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
label_16d9ec:
    // 0x16d9ec: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x16d9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_16d9f0:
    // 0x16d9f0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x16d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16d9f4:
    // 0x16d9f4: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x16d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_16d9f8:
    // 0x16d9f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16d9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16d9fc:
    // 0x16d9fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16da00:
    // 0x16da00: 0x60f809  jalr        $v1
label_16da04:
    if (ctx->pc == 0x16DA04u) {
        ctx->pc = 0x16DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA00u;
        // 0x16da04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DA08u;
        goto label_16da08;
    }
    ctx->pc = 0x16DA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16DA08u);
        ctx->pc = 0x16DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DA00u;
        // 0x16da04: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DA00u, 0x16DA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DA08u;
label_16da08:
    // 0x16da08: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x16da08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_16da0c:
    // 0x16da0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16da0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16da10:
    // 0x16da10: 0x26460300  addiu       $a2, $s2, 0x300
    ctx->pc = 0x16da10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 768));
label_16da14:
    // 0x16da14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16da14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_16da18:
    // 0x16da18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16da18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16da1c:
    // 0x16da1c: 0xe64202e4  swc1        $f2, 0x2E4($s2)
    ctx->pc = 0x16da1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 740), bits); }
label_16da20:
    // 0x16da20: 0xe64002e0  swc1        $f0, 0x2E0($s2)
    ctx->pc = 0x16da20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 736), bits); }
label_16da24:
    // 0x16da24: 0xe64202e8  swc1        $f2, 0x2E8($s2)
    ctx->pc = 0x16da24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 744), bits); }
label_16da28:
    // 0x16da28: 0xae4002ec  sw          $zero, 0x2EC($s2)
    ctx->pc = 0x16da28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 748), GPR_U32(ctx, 0));
label_16da2c:
    // 0x16da2c: 0xe64202f0  swc1        $f2, 0x2F0($s2)
    ctx->pc = 0x16da2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
label_16da30:
    // 0x16da30: 0xe64202f4  swc1        $f2, 0x2F4($s2)
    ctx->pc = 0x16da30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 756), bits); }
label_16da34:
    // 0x16da34: 0xc78184ac  lwc1        $f1, -0x7B54($gp)
    ctx->pc = 0x16da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16da38:
    // 0x16da38: 0xc78084b0  lwc1        $f0, -0x7B50($gp)
    ctx->pc = 0x16da38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16da3c:
    // 0x16da3c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x16da3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16da40:
    // 0x16da40: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x16da40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_16da44:
    // 0x16da44: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16da44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16da48:
    // 0x16da48: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16da48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_16da4c:
    // 0x16da4c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x16da4cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_16da50:
    // 0x16da50: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x16da50u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_16da54:
    // 0x16da54: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x16da54u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_16da58:
    // 0x16da58: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x16da58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_16da5c:
    // 0x16da5c: 0x264202d4  addiu       $v0, $s2, 0x2D4
    ctx->pc = 0x16da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 724));
label_16da60:
    // 0x16da60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16da60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16da64:
    // 0x16da64: 0x0  nop
    ctx->pc = 0x16da64u;
    // NOP
    ctx->pc = 0x16da68u;
}
