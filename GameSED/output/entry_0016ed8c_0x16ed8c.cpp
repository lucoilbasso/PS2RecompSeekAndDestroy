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

// Function: entry_0016ed8c
// Address: 0x16ed8c - 0x16ed90
void entry_0016ed8c_0x16ed8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ed8c_0x16ed8c");
#endif

    ctx->pc = 0x16ed8cu;

    // 0x16ed8c: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x16ed8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
    ctx->pc = 0x16ed90u;
}
