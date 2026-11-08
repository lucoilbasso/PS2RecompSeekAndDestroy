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

// Function: entry_0017f5ec
// Address: 0x17f5ec - 0x17f5f0
void entry_0017f5ec_0x17f5ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f5ec_0x17f5ec");
#endif

    ctx->pc = 0x17f5ecu;

    // 0x17f5ec: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x17f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    ctx->pc = 0x17f5f0u;
}
