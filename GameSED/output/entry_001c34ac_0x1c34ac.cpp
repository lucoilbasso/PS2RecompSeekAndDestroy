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

// Function: entry_001c34ac
// Address: 0x1c34ac - 0x1c34b0
void entry_001c34ac_0x1c34ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c34ac_0x1c34ac");
#endif

    ctx->pc = 0x1c34acu;

    // 0x1c34ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c34acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1c34b0u;
}
