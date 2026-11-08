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

// Function: entry_00177dd8
// Address: 0x177dd8 - 0x177de0
void entry_00177dd8_0x177dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177dd8_0x177dd8");
#endif

    ctx->pc = 0x177dd8u;

    // 0x177dd8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x177dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x177ddc: 0xa4820008  sh          $v0, 0x8($a0)
    ctx->pc = 0x177ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x177de0u;
}
