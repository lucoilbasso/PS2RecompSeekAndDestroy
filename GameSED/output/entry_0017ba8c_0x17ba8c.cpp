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

// Function: entry_0017ba8c
// Address: 0x17ba8c - 0x17ba90
void entry_0017ba8c_0x17ba8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba8c_0x17ba8c");
#endif

    ctx->pc = 0x17ba8cu;

    // 0x17ba8c: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x17ba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x17ba90u;
}
