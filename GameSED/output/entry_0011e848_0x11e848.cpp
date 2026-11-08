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

// Function: entry_0011e848
// Address: 0x11e848 - 0x11e84c
void entry_0011e848_0x11e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e848_0x11e848");
#endif

    ctx->pc = 0x11e848u;

    // 0x11e848: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x11e848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x11e84cu;
}
