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

// Function: entry_001cda30
// Address: 0x1cda30 - 0x1cda40
void entry_001cda30_0x1cda30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cda30_0x1cda30");
#endif

    ctx->pc = 0x1cda30u;

    // 0x1cda30: 0x8fa40640  lw          $a0, 0x640($sp)
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x1cda34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cda34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDA38u;
    {
        const bool branch_taken_0x1cda38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDA38u;
        // 0x1cda3c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda38) {
            ctx->pc = 0x1CDA48u;
            return;
        }
    }
    ctx->pc = 0x1CDA40u;
}
