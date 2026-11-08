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

// Function: entry_001395b0
// Address: 0x1395b0 - 0x139628
void entry_001395b0_0x1395b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001395b0_0x1395b0");
#endif

    switch (ctx->pc) {
        case 0x1395c8u: goto label_1395c8;
        case 0x1395fcu: goto label_1395fc;
        default: break;
    }

    ctx->pc = 0x1395b0u;

    // 0x1395b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1395b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1395b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1395b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1395b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1395b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1395bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1395bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1395c0: 0xc069236  jal         func_1A48D8
    ctx->pc = 0x1395C0u;
    SET_GPR_U32(ctx, 31, 0x1395C8u);
    ctx->pc = 0x1395C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395C0u;
    // 0x1395c4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48D8u, 0x1395C0u, 0x1395C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395C8u;
label_1395c8:
    // 0x1395c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1395c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1395cc: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1395ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1395d0: 0x8e120014  lw          $s2, 0x14($s0)
    ctx->pc = 0x1395d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1395d4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1395d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1395d8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1395d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1395dc: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1395dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1395e0: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1395e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1395e4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1395e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1395e8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1395e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1395ec: 0x4bc310aa  vmul.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1395ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1395f0: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1395f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1395f4: 0xc04e4f2  jal         func_1393C8
    ctx->pc = 0x1395F4u;
    SET_GPR_U32(ctx, 31, 0x1395FCu);
    ctx->pc = 0x1395F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1395F4u;
    // 0x1395f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1393C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393C8u, 0x1395F4u, 0x1395FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1395FCu;
label_1395fc:
    // 0x1395fc: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1395fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139600: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x139600u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139604: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x139604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139608: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x139608u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13960c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x139610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x139610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139614: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x139614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139618u;
    {
        const bool branch_taken_0x139618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139618u;
        // 0x13961c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139618) {
            ctx->pc = 0x13962Cu;
            return;
        }
    }
    ctx->pc = 0x139620u;
    // 0x139620: 0xc06924e  jal         func_1A4938
    ctx->pc = 0x139620u;
    SET_GPR_U32(ctx, 31, 0x139628u);
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x139620u, 0x139628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139628u;
}
