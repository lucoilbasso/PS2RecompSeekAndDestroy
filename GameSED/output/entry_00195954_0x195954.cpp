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

// Function: entry_00195954
// Address: 0x195954 - 0x195a60
void entry_00195954_0x195954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195954_0x195954");
#endif

    switch (ctx->pc) {
        case 0x195a5cu: goto label_195a5c;
        default: break;
    }

    ctx->pc = 0x195954u;

    // 0x195954: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x195954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195958: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x195958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x19595c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x19595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195960: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x195964: 0x2484ebb0  addiu       $a0, $a0, -0x1450
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962096));
    // 0x195968: 0x8ef40164  lw          $s4, 0x164($s7)
    ctx->pc = 0x195968u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 356)));
    // 0x19596c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19596cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195970: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x195970u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x195974: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x195974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195978: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x195978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19597c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x19597cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x195980: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x195980u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x195984: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x195984u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x195988: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x195988u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x19598c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19598cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x195990: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x195990u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x195994: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x195994u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x195998: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x195998u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19599c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19599cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1959a0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1959a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1959a4: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x1959a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x1959a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1959a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x1959ac: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1959acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x1959b0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1959b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x1959b4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1959b4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x1959b8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1959b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1959bc: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1959bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1959c0: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1959c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1959c4: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1959c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1959c8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1959c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1959cc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x1959ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1959d0: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x1959d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x1959d4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1959d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EC70u));
    // 0x1959d8: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1959d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC80u));
    // 0x1959dc: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1959dcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC90u));
    // 0x1959e0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1959e0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21ECA0u));
    // 0x1959e4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1959e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1959e8: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1959e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1959ec: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1959ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1959f0: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1959f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1959f4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1959f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1959f8: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1959f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1959fc: 0x2442ecb0  addiu       $v0, $v0, -0x1350
    ctx->pc = 0x1959fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x195a00: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x195a00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21ECB0u));
    // 0x195a04: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x195a04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21ECC0u));
    // 0x195a08: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x195a08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21ECD0u));
    // 0x195a0c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x195a0cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21ECE0u));
    // 0x195a10: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x195a10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x195a14: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x195a14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x195a18: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x195a18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x195a1c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x195a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x195a20: 0x8ee401c4  lw          $a0, 0x1C4($s7)
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 452)));
    // 0x195a24: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x195A24u;
    {
        const bool branch_taken_0x195a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A24u;
        // 0x195a28: 0xae00022c  sw          $zero, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a24) {
            ctx->pc = 0x195A60u;
            return;
        }
    }
    ctx->pc = 0x195A2Cu;
    // 0x195a2c: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x195a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x195a30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195a34: 0x26020340  addiu       $v0, $s0, 0x340
    ctx->pc = 0x195a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x195a38: 0x26c300d0  addiu       $v1, $s6, 0xD0
    ctx->pc = 0x195a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
    // 0x195a3c: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x195a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x195a40: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x195a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x195a44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x195a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x195a4c: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x195a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x195a50: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x195a54: 0xc0622b6  jal         func_188AD8
    ctx->pc = 0x195A54u;
    SET_GPR_U32(ctx, 31, 0x195A5Cu);
    ctx->pc = 0x195A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A54u;
    // 0x195a58: 0x26070190  addiu       $a3, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188AD8u, 0x195A54u, 0x195A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A5Cu;
label_195a5c:
    // 0x195a5c: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x195a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    ctx->pc = 0x195a60u;
}
