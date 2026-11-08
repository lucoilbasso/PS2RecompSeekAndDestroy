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

// Function: entry_0012f938
// Address: 0x12f938 - 0x12f940
void entry_0012f938_0x12f938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f938_0x12f938");
#endif

    ctx->pc = 0x12f938u;

    // 0x12f938: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F938u;
    {
        const bool branch_taken_0x12f938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f938) {
            ctx->pc = 0x12F93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F938u;
            // 0x12f93c: 0xaed40000  sw          $s4, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F940u;
            return;
        }
    }
    ctx->pc = 0x12F940u;
}
