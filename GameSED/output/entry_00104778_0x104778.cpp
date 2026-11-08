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

// Function: entry_00104778
// Address: 0x104778 - 0x10477c
void entry_00104778_0x104778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104778_0x104778");
#endif

    ctx->pc = 0x104778u;

    // 0x104778: 0x279188d8  addiu       $s1, $gp, -0x7728
    ctx->pc = 0x104778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936792));
    ctx->pc = 0x10477cu;
}
