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

// Function: entry_0019f0a4
// Address: 0x19f0a4 - 0x19f0ac
void entry_0019f0a4_0x19f0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f0a4_0x19f0a4");
#endif

    ctx->pc = 0x19f0a4u;

    // 0x19f0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f0a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19f0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x19f0acu;
}
