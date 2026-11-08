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

// Function: entry_00141ff4
// Address: 0x141ff4 - 0x141ffc
void entry_00141ff4_0x141ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ff4_0x141ff4");
#endif

    ctx->pc = 0x141ff4u;

    // 0x141ff4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x141FF4u;
    {
        const bool branch_taken_0x141ff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x141ff4) {
            ctx->pc = 0x141FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141FF4u;
            // 0x141ff8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142010u;
            return;
        }
    }
    ctx->pc = 0x141FFCu;
}
