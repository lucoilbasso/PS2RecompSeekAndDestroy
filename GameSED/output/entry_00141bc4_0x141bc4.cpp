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

// Function: entry_00141bc4
// Address: 0x141bc4 - 0x141bcc
void entry_00141bc4_0x141bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141bc4_0x141bc4");
#endif

    ctx->pc = 0x141bc4u;

    // 0x141bc4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141BC4u;
    {
        const bool branch_taken_0x141bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141bc4) {
            ctx->pc = 0x141BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141BC4u;
            // 0x141bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141BE0u;
            return;
        }
    }
    ctx->pc = 0x141BCCu;
}
