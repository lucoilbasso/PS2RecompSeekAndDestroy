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

// Function: entry_00174474
// Address: 0x174474 - 0x17447c
void entry_00174474_0x174474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174474_0x174474");
#endif

    ctx->pc = 0x174474u;

    // 0x174474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x174474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x174478: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x174478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x17447cu;
}
