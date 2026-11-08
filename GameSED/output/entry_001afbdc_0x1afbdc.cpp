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

// Function: entry_001afbdc
// Address: 0x1afbdc - 0x1afbe8
void entry_001afbdc_0x1afbdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afbdc_0x1afbdc");
#endif

    ctx->pc = 0x1afbdcu;

    // 0x1afbdc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1afbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1afbe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFBE0u;
    {
        const bool branch_taken_0x1afbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBE0u;
        // 0x1afbe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbe0) {
            ctx->pc = 0x1AFBF4u;
            return;
        }
    }
    ctx->pc = 0x1AFBE8u;
}
