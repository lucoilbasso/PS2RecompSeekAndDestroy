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

// Function: entry_0017efe4
// Address: 0x17efe4 - 0x17efe8
void entry_0017efe4_0x17efe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017efe4_0x17efe4");
#endif

    ctx->pc = 0x17efe4u;

    // 0x17efe4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x17efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x17efe8u;
}
