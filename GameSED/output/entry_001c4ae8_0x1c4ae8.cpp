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

// Function: entry_001c4ae8
// Address: 0x1c4ae8 - 0x1c4af8
void entry_001c4ae8_0x1c4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4ae8_0x1c4ae8");
#endif

    ctx->pc = 0x1c4ae8u;

    // 0x1c4ae8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4AE8u;
    {
        const bool branch_taken_0x1c4ae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AE8u;
        // 0x1c4aec: 0x340281d0  ori         $v0, $zero, 0x81D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33232);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ae8) {
            ctx->pc = 0x1C4AF8u;
            return;
        }
    }
    ctx->pc = 0x1C4AF0u;
    // 0x1c4af0: 0x1622001e  bne         $s1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C4AF0u;
    {
        const bool branch_taken_0x1c4af0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4af0) {
            ctx->pc = 0x1C4B6Cu;
            return;
        }
    }
    ctx->pc = 0x1C4AF8u;
}
