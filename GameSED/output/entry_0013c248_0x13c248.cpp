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

// Function: entry_0013c248
// Address: 0x13c248 - 0x13c24c
void entry_0013c248_0x13c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c248_0x13c248");
#endif

    ctx->pc = 0x13c248u;

    // 0x13c248: 0xace401e0  sw          $a0, 0x1E0($a3)
    ctx->pc = 0x13c248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
    ctx->pc = 0x13c24cu;
}
