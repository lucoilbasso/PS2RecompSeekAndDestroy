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

// Function: entry_0018d648
// Address: 0x18d648 - 0x18d64c
void entry_0018d648_0x18d648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d648_0x18d648");
#endif

    ctx->pc = 0x18d648u;

    // 0x18d648: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x18d648u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18d64cu;
}
