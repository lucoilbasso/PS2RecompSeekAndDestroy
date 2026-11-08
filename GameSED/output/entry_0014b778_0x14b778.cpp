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

// Function: entry_0014b778
// Address: 0x14b778 - 0x14b77c
void entry_0014b778_0x14b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b778_0x14b778");
#endif

    ctx->pc = 0x14b778u;

    // 0x14b778: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    ctx->pc = 0x14b77cu;
}
