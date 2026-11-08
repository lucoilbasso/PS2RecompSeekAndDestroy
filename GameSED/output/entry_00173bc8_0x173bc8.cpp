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

// Function: entry_00173bc8
// Address: 0x173bc8 - 0x173bdc
void entry_00173bc8_0x173bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173bc8_0x173bc8");
#endif

    ctx->pc = 0x173bc8u;

    // 0x173bc8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x173bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x173bcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x173bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x173bd0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x173bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x173bd4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x173bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x173bd8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x173bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x173bdcu;
}
