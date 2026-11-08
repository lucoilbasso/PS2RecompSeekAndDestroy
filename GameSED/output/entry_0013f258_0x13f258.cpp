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

// Function: entry_0013f258
// Address: 0x13f258 - 0x13f264
void entry_0013f258_0x13f258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f258_0x13f258");
#endif

    ctx->pc = 0x13f258u;

    // 0x13f258: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x13f258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x13f25c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f260: 0xe4400210  swc1        $f0, 0x210($v0)
    ctx->pc = 0x13f260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 528), bits); }
    ctx->pc = 0x13f264u;
}
