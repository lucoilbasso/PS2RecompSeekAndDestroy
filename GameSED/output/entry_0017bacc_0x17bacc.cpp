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

// Function: entry_0017bacc
// Address: 0x17bacc - 0x17bad0
void entry_0017bacc_0x17bacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bacc_0x17bacc");
#endif

    ctx->pc = 0x17baccu;

    // 0x17bacc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17baccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x17bad0u;
}
