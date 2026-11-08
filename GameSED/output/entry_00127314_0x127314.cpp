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

// Function: entry_00127314
// Address: 0x127314 - 0x1273a8
void entry_00127314_0x127314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127314_0x127314");
#endif

    ctx->pc = 0x127314u;

    // 0x127314: 0x128001a6  beqz        $s4, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x127314u;
    {
        const bool branch_taken_0x127314 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x127318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127314u;
        // 0x127318: 0xffbf0118  sd          $ra, 0x118($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127314) {
            ctx->pc = 0x1279B0u;
            return;
        }
    }
    ctx->pc = 0x12731Cu;
    // 0x12731c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x12731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x127320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127324: 0x546201a3  bnel        $v1, $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x127324u;
    {
        const bool branch_taken_0x127324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x127324) {
            ctx->pc = 0x127328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127324u;
            // 0x127328: 0xdfb000f0  ld          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1279B4u;
            return;
        }
    }
    ctx->pc = 0x12732Cu;
    // 0x12732c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x12732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x127330: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x127330u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x127334: 0xa3a20083  sb          $v0, 0x83($sp)
    ctx->pc = 0x127334u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x127338: 0xa3a20082  sb          $v0, 0x82($sp)
    ctx->pc = 0x127338u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 130), (uint8_t)GPR_U32(ctx, 2));
    // 0x12733c: 0xa3a20081  sb          $v0, 0x81($sp)
    ctx->pc = 0x12733cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 2));
    // 0x127340: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x127340u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x127344: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x127344u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x127348: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x127348u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12734c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12734cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x127350: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x127350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x127354: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x127354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x127358: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x127358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12735c: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x12735cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x127360: 0x8f8389d8  lw          $v1, -0x7628($gp)
    ctx->pc = 0x127360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x127364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127368: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x127368u;
    {
        const bool branch_taken_0x127368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127368u;
        // 0x12736c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127368) {
            ctx->pc = 0x127498u;
            return;
        }
    }
    ctx->pc = 0x127370u;
    // 0x127370: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x127370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x127374: 0xaf8089d8  sw          $zero, -0x7628($gp)
    ctx->pc = 0x127374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 0));
    // 0x127378: 0x2451d650  addiu       $s1, $v0, -0x29B0
    ctx->pc = 0x127378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x12737c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12737cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127380: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x127380u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x127384: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x127384u;
    {
        const bool branch_taken_0x127384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127384u;
        // 0x127388: 0xaf9189dc  sw          $s1, -0x7624($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127384) {
            ctx->pc = 0x1273A8u;
            return;
        }
    }
    ctx->pc = 0x12738Cu;
    // 0x12738c: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x12738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x127390: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x127390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x127394: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x127394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x127398: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x127398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12739c: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x12739cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1273a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1273A0u;
    {
        const bool branch_taken_0x1273a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273A0u;
        // 0x1273a4: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273a0) {
            ctx->pc = 0x1273DCu;
            return;
        }
    }
    ctx->pc = 0x1273A8u;
}
