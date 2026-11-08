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

// Function: entry_001884e0
// Address: 0x1884e0 - 0x1884f0
void entry_001884e0_0x1884e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001884e0_0x1884e0");
#endif

    ctx->pc = 0x1884e0u;

    // 0x1884e0: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1884E0u;
    {
        const bool branch_taken_0x1884e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884e0) {
            ctx->pc = 0x1884E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1884E0u;
            // 0x1884e4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18852Cu;
            return;
        }
    }
    ctx->pc = 0x1884E8u;
    // 0x1884e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1884e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1884ec: 0x0  nop
    ctx->pc = 0x1884ecu;
    // NOP
    ctx->pc = 0x1884f0u;
}
