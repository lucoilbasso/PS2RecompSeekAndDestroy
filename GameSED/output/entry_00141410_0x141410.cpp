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

// Function: entry_00141410
// Address: 0x141410 - 0x141458
void entry_00141410_0x141410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141410_0x141410");
#endif

    switch (ctx->pc) {
        case 0x141418u: goto label_141418;
        case 0x141424u: goto label_141424;
        case 0x14144cu: goto label_14144c;
        default: break;
    }

    ctx->pc = 0x141410u;

    // 0x141410: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x141410u;
    SET_GPR_U32(ctx, 31, 0x141418u);
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x141410u, 0x141418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141418u;
label_141418:
    // 0x141418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x141418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14141c: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x14141Cu;
    SET_GPR_U32(ctx, 31, 0x141424u);
    ctx->pc = 0x141420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14141Cu;
    // 0x141420: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x14141Cu, 0x141424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141424u;
label_141424:
    // 0x141424: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x141424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x141428: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x141428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14142c: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x14142cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x141430: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x141430u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x141434: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x141434u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x141438: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x141438u;
    {
        const bool branch_taken_0x141438 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x14143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141438u;
        // 0x14143c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141438) {
            ctx->pc = 0x141458u;
            return;
        }
    }
    ctx->pc = 0x141440u;
    // 0x141440: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x141440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x141444: 0xc05045e  jal         func_141178
    ctx->pc = 0x141444u;
    SET_GPR_U32(ctx, 31, 0x14144Cu);
    ctx->pc = 0x141448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141444u;
    // 0x141448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141178u, 0x141444u, 0x14144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14144Cu;
label_14144c:
    // 0x14144c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14144Cu;
    {
        const bool branch_taken_0x14144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14144Cu;
        // 0x141450: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14144c) {
            ctx->pc = 0x14146Cu;
            return;
        }
    }
    ctx->pc = 0x141454u;
    // 0x141454: 0x0  nop
    ctx->pc = 0x141454u;
    // NOP
    ctx->pc = 0x141458u;
}
