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

// Function: entry_00187aa8
// Address: 0x187aa8 - 0x187aac
void entry_00187aa8_0x187aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187aa8_0x187aa8");
#endif

    ctx->pc = 0x187aa8u;

    // 0x187aa8: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x187aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x187aacu;
}
