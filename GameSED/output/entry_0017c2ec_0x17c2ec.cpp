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

// Function: entry_0017c2ec
// Address: 0x17c2ec - 0x17c2f0
void entry_0017c2ec_0x17c2ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c2ec_0x17c2ec");
#endif

    ctx->pc = 0x17c2ecu;

    // 0x17c2ec: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x17c2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x17c2f0u;
}
