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

// Function: entry_00154fe0
// Address: 0x154fe0 - 0x154ff0
void entry_00154fe0_0x154fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154fe0_0x154fe0");
#endif

    ctx->pc = 0x154fe0u;

    // 0x154fe0: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x154fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x154fe4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x154fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x154fe8: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x154FE8u;
    {
        const bool branch_taken_0x154fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FE8u;
        // 0x154fec: 0xae0203b0  sw          $v0, 0x3B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fe8) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154FF0u;
}
