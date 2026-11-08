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

// Function: entry_00164a04
// Address: 0x164a04 - 0x164a08
void entry_00164a04_0x164a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164a04_0x164a04");
#endif

    ctx->pc = 0x164a04u;

    // 0x164a04: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x164a04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x164a08u;
}
