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

// Function: entry_00155b98
// Address: 0x155b98 - 0x155b9c
void entry_00155b98_0x155b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155b98_0x155b98");
#endif

    ctx->pc = 0x155b98u;

    // 0x155b98: 0xae440184  sw          $a0, 0x184($s2)
    ctx->pc = 0x155b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 4));
    ctx->pc = 0x155b9cu;
}
