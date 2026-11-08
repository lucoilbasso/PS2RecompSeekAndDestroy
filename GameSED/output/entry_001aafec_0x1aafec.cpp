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

// Function: entry_001aafec
// Address: 0x1aafec - 0x1aaff4
void entry_001aafec_0x1aafec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aafec_0x1aafec");
#endif

    ctx->pc = 0x1aafecu;

    // 0x1aafec: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1aafecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1aaff0: 0x24849668  addiu       $a0, $a0, -0x6998
    ctx->pc = 0x1aaff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940264));
    ctx->pc = 0x1aaff4u;
}
