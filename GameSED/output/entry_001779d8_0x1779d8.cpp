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

// Function: entry_001779d8
// Address: 0x1779d8 - 0x1779dc
void entry_001779d8_0x1779d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001779d8_0x1779d8");
#endif

    ctx->pc = 0x1779d8u;

    // 0x1779d8: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x1779d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    ctx->pc = 0x1779dcu;
}
