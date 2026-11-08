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

// Function: entry_001a05b8
// Address: 0x1a05b8 - 0x1a05c8
void entry_001a05b8_0x1a05b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a05b8_0x1a05b8");
#endif

    ctx->pc = 0x1a05b8u;

    // 0x1a05b8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a05bc: 0xaf829170  sw          $v0, -0x6E90($gp)
    ctx->pc = 0x1a05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938992), GPR_U32(ctx, 2));
    // 0x1a05c0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1a05c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a05c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a05c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->pc = 0x1a05c8u;
}
