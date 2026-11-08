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

// Function: entry_0019c6dc
// Address: 0x19c6dc - 0x19c6e4
void entry_0019c6dc_0x19c6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c6dc_0x19c6dc");
#endif

    ctx->pc = 0x19c6dcu;

    // 0x19c6dc: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x19c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x19c6e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19c6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x19c6e4u;
}
