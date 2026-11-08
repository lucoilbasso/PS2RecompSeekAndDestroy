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

// Function: entry_0012f5b4
// Address: 0x12f5b4 - 0x12f5bc
void entry_0012f5b4_0x12f5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f5b4_0x12f5b4");
#endif

    ctx->pc = 0x12f5b4u;

    // 0x12f5b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F5B4u;
    {
        const bool branch_taken_0x12f5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f5b4) {
            ctx->pc = 0x12F5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F5B4u;
            // 0x12f5b8: 0xafd60000  sw          $s6, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F5BCu;
            return;
        }
    }
    ctx->pc = 0x12F5BCu;
}
