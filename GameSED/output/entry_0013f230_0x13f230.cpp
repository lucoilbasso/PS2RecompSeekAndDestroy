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

// Function: entry_0013f230
// Address: 0x13f230 - 0x13f240
void entry_0013f230_0x13f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f230_0x13f230");
#endif

    ctx->pc = 0x13f230u;

    // 0x13f230: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f238: 0xe440020c  swc1        $f0, 0x20C($v0)
    ctx->pc = 0x13f238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 524), bits); }
    // 0x13f23c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13f23cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x13f240u;
}
