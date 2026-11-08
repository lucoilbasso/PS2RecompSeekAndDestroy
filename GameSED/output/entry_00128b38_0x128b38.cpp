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

// Function: entry_00128b38
// Address: 0x128b38 - 0x128b48
void entry_00128b38_0x128b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128b38_0x128b38");
#endif

    ctx->pc = 0x128b38u;

    // 0x128b38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x128b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x128b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x128b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128b40: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x128b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x128b44: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x128b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x128b48u;
}
