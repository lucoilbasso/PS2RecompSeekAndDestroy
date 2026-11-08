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

// Function: entry_00123b58
// Address: 0x123b58 - 0x123b80
void entry_00123b58_0x123b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123b58_0x123b58");
#endif

    ctx->pc = 0x123b58u;

    // 0x123b58: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x123B58u;
    {
        const bool branch_taken_0x123b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B58u;
        // 0x123b5c: 0x26220160  addiu       $v0, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b58) {
            ctx->pc = 0x123B80u;
            return;
        }
    }
    ctx->pc = 0x123B60u;
    // 0x123b60: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x123b60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x123b64: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x123b64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x123b68: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x123b68u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x123b6c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x123b6cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x123b70: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x123b70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123b74: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x123b74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123b78: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x123b78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123b7c: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x123b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    ctx->pc = 0x123b80u;
}
