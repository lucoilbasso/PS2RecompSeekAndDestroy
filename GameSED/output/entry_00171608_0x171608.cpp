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

// Function: entry_00171608
// Address: 0x171608 - 0x171610
void entry_00171608_0x171608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171608_0x171608");
#endif

    ctx->pc = 0x171608u;

    // 0x171608: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x171608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17160c: 0x24060f80  addiu       $a2, $zero, 0xF80
    ctx->pc = 0x17160cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3968));
    ctx->pc = 0x171610u;
}
