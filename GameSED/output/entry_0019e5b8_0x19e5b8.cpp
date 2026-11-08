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

// Function: entry_0019e5b8
// Address: 0x19e5b8 - 0x19e5d8
void entry_0019e5b8_0x19e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e5b8_0x19e5b8");
#endif

    ctx->pc = 0x19e5b8u;

    // 0x19e5b8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19e5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19e5bc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19E5BCu;
    {
        const bool branch_taken_0x19e5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5bc) {
            ctx->pc = 0x19E5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E5BCu;
            // 0x19e5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E5F0u;
            return;
        }
    }
    ctx->pc = 0x19E5C4u;
    // 0x19e5c4: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19e5c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19e5c8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e5cc: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x19e5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e5d0: 0x70001830  pmfhl.lw    $v1
    ctx->pc = 0x19e5d0u;
    SET_GPR_VEC(ctx, 3, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x19e5d4: 0x31bfb  dsra        $v1, $v1, 15
    ctx->pc = 0x19e5d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 15);
    ctx->pc = 0x19e5d8u;
}
