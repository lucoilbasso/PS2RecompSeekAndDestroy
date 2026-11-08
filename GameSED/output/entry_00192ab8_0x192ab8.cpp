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

// Function: entry_00192ab8
// Address: 0x192ab8 - 0x192abc
void entry_00192ab8_0x192ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192ab8_0x192ab8");
#endif

    ctx->pc = 0x192ab8u;

    // 0x192ab8: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x192ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    ctx->pc = 0x192abcu;
}
