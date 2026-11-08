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

// Function: entry_001a20ec
// Address: 0x1a20ec - 0x1a20f0
void entry_001a20ec_0x1a20ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a20ec_0x1a20ec");
#endif

    ctx->pc = 0x1a20ecu;

    // 0x1a20ec: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1a20ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->pc = 0x1a20f0u;
}
