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

// Function: entry_0010a5ec
// Address: 0x10a5ec - 0x10a5f0
void entry_0010a5ec_0x10a5ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a5ec_0x10a5ec");
#endif

    ctx->pc = 0x10a5ecu;

    // 0x10a5ec: 0xae26004c  sw          $a2, 0x4C($s1)
    ctx->pc = 0x10a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 6));
    ctx->pc = 0x10a5f0u;
}
