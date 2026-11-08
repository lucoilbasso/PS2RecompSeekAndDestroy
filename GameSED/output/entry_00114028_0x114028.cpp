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

// Function: entry_00114028
// Address: 0x114028 - 0x114030
void entry_00114028_0x114028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114028_0x114028");
#endif

    ctx->pc = 0x114028u;

    // 0x114028: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114028u;
    {
        const bool branch_taken_0x114028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114028u;
        // 0x11402c: 0x90660011  lbu         $a2, 0x11($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114028) {
            ctx->pc = 0x11403Cu;
            return;
        }
    }
    ctx->pc = 0x114030u;
}
