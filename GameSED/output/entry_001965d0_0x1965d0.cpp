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

// Function: entry_001965d0
// Address: 0x1965d0 - 0x1965e0
void entry_001965d0_0x1965d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001965d0_0x1965d0");
#endif

    ctx->pc = 0x1965d0u;

    // 0x1965d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1965d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1965d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1965D4u;
    {
        const bool branch_taken_0x1965d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1965D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1965D4u;
        // 0x1965d8: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1965d4) {
            ctx->pc = 0x196608u;
            return;
        }
    }
    ctx->pc = 0x1965DCu;
    // 0x1965dc: 0x0  nop
    ctx->pc = 0x1965dcu;
    // NOP
    ctx->pc = 0x1965e0u;
}
