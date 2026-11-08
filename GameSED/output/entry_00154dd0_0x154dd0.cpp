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

// Function: entry_00154dd0
// Address: 0x154dd0 - 0x154de0
void entry_00154dd0_0x154dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154dd0_0x154dd0");
#endif

    ctx->pc = 0x154dd0u;

    // 0x154dd0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x154dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x154dd4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x154dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x154dd8: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x154DD8u;
    {
        const bool branch_taken_0x154dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DD8u;
        // 0x154ddc: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154dd8) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154DE0u;
}
