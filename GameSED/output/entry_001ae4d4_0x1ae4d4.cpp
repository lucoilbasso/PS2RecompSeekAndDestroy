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

// Function: entry_001ae4d4
// Address: 0x1ae4d4 - 0x1ae4e0
void entry_001ae4d4_0x1ae4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae4d4_0x1ae4d4");
#endif

    ctx->pc = 0x1ae4d4u;

    // 0x1ae4d4: 0x81200  sll         $v0, $t0, 8
    ctx->pc = 0x1ae4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1ae4d8: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1ae4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1ae4dc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1ae4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ae4e0u;
}
