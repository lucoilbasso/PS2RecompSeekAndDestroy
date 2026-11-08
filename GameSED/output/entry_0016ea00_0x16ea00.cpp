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

// Function: entry_0016ea00
// Address: 0x16ea00 - 0x16ea04
void entry_0016ea00_0x16ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ea00_0x16ea00");
#endif

    ctx->pc = 0x16ea00u;

    // 0x16ea00: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x16ea00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x16ea04u;
}
