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

// Function: entry_00114c18
// Address: 0x114c18 - 0x114c1c
void entry_00114c18_0x114c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c18_0x114c18");
#endif

    ctx->pc = 0x114c18u;

    // 0x114c18: 0x2622027c  addiu       $v0, $s1, 0x27C
    ctx->pc = 0x114c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 636));
    ctx->pc = 0x114c1cu;
}
