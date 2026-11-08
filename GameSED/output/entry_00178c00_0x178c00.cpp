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

// Function: entry_00178c00
// Address: 0x178c00 - 0x178c08
void entry_00178c00_0x178c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178c00_0x178c00");
#endif

    ctx->pc = 0x178c00u;

    // 0x178c00: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x178c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x178c04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x178c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x178c08u;
}
