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

// Function: entry_00141fa0
// Address: 0x141fa0 - 0x141fa4
void entry_00141fa0_0x141fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141fa0_0x141fa0");
#endif

    ctx->pc = 0x141fa0u;

    // 0x141fa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x141fa4u;
}
