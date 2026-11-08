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

// Function: entry_001144ec
// Address: 0x1144ec - 0x1144fc
void entry_001144ec_0x1144ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001144ec_0x1144ec");
#endif

    ctx->pc = 0x1144ecu;

    // 0x1144ec: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x1144ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x1144f0: 0x2610c058  addiu       $s0, $s0, -0x3FA8
    ctx->pc = 0x1144f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951000));
    // 0x1144f4: 0x24a5c020  addiu       $a1, $a1, -0x3FE0
    ctx->pc = 0x1144f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950944));
    // 0x1144f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1144f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1144fcu;
}
