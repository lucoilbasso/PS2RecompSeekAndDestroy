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

// Function: entry_0016edd8
// Address: 0x16edd8 - 0x16eddc
void entry_0016edd8_0x16edd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016edd8_0x16edd8");
#endif

    ctx->pc = 0x16edd8u;

    // 0x16edd8: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x16edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x16eddcu;
}
