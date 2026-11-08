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

// Function: entry_00198fa0
// Address: 0x198fa0 - 0x198fa8
void entry_00198fa0_0x198fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198fa0_0x198fa0");
#endif

    ctx->pc = 0x198fa0u;

    // 0x198fa0: 0x34420145  ori         $v0, $v0, 0x145
    ctx->pc = 0x198fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)325);
    // 0x198fa4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x198fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x198fa8u;
}
