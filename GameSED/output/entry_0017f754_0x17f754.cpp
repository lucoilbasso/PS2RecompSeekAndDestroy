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

// Function: entry_0017f754
// Address: 0x17f754 - 0x17f758
void entry_0017f754_0x17f754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f754_0x17f754");
#endif

    ctx->pc = 0x17f754u;

    // 0x17f754: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17f754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x17f758u;
}
