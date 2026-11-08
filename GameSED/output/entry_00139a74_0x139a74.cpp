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

// Function: entry_00139a74
// Address: 0x139a74 - 0x139a7c
void entry_00139a74_0x139a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139a74_0x139a74");
#endif

    ctx->pc = 0x139a74u;

    // 0x139a74: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x139a74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
    // 0x139a78: 0x26109940  addiu       $s0, $s0, -0x66C0
    ctx->pc = 0x139a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940992));
    ctx->pc = 0x139a7cu;
}
