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

// Function: entry_00142004
// Address: 0x142004 - 0x14200c
void entry_00142004_0x142004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142004_0x142004");
#endif

    ctx->pc = 0x142004u;

    // 0x142004: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x142004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x142008: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x142008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x14200cu;
}
