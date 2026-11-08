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

// Function: entry_0011fa68
// Address: 0x11fa68 - 0x11fa6c
void entry_0011fa68_0x11fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa68_0x11fa68");
#endif

    ctx->pc = 0x11fa68u;

    // 0x11fa68: 0x2e840003  sltiu       $a0, $s4, 0x3
    ctx->pc = 0x11fa68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    ctx->pc = 0x11fa6cu;
}
