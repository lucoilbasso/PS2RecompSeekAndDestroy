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

// Function: entry_0017f5e8
// Address: 0x17f5e8 - 0x17f5ec
void entry_0017f5e8_0x17f5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f5e8_0x17f5e8");
#endif

    ctx->pc = 0x17f5e8u;

    // 0x17f5e8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x17f5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x17f5ecu;
}
