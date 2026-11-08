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

// Function: entry_001aa810
// Address: 0x1aa810 - 0x1aa854
void entry_001aa810_0x1aa810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa810_0x1aa810");
#endif

    ctx->pc = 0x1aa810u;

    // 0x1aa810: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1aa810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1aa814: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x1aa814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x1aa818: 0x1012  mflo        $v0
    ctx->pc = 0x1aa818u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1aa81c: 0x2a23018  mult        $a2, $s5, $v0
    ctx->pc = 0x1aa81cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1aa820: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x1aa820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1aa824: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aa824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aa828: 0xc5282d  daddu       $a1, $a2, $a1
    ctx->pc = 0x1aa828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1aa82c: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x1aa82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x1aa830: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1aa830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1aa834: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1aa834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1aa838: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1aa838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1aa83c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1aa83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1aa840: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1aa840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1aa844: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1aa844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1aa848: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aa848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aa84c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1AA84Cu;
    {
        const bool branch_taken_0x1aa84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA84Cu;
        // 0x1aa850: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa84c) {
            ctx->pc = 0x1AA8D8u;
            return;
        }
    }
    ctx->pc = 0x1AA854u;
}
