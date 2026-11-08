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

// Function: entry_0013fd74
// Address: 0x13fd74 - 0x13fd7c
void entry_0013fd74_0x13fd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fd74_0x13fd74");
#endif

    ctx->pc = 0x13fd74u;

    // 0x13fd74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FD74u;
    {
        const bool branch_taken_0x13fd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fd74) {
            ctx->pc = 0x13FD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FD74u;
            // 0x13fd78: 0xac400140  sw          $zero, 0x140($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FD7Cu;
            return;
        }
    }
    ctx->pc = 0x13FD7Cu;
}
