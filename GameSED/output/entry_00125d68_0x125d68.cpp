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

// Function: entry_00125d68
// Address: 0x125d68 - 0x125d6c
void entry_00125d68_0x125d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125d68_0x125d68");
#endif

    ctx->pc = 0x125d68u;

    // 0x125d68: 0xa3a30083  sb          $v1, 0x83($sp)
    ctx->pc = 0x125d68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 131), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x125d6cu;
}
