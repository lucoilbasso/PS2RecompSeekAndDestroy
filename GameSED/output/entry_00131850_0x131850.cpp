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

// Function: entry_00131850
// Address: 0x131850 - 0x131858
void entry_00131850_0x131850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131850_0x131850");
#endif

    ctx->pc = 0x131850u;

    // 0x131850: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x131850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x131854: 0xaea30150  sw          $v1, 0x150($s5)
    ctx->pc = 0x131854u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 3));
    ctx->pc = 0x131858u;
}
