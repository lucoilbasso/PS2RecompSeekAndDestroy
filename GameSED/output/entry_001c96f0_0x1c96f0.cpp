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

// Function: entry_001c96f0
// Address: 0x1c96f0 - 0x1c9734
void entry_001c96f0_0x1c96f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c96f0_0x1c96f0");
#endif

    ctx->pc = 0x1c96f0u;

    // 0x1c96f0: 0x1012  mflo        $v0
    ctx->pc = 0x1c96f0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1c96f4: 0x1810  mfhi        $v1
    ctx->pc = 0x1c96f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c96f8: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1c96f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1c96fc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c9700: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1c9700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c9704: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c9704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9708: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9708u;
    {
        const bool branch_taken_0x1c9708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9708) {
            ctx->pc = 0x1C970Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9708u;
            // 0x1c970c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9734u;
            return;
        }
    }
    ctx->pc = 0x1C9710u;
    // 0x1c9710: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c9710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c9714: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x1c9714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c9718: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9718u;
    {
        const bool branch_taken_0x1c9718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9718) {
            ctx->pc = 0x1C971Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9718u;
            // 0x1c971c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9734u;
            return;
        }
    }
    ctx->pc = 0x1C9720u;
    // 0x1c9720: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1c9720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c9724: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1c9724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c9728: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c9728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c972c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1c972cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1c9730: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1c9730u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    ctx->pc = 0x1c9734u;
}
