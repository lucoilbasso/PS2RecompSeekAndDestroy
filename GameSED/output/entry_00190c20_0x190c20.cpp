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

// Function: entry_00190c20
// Address: 0x190c20 - 0x190c24
void entry_00190c20_0x190c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190c20_0x190c20");
#endif

    ctx->pc = 0x190c20u;

    // 0x190c20: 0xc23fc  dsll32      $a0, $t4, 15
    ctx->pc = 0x190c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) << (32 + 15));
    ctx->pc = 0x190c24u;
}
