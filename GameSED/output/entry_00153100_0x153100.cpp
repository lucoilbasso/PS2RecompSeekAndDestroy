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

// Function: entry_00153100
// Address: 0x153100 - 0x153148
void entry_00153100_0x153100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153100_0x153100");
#endif

    switch (ctx->pc) {
        case 0x153128u: goto label_153128;
        default: break;
    }

    ctx->pc = 0x153100u;

    // 0x153100: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x153100u;
    {
        const bool branch_taken_0x153100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153100u;
        // 0x153104: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153100) {
            ctx->pc = 0x153148u;
            return;
        }
    }
    ctx->pc = 0x153108u;
    // 0x153108: 0x151240  sll         $v0, $s5, 9
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 9));
    // 0x15310c: 0xae340374  sw          $s4, 0x374($s1)
    ctx->pc = 0x15310cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 20));
    // 0x153110: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x153110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x153114: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x153114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153118: 0xae220370  sw          $v0, 0x370($s1)
    ctx->pc = 0x153118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
    // 0x15311c: 0x2624037c  addiu       $a0, $s1, 0x37C
    ctx->pc = 0x15311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 892));
    // 0x153120: 0xc067b88  jal         func_19EE20
    ctx->pc = 0x153120u;
    SET_GPR_U32(ctx, 31, 0x153128u);
    ctx->pc = 0x153124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153120u;
    // 0x153124: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE20u, 0x153120u, 0x153128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153128u;
label_153128:
    // 0x153128: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x153128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x15312c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15312cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x153130: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x153130u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x153134: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x153134u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x153138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x153138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15313c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15313Cu;
    {
        const bool branch_taken_0x15313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15313Cu;
        // 0x153140: 0xc620034c  lwc1        $f0, 0x34C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15313c) {
            ctx->pc = 0x1531A8u;
            return;
        }
    }
    ctx->pc = 0x153144u;
    // 0x153144: 0x0  nop
    ctx->pc = 0x153144u;
    // NOP
    ctx->pc = 0x153148u;
}
