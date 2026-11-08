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

// Function: entry_0014a5d4
// Address: 0x14a5d4 - 0x14a5dc
void entry_0014a5d4_0x14a5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a5d4_0x14a5d4");
#endif

    ctx->pc = 0x14a5d4u;

    // 0x14a5d4: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x14a5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x14a5d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14a5dcu;
}
