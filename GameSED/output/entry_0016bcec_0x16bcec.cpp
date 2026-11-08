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

// Function: entry_0016bcec
// Address: 0x16bcec - 0x16bcf4
void entry_0016bcec_0x16bcec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bcec_0x16bcec");
#endif

    ctx->pc = 0x16bcecu;

    // 0x16bcec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x16bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x16bcf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16bcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16bcf4u;
}
