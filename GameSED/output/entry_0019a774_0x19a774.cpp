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

// Function: entry_0019a774
// Address: 0x19a774 - 0x19a778
void entry_0019a774_0x19a774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a774_0x19a774");
#endif

    ctx->pc = 0x19a774u;

    // 0x19a774: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19a774u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x19a778u;
}
