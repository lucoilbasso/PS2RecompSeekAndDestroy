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

// Function: entry_001c9684
// Address: 0x1c9684 - 0x1c9694
void entry_001c9684_0x1c9684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9684_0x1c9684");
#endif

    ctx->pc = 0x1c9684u;

    // 0x1c9684: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1c9684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1c9688: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x1c9688u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1c968c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C968Cu;
    {
        const bool branch_taken_0x1c968c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c968c) {
            ctx->pc = 0x1C9690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C968Cu;
            // 0x1c9690: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9694u;
            return;
        }
    }
    ctx->pc = 0x1C9694u;
}
