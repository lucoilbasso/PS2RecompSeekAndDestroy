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

// Function: entry_00198a88
// Address: 0x198a88 - 0x198a90
void entry_00198a88_0x198a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a88_0x198a88");
#endif

    ctx->pc = 0x198a88u;

    // 0x198a88: 0x5620ffd9  bnel        $s1, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x198A88u;
    {
        const bool branch_taken_0x198a88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x198a88) {
            ctx->pc = 0x198A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198A88u;
            // 0x198a8c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1989F0u;
            return;
        }
    }
    ctx->pc = 0x198A90u;
}
