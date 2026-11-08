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

// Function: entry_0018d074
// Address: 0x18d074 - 0x18d080
void entry_0018d074_0x18d074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d074_0x18d074");
#endif

    ctx->pc = 0x18d074u;

    // 0x18d074: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x18d074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x18d078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18d078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18d07c: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x18d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x18d080u;
}
