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

// Function: entry_001d635c
// Address: 0x1d635c - 0x1d6360
void entry_001d635c_0x1d635c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d635c_0x1d635c");
#endif

    ctx->pc = 0x1d635cu;

    // 0x1d635c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    ctx->pc = 0x1d6360u;
}
