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

// Function: entry_0017c2e8
// Address: 0x17c2e8 - 0x17c2ec
void entry_0017c2e8_0x17c2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c2e8_0x17c2e8");
#endif

    ctx->pc = 0x17c2e8u;

    // 0x17c2e8: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x17c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    ctx->pc = 0x17c2ecu;
}
