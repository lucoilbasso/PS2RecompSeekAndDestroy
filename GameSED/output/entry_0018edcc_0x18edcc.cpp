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

// Function: entry_0018edcc
// Address: 0x18edcc - 0x18edd0
void entry_0018edcc_0x18edcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018edcc_0x18edcc");
#endif

    ctx->pc = 0x18edccu;

    // 0x18edcc: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x18edccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x18edd0u;
}
