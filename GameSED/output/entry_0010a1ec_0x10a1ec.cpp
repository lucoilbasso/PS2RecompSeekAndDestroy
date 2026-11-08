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

// Function: entry_0010a1ec
// Address: 0x10a1ec - 0x10a1f0
void entry_0010a1ec_0x10a1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a1ec_0x10a1ec");
#endif

    ctx->pc = 0x10a1ecu;

    // 0x10a1ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10a1f0u;
}
