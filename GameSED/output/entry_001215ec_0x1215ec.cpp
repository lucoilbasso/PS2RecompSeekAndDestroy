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

// Function: entry_001215ec
// Address: 0x1215ec - 0x1215f0
void entry_001215ec_0x1215ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001215ec_0x1215ec");
#endif

    ctx->pc = 0x1215ecu;

    // 0x1215ec: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1215ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->pc = 0x1215f0u;
}
