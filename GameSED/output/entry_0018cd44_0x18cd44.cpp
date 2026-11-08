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

// Function: entry_0018cd44
// Address: 0x18cd44 - 0x18cd48
void entry_0018cd44_0x18cd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd44_0x18cd44");
#endif

    ctx->pc = 0x18cd44u;

    // 0x18cd44: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x18cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    ctx->pc = 0x18cd48u;
}
