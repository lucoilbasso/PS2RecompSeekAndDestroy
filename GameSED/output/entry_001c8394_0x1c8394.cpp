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

// Function: entry_001c8394
// Address: 0x1c8394 - 0x1c83ac
void entry_001c8394_0x1c8394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8394_0x1c8394");
#endif

    ctx->pc = 0x1c8394u;

    // 0x1c8394: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1c8394u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1c8398: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x1c8398u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1c839c: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1c839cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1c83a0: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1c83a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1c83a4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C83A4u;
    {
        const bool branch_taken_0x1c83a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c83a4) {
            ctx->pc = 0x1C83A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C83A4u;
            // 0x1c83a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C83ACu;
            return;
        }
    }
    ctx->pc = 0x1C83ACu;
}
