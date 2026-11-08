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

// Function: entry_0012de78
// Address: 0x12de78 - 0x12de80
void entry_0012de78_0x12de78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012de78_0x12de78");
#endif

    ctx->pc = 0x12de78u;

    // 0x12de78: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x12de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x12de7c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12de7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    ctx->pc = 0x12de80u;
}
