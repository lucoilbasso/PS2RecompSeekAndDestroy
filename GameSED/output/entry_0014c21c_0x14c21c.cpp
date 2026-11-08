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

// Function: entry_0014c21c
// Address: 0x14c21c - 0x14c220
void entry_0014c21c_0x14c21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c21c_0x14c21c");
#endif

    ctx->pc = 0x14c21cu;

    // 0x14c21c: 0xae200244  sw          $zero, 0x244($s1)
    ctx->pc = 0x14c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
    ctx->pc = 0x14c220u;
}
