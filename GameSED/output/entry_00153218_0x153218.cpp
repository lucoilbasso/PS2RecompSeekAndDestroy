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

// Function: entry_00153218
// Address: 0x153218 - 0x15321c
void entry_00153218_0x153218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153218_0x153218");
#endif

    ctx->pc = 0x153218u;

    // 0x153218: 0x162602  srl         $a0, $s6, 24
    ctx->pc = 0x153218u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 22), 24));
    ctx->pc = 0x15321cu;
}
