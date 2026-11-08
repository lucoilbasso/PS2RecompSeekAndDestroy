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

// Function: entry_00179b10
// Address: 0x179b10 - 0x179b14
void entry_00179b10_0x179b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179b10_0x179b10");
#endif

    ctx->pc = 0x179b10u;

    // 0x179b10: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x179b10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x179b14u;
}
