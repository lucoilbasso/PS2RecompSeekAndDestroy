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

// Function: entry_0018d480
// Address: 0x18d480 - 0x18d490
void entry_0018d480_0x18d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d480_0x18d480");
#endif

    ctx->pc = 0x18d480u;

    // 0x18d480: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x18d480u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d484: 0xa6f60000  sh          $s6, 0x0($s7)
    ctx->pc = 0x18d484u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x18d488: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x18D488u;
    {
        const bool branch_taken_0x18d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D488u;
        // 0x18d48c: 0x26920002  addiu       $s2, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d488) {
            ctx->pc = 0x18D690u;
            return;
        }
    }
    ctx->pc = 0x18D490u;
}
