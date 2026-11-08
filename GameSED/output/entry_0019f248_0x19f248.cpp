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

// Function: entry_0019f248
// Address: 0x19f248 - 0x19f24c
void entry_0019f248_0x19f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f248_0x19f248");
#endif

    ctx->pc = 0x19f248u;

    // 0x19f248: 0x706210c8  pmaxw       $v0, $v1, $v0
    ctx->pc = 0x19f248u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    ctx->pc = 0x19f24cu;
}
