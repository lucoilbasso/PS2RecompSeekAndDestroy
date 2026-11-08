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

// Function: entry_00193be0
// Address: 0x193be0 - 0x193be4
void entry_00193be0_0x193be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193be0_0x193be0");
#endif

    ctx->pc = 0x193be0u;

    // 0x193be0: 0xae200190  sw          $zero, 0x190($s1)
    ctx->pc = 0x193be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 0));
    ctx->pc = 0x193be4u;
}
