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

// Function: entry_0014be6c
// Address: 0x14be6c - 0x14be70
void entry_0014be6c_0x14be6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014be6c_0x14be6c");
#endif

    ctx->pc = 0x14be6cu;

    // 0x14be6c: 0xa4e20238  sh          $v0, 0x238($a3)
    ctx->pc = 0x14be6cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 568), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14be70u;
}
