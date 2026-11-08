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

// Function: entry_00173cb8
// Address: 0x173cb8 - 0x173cc4
void entry_00173cb8_0x173cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173cb8_0x173cb8");
#endif

    ctx->pc = 0x173cb8u;

    // 0x173cb8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x173cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x173cbc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x173cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x173cc0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x173cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x173cc4u;
}
