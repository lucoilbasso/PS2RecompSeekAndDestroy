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

// Function: entry_00125b04
// Address: 0x125b04 - 0x125b08
void entry_00125b04_0x125b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125b04_0x125b04");
#endif

    ctx->pc = 0x125b04u;

    // 0x125b04: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x125b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    ctx->pc = 0x125b08u;
}
