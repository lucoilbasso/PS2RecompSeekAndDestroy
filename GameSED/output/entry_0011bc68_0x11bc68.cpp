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

// Function: entry_0011bc68
// Address: 0x11bc68 - 0x11bc70
void entry_0011bc68_0x11bc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc68_0x11bc68");
#endif

    ctx->pc = 0x11bc68u;

    // 0x11bc68: 0x3411dec8  ori         $s1, $zero, 0xDEC8
    ctx->pc = 0x11bc68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57032);
    // 0x11bc6c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x11bc6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x11bc70u;
}
