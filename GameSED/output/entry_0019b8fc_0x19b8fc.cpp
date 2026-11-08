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

// Function: entry_0019b8fc
// Address: 0x19b8fc - 0x19b910
void entry_0019b8fc_0x19b8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b8fc_0x19b8fc");
#endif

    ctx->pc = 0x19b8fcu;

    // 0x19b8fc: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x19b8fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
    // 0x19b900: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19b900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b904: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B904u;
    {
        const bool branch_taken_0x19b904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B904u;
        // 0x19b908: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b904) {
            ctx->pc = 0x19B92Cu;
            return;
        }
    }
    ctx->pc = 0x19B90Cu;
    // 0x19b90c: 0x0  nop
    ctx->pc = 0x19b90cu;
    // NOP
    ctx->pc = 0x19b910u;
}
