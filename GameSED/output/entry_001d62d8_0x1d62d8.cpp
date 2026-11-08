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

// Function: entry_001d62d8
// Address: 0x1d62d8 - 0x1d62e0
void entry_001d62d8_0x1d62d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d62d8_0x1d62d8");
#endif

    ctx->pc = 0x1d62d8u;

    // 0x1d62d8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1d62d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1d62dc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d62dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    ctx->pc = 0x1d62e0u;
}
