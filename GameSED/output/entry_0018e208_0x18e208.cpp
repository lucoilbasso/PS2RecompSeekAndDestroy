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

// Function: entry_0018e208
// Address: 0x18e208 - 0x18e218
void entry_0018e208_0x18e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e208_0x18e208");
#endif

    ctx->pc = 0x18e208u;

    // 0x18e208: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x18E208u;
    {
        const bool branch_taken_0x18e208 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x18E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E208u;
        // 0x18e20c: 0x8d020218  lw          $v0, 0x218($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e208) {
            ctx->pc = 0x18E234u;
            return;
        }
    }
    ctx->pc = 0x18E210u;
    // 0x18e210: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18e210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e214: 0x0  nop
    ctx->pc = 0x18e214u;
    // NOP
    ctx->pc = 0x18e218u;
}
