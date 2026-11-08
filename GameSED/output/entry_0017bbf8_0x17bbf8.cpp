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

// Function: entry_0017bbf8
// Address: 0x17bbf8 - 0x17bbfc
void entry_0017bbf8_0x17bbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bbf8_0x17bbf8");
#endif

    ctx->pc = 0x17bbf8u;

    // 0x17bbf8: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x17bbf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    ctx->pc = 0x17bbfcu;
}
