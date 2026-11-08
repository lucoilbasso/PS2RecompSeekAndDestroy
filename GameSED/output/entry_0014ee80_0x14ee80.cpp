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

// Function: entry_0014ee80
// Address: 0x14ee80 - 0x14efc8
void entry_0014ee80_0x14ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ee80_0x14ee80");
#endif

    ctx->pc = 0x14ee80u;

label_14ee80:
    // 0x14ee80: 0x24e60070  addiu       $a2, $a3, 0x70
    ctx->pc = 0x14ee80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x14ee84: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14ee84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ee88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14ee88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ee8c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14ee8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ee90: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee94: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ee94u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ee98: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ee98u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ee9c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ee9cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14eea0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14eea4: 0xe4e10080  swc1        $f1, 0x80($a3)
    ctx->pc = 0x14eea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 128), bits); }
    // 0x14eea8: 0x24e600a0  addiu       $a2, $a3, 0xA0
    ctx->pc = 0x14eea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x14eeac: 0xa0e00087  sb          $zero, 0x87($a3)
    ctx->pc = 0x14eeacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eeb0: 0xa0e00086  sb          $zero, 0x86($a3)
    ctx->pc = 0x14eeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eeb4: 0xa0e00085  sb          $zero, 0x85($a3)
    ctx->pc = 0x14eeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 133), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eeb8: 0xa0e00084  sb          $zero, 0x84($a3)
    ctx->pc = 0x14eeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eebc: 0xe4e10088  swc1        $f1, 0x88($a3)
    ctx->pc = 0x14eebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 136), bits); }
    // 0x14eec0: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x14eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x14eec4: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x14eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x14eec8: 0xace00098  sw          $zero, 0x98($a3)
    ctx->pc = 0x14eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 0));
    // 0x14eecc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x14eeccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14eed0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14eed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14eed4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x14eed4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14eed8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14eed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14eedc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14eedcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14eee0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14eee0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14eee4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14eee4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14eee8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x14eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x14eeec: 0xa0e0009f  sb          $zero, 0x9F($a3)
    ctx->pc = 0x14eeecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 159), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eef0: 0xa0e0009e  sb          $zero, 0x9E($a3)
    ctx->pc = 0x14eef0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 158), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eef4: 0xa0e0009d  sb          $zero, 0x9D($a3)
    ctx->pc = 0x14eef4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 157), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eef8: 0xa0e0009c  sb          $zero, 0x9C($a3)
    ctx->pc = 0x14eef8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x14eefc: 0xf9200000  sqc2        $vf0, 0x0($t1)
    ctx->pc = 0x14eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef00: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x14ef04: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x14ef04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x14ef08: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x14ef08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x14ef0c: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x14ef0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x14ef10: 0x561ffdb  bgez        $t3, . + 4 + (-0x25 << 2)
    ctx->pc = 0x14EF10u;
    {
        const bool branch_taken_0x14ef10 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x14EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF10u;
        // 0x14ef14: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef10) {
            ctx->pc = 0x14EE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ee80;
        }
    }
    ctx->pc = 0x14EF18u;
    // 0x14ef18: 0x25020270  addiu       $v0, $t0, 0x270
    ctx->pc = 0x14ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 624));
    // 0x14ef1c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef20: 0x25030280  addiu       $v1, $t0, 0x280
    ctx->pc = 0x14ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 640));
    // 0x14ef24: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x14ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef28: 0x25020290  addiu       $v0, $t0, 0x290
    ctx->pc = 0x14ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 656));
    // 0x14ef2c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x14ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef30: 0x250302a0  addiu       $v1, $t0, 0x2A0
    ctx->pc = 0x14ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 672));
    // 0x14ef34: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x14ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef38: 0x250702b0  addiu       $a3, $t0, 0x2B0
    ctx->pc = 0x14ef38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 688));
    // 0x14ef3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ef3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ef40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ef40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ef44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14ef44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ef48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ef48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ef4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x14ef4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14ef50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x14ef50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x14ef54: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x14ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x14ef58: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x14ef58u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14ef5c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x14ef5cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x14ef60: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x14ef60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x14ef64: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x14ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x14ef68: 0x250602c0  addiu       $a2, $t0, 0x2C0
    ctx->pc = 0x14ef68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 704));
    // 0x14ef6c: 0xf8c00000  sqc2        $vf0, 0x0($a2)
    ctx->pc = 0x14ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ef70: 0xad0002dc  sw          $zero, 0x2DC($t0)
    ctx->pc = 0x14ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 732), GPR_U32(ctx, 0));
    // 0x14ef74: 0x26040260  addiu       $a0, $s0, 0x260
    ctx->pc = 0x14ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x14ef78: 0xad0002d0  sw          $zero, 0x2D0($t0)
    ctx->pc = 0x14ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 720), GPR_U32(ctx, 0));
    // 0x14ef7c: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x14ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x14ef80: 0xad0002d8  sw          $zero, 0x2D8($t0)
    ctx->pc = 0x14ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 728), GPR_U32(ctx, 0));
    // 0x14ef84: 0x346377ff  ori         $v1, $v1, 0x77FF
    ctx->pc = 0x14ef84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30719);
    // 0x14ef88: 0x260503b0  addiu       $a1, $s0, 0x3B0
    ctx->pc = 0x14ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x14ef8c: 0x2406dfff  addiu       $a2, $zero, -0x2001
    ctx->pc = 0x14ef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x14ef90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14ef94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14ef94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ef98: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x14ef98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14ef9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14ef9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14efa0: 0xe50102d4  swc1        $f1, 0x2D4($t0)
    ctx->pc = 0x14efa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 724), bits); }
    // 0x14efa4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x14efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x14efa8: 0xaca002d0  sw          $zero, 0x2D0($a1)
    ctx->pc = 0x14efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 720), GPR_U32(ctx, 0));
    // 0x14efac: 0xe4a102d4  swc1        $f1, 0x2D4($a1)
    ctx->pc = 0x14efacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 724), bits); }
    // 0x14efb0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14efb4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x14efb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14efb8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EFB8u;
    {
        const bool branch_taken_0x14efb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFB8u;
        // 0x14efbc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efb8) {
            ctx->pc = 0x14EFC8u;
            return;
        }
    }
    ctx->pc = 0x14EFC0u;
    // 0x14efc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14efc4: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x14efc4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x14efc8u;
}
