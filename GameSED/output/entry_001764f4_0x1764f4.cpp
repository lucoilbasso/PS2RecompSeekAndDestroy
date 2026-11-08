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

// Function: entry_001764f4
// Address: 0x1764f4 - 0x1764fc
void entry_001764f4_0x1764f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001764f4_0x1764f4");
#endif

    ctx->pc = 0x1764f4u;

    // 0x1764f4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1764f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1764f8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1764f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x1764fcu;
}
