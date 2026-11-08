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

// Function: entry_00185d90
// Address: 0x185d90 - 0x185da0
void entry_00185d90_0x185d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185d90_0x185d90");
#endif

    ctx->pc = 0x185d90u;

    // 0x185d90: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x185d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x185d94: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x185d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
    // 0x185d98: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x185D98u;
    {
        const bool branch_taken_0x185d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D98u;
        // 0x185d9c: 0x244762f0  addiu       $a3, $v0, 0x62F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d98) {
            ctx->pc = 0x185F2Cu;
            return;
        }
    }
    ctx->pc = 0x185DA0u;
}
