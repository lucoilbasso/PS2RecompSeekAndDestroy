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

// Function: entry_00148090
// Address: 0x148090 - 0x1480b0
void entry_00148090_0x148090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148090_0x148090");
#endif

    ctx->pc = 0x148090u;

    // 0x148090: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x148090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x148094: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x148094u;
    {
        const bool branch_taken_0x148094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148094) {
            ctx->pc = 0x148098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148094u;
            // 0x148098: 0xec3823  subu        $a3, $a3, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1480B0u;
            return;
        }
    }
    ctx->pc = 0x14809Cu;
    // 0x14809c: 0x81300  sll         $v0, $t0, 12
    ctx->pc = 0x14809cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x1480a0: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x1480a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1480a4: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x1480a4u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1480a8: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x1480a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x1480ac: 0xec3823  subu        $a3, $a3, $t4
    ctx->pc = 0x1480acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    ctx->pc = 0x1480b0u;
}
