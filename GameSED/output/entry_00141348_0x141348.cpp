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

// Function: entry_00141348
// Address: 0x141348 - 0x141398
void entry_00141348_0x141348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141348_0x141348");
#endif

    switch (ctx->pc) {
        case 0x141390u: goto label_141390;
        default: break;
    }

    ctx->pc = 0x141348u;

    // 0x141348: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x141348u;
    {
        const bool branch_taken_0x141348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141348u;
        // 0x14134c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141348) {
            ctx->pc = 0x141410u;
            return;
        }
    }
    ctx->pc = 0x141350u;
    // 0x141350: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x141350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x141354: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x141354u;
    {
        const bool branch_taken_0x141354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141354u;
        // 0x141358: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141354) {
            ctx->pc = 0x1413B4u;
            return;
        }
    }
    ctx->pc = 0x14135Cu;
    // 0x14135c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x14135cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141360: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x141360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x141364: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x141364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x141368: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x141368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14136c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x14136cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141370: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x141370u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x141374: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x141374u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x141378: 0x52a00007  beql        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x141378u;
    {
        const bool branch_taken_0x141378 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x141378) {
            ctx->pc = 0x14137Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141378u;
            // 0x14137c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141398u;
            return;
        }
    }
    ctx->pc = 0x141380u;
    // 0x141380: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x141380u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x141384: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x141384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141388: 0xc05045e  jal         func_141178
    ctx->pc = 0x141388u;
    SET_GPR_U32(ctx, 31, 0x141390u);
    ctx->pc = 0x14138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141388u;
    // 0x14138c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141178u, 0x141388u, 0x141390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141390u;
label_141390:
    // 0x141390: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x141390u;
    {
        const bool branch_taken_0x141390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141390u;
        // 0x141394: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141390) {
            ctx->pc = 0x1413A8u;
            return;
        }
    }
    ctx->pc = 0x141398u;
}
