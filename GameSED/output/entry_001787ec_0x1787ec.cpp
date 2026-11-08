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

// Function: entry_001787ec
// Address: 0x1787ec - 0x1787f0
void entry_001787ec_0x1787ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001787ec_0x1787ec");
#endif

    ctx->pc = 0x1787ecu;

    // 0x1787ec: 0x24a41024  addiu       $a0, $a1, 0x1024
    ctx->pc = 0x1787ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4132));
    ctx->pc = 0x1787f0u;
}
