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

// Function: entry_00104558
// Address: 0x104558 - 0x104568
void entry_00104558_0x104558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104558_0x104558");
#endif

    ctx->pc = 0x104558u;

    // 0x104558: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x104558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x10455c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10455cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x104560: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x104560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x104564: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x104564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x104568u;
}
