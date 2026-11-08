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

// Function: entry_0011baf4
// Address: 0x11baf4 - 0x11bb04
void entry_0011baf4_0x11baf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011baf4_0x11baf4");
#endif

    ctx->pc = 0x11baf4u;

    // 0x11baf4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x11baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11baf8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x11baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x11bafc: 0x3442f470  ori         $v0, $v0, 0xF470
    ctx->pc = 0x11bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62576);
    // 0x11bb00: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x11bb00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x11bb04u;
}
