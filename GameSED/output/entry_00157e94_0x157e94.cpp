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

// Function: entry_00157e94
// Address: 0x157e94 - 0x157e9c
void entry_00157e94_0x157e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157e94_0x157e94");
#endif

    ctx->pc = 0x157e94u;

    // 0x157e94: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x157E94u;
    {
        const bool branch_taken_0x157e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e94) {
            ctx->pc = 0x157E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157E94u;
            // 0x157e98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157EC0u;
            return;
        }
    }
    ctx->pc = 0x157E9Cu;
}
