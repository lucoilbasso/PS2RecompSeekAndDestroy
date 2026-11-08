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

// Function: entry_0018562c
// Address: 0x18562c - 0x185630
void entry_0018562c_0x18562c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018562c_0x18562c");
#endif

    ctx->pc = 0x18562cu;

    // 0x18562c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x18562cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->pc = 0x185630u;
}
