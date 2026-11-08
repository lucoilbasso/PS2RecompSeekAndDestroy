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

// Function: entry_00177da4
// Address: 0x177da4 - 0x177da8
void entry_00177da4_0x177da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177da4_0x177da4");
#endif

    ctx->pc = 0x177da4u;

    // 0x177da4: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x177da4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x177da8u;
}
