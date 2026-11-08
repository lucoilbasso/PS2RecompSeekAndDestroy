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

// Function: entry_0019ef94
// Address: 0x19ef94 - 0x19ef98
void entry_0019ef94_0x19ef94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ef94_0x19ef94");
#endif

    ctx->pc = 0x19ef94u;

    // 0x19ef94: 0x70c210c8  pmaxw       $v0, $a2, $v0
    ctx->pc = 0x19ef94u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    ctx->pc = 0x19ef98u;
}
