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

// Function: entry_0016f880
// Address: 0x16f880 - 0x16f884
void entry_0016f880_0x16f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f880_0x16f880");
#endif

    ctx->pc = 0x16f880u;

    // 0x16f880: 0x32a21000  andi        $v0, $s5, 0x1000
    ctx->pc = 0x16f880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
    ctx->pc = 0x16f884u;
}
