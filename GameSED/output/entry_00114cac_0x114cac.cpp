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

// Function: entry_00114cac
// Address: 0x114cac - 0x114cb0
void entry_00114cac_0x114cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114cac_0x114cac");
#endif

    ctx->pc = 0x114cacu;

    // 0x114cac: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x114cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    ctx->pc = 0x114cb0u;
}
