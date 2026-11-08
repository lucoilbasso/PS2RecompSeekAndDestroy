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

// Function: entry_00183cc0
// Address: 0x183cc0 - 0x183ce8
void entry_00183cc0_0x183cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183cc0_0x183cc0");
#endif

    ctx->pc = 0x183cc0u;

    // 0x183cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x183cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x183cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x183ccc: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x183cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x183cd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cd4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x183cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x183cd8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x183cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x183cdc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x183cdcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x183ce0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x183CE0u;
    {
        const bool branch_taken_0x183ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183ce0) {
            ctx->pc = 0x183CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183CE0u;
            // 0x183ce4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x183CE8u;
            return;
        }
    }
    ctx->pc = 0x183CE8u;
}
