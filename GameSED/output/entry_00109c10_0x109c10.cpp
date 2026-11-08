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

// Function: entry_00109c10
// Address: 0x109c10 - 0x109c14
void entry_00109c10_0x109c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109c10_0x109c10");
#endif

    ctx->pc = 0x109c10u;

    // 0x109c10: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x109c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    ctx->pc = 0x109c14u;
}
