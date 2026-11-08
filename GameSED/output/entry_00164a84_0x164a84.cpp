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

// Function: entry_00164a84
// Address: 0x164a84 - 0x164a8c
void entry_00164a84_0x164a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a84_0x164a84");
#endif

    ctx->pc = 0x164a84u;

    // 0x164a84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164A84u;
    {
        const bool branch_taken_0x164a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164a84) {
            ctx->pc = 0x164A98u;
            return;
        }
    }
    ctx->pc = 0x164A8Cu;
}
