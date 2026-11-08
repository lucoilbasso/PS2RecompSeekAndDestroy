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

// Function: entry_00166430
// Address: 0x166430 - 0x166440
void entry_00166430_0x166430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166430_0x166430");
#endif

    ctx->pc = 0x166430u;

    // 0x166430: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x166430u;
    {
        const bool branch_taken_0x166430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166430) {
            ctx->pc = 0x166434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166430u;
            // 0x166434: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166460u;
            return;
        }
    }
    ctx->pc = 0x166438u;
    // 0x166438: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x166438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x16643c: 0x0  nop
    ctx->pc = 0x16643cu;
    // NOP
    ctx->pc = 0x166440u;
}
