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

// Function: entry_0014f368
// Address: 0x14f368 - 0x14f378
void entry_0014f368_0x14f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f368_0x14f368");
#endif

    ctx->pc = 0x14f368u;

    // 0x14f368: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14f368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14f36c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x14f370: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F370u;
    {
        const bool branch_taken_0x14f370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F370u;
        // 0x14f374: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f370) {
            ctx->pc = 0x14F3A8u;
            return;
        }
    }
    ctx->pc = 0x14F378u;
}
