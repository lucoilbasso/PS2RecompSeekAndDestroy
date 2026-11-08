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

// Function: entry_00185420
// Address: 0x185420 - 0x185450
void entry_00185420_0x185420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185420_0x185420");
#endif

    switch (ctx->pc) {
        case 0x185444u: goto label_185444;
        default: break;
    }

    ctx->pc = 0x185420u;

    // 0x185420: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x185420u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185424: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x185424u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185428: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x185428u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18542c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x18542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x185430: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x185430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185434: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x185434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185438: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x185438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18543c: 0xc061468  jal         func_1851A0
    ctx->pc = 0x18543Cu;
    SET_GPR_U32(ctx, 31, 0x185444u);
    ctx->pc = 0x185440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18543Cu;
    // 0x185440: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x18543Cu, 0x185444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185444u;
label_185444:
    // 0x185444: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x185444u;
    {
        const bool branch_taken_0x185444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185444u;
        // 0x185448: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185444) {
            ctx->pc = 0x1854ACu;
            return;
        }
    }
    ctx->pc = 0x18544Cu;
    // 0x18544c: 0x0  nop
    ctx->pc = 0x18544cu;
    // NOP
    ctx->pc = 0x185450u;
}
