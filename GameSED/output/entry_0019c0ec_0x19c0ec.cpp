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

// Function: entry_0019c0ec
// Address: 0x19c0ec - 0x19c0f0
void entry_0019c0ec_0x19c0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c0ec_0x19c0ec");
#endif

    ctx->pc = 0x19c0ecu;

    // 0x19c0ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x19c0f0u;
}
