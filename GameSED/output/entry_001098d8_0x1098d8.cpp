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

// Function: entry_001098d8
// Address: 0x1098d8 - 0x1098dc
void entry_001098d8_0x1098d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001098d8_0x1098d8");
#endif

    ctx->pc = 0x1098d8u;

    // 0x1098d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1098d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1098dcu;
}
