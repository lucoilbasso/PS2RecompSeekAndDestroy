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

// Function: entry_00145d9c
// Address: 0x145d9c - 0x145da8
void entry_00145d9c_0x145d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145d9c_0x145d9c");
#endif

    ctx->pc = 0x145d9cu;

    // 0x145d9c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x145d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x145da0: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x145da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x145da4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x145da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    ctx->pc = 0x145da8u;
}
