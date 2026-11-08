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

// Function: entry_00177fcc
// Address: 0x177fcc - 0x177fd0
void entry_00177fcc_0x177fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177fcc_0x177fcc");
#endif

    ctx->pc = 0x177fccu;

    // 0x177fcc: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x177fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x177fd0u;
}
