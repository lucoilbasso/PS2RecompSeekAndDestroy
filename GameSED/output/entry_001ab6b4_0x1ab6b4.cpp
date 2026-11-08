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

// Function: entry_001ab6b4
// Address: 0x1ab6b4 - 0x1ab6c0
void entry_001ab6b4_0x1ab6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab6b4_0x1ab6b4");
#endif

    ctx->pc = 0x1ab6b4u;

    // 0x1ab6b4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ab6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab6b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB6B8u;
    {
        const bool branch_taken_0x1ab6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6B8u;
        // 0x1ab6bc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6b8) {
            ctx->pc = 0x1AB6DCu;
            return;
        }
    }
    ctx->pc = 0x1AB6C0u;
}
