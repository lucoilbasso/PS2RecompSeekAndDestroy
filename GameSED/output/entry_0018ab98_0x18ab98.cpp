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

// Function: entry_0018ab98
// Address: 0x18ab98 - 0x18ab9c
void entry_0018ab98_0x18ab98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ab98_0x18ab98");
#endif

    ctx->pc = 0x18ab98u;

    // 0x18ab98: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x18ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    ctx->pc = 0x18ab9cu;
}
