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

// Function: entry_00163758
// Address: 0x163758 - 0x163788
void entry_00163758_0x163758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163758_0x163758");
#endif

    ctx->pc = 0x163758u;

    // 0x163758: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x163758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x16375c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16375cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163760: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x163764: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x163764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x163768: 0x8c4401f8  lw          $a0, 0x1F8($v0)
    ctx->pc = 0x163768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x16376c: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x16376cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x163770: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x163770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163774: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x163774u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x163778: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x163778u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16377c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x16377cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x163780: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x163780u;
    {
        const bool branch_taken_0x163780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163780u;
        // 0x163784: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163780) {
            ctx->pc = 0x1638CCu;
            return;
        }
    }
    ctx->pc = 0x163788u;
}
