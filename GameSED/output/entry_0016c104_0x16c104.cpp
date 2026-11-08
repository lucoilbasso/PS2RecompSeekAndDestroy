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

// Function: entry_0016c104
// Address: 0x16c104 - 0x16c108
void entry_0016c104_0x16c104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c104_0x16c104");
#endif

    ctx->pc = 0x16c104u;

    // 0x16c104: 0x24c6fffa  addiu       $a2, $a2, -0x6
    ctx->pc = 0x16c104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
    ctx->pc = 0x16c108u;
}
