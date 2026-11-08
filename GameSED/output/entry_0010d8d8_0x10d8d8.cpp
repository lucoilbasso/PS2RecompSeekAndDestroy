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

// Function: entry_0010d8d8
// Address: 0x10d8d8 - 0x10d8e8
void entry_0010d8d8_0x10d8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d8d8_0x10d8d8");
#endif

    ctx->pc = 0x10d8d8u;

    // 0x10d8d8: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x10d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x10d8dc: 0xe464017c  swc1        $f4, 0x17C($v1)
    ctx->pc = 0x10d8dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 380), bits); }
    // 0x10d8e0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x10d8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x10d8e4: 0xe4650180  swc1        $f5, 0x180($v1)
    ctx->pc = 0x10d8e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x10d8e8u;
}
