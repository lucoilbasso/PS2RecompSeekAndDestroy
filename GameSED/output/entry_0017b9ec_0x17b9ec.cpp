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

// Function: entry_0017b9ec
// Address: 0x17b9ec - 0x17b9f0
void entry_0017b9ec_0x17b9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b9ec_0x17b9ec");
#endif

    ctx->pc = 0x17b9ecu;

    // 0x17b9ec: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x17b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    ctx->pc = 0x17b9f0u;
}
