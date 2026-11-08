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

// Function: entry_0019c808
// Address: 0x19c808 - 0x19c818
void entry_0019c808_0x19c808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c808_0x19c808");
#endif

    ctx->pc = 0x19c808u;

    // 0x19c808: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19c808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c80c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C80Cu;
    {
        const bool branch_taken_0x19c80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C80Cu;
        // 0x19c810: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c80c) {
            ctx->pc = 0x19C834u;
            return;
        }
    }
    ctx->pc = 0x19C814u;
    // 0x19c814: 0x0  nop
    ctx->pc = 0x19c814u;
    // NOP
    ctx->pc = 0x19c818u;
}
