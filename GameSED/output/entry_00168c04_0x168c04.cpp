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

// Function: entry_00168c04
// Address: 0x168c04 - 0x168c10
void entry_00168c04_0x168c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168c04_0x168c04");
#endif

    ctx->pc = 0x168c04u;

    // 0x168c04: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x168C04u;
    {
        const bool branch_taken_0x168c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C04u;
        // 0x168c08: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168c04) {
            ctx->pc = 0x168E50u;
            return;
        }
    }
    ctx->pc = 0x168C0Cu;
    // 0x168c0c: 0x0  nop
    ctx->pc = 0x168c0cu;
    // NOP
    ctx->pc = 0x168c10u;
}
