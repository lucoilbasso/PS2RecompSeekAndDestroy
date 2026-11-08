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

// Function: entry_0016be58
// Address: 0x16be58 - 0x16be5c
void entry_0016be58_0x16be58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016be58_0x16be58");
#endif

    ctx->pc = 0x16be58u;

    // 0x16be58: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    ctx->pc = 0x16be5cu;
}
