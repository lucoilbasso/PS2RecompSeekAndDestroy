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

// Function: entry_00139064
// Address: 0x139064 - 0x13906c
void entry_00139064_0x139064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139064_0x139064");
#endif

    ctx->pc = 0x139064u;

    // 0x139064: 0x24458f98  addiu       $a1, $v0, -0x7068
    ctx->pc = 0x139064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938520));
    // 0x139068: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x139068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13906cu;
}
