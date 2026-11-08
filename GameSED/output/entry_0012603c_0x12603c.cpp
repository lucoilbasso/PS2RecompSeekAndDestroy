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

// Function: entry_0012603c
// Address: 0x12603c - 0x126040
void entry_0012603c_0x12603c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012603c_0x12603c");
#endif

    ctx->pc = 0x12603cu;

    // 0x12603c: 0x3aa30078  xori        $v1, $s5, 0x78
    ctx->pc = 0x12603cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)120);
    ctx->pc = 0x126040u;
}
