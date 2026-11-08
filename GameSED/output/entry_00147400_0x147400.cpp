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

// Function: entry_00147400
// Address: 0x147400 - 0x147408
void entry_00147400_0x147400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147400_0x147400");
#endif

    ctx->pc = 0x147400u;

    // 0x147400: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x147400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x147404: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x147404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    ctx->pc = 0x147408u;
}
