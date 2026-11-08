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

// Function: entry_001c4a10
// Address: 0x1c4a10 - 0x1c4a2c
void entry_001c4a10_0x1c4a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4a10_0x1c4a10");
#endif

    ctx->pc = 0x1c4a10u;

    // 0x1c4a10: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1c4a14: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1c4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c4a18: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1c4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1c4a1c: 0x8c52ddd4  lw          $s2, -0x222C($v0)
    ctx->pc = 0x1c4a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x24DDD4u));
    // 0x1c4a20: 0xac43ddd4  sw          $v1, -0x222C($v0)
    ctx->pc = 0x1c4a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x24DDD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDD4u, _value); } while (0);
    // 0x1c4a24: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C4A24u;
    {
        const bool branch_taken_0x1c4a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A24u;
        // 0x1c4a28: 0xac85dde0  sw          $a1, -0x2220($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294958560), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a24) {
            ctx->pc = 0x1C4A58u;
            return;
        }
    }
    ctx->pc = 0x1C4A2Cu;
}
