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

// Function: entry_0017415c
// Address: 0x17415c - 0x174160
void entry_0017415c_0x17415c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017415c_0x17415c");
#endif

    ctx->pc = 0x17415cu;

    // 0x17415c: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x17415cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    ctx->pc = 0x174160u;
}
