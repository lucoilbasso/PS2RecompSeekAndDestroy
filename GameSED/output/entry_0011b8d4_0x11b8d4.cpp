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

// Function: entry_0011b8d4
// Address: 0x11b8d4 - 0x11b8dc
void entry_0011b8d4_0x11b8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8d4_0x11b8d4");
#endif

    ctx->pc = 0x11b8d4u;

    // 0x11b8d4: 0xae0040a8  sw          $zero, 0x40A8($s0)
    ctx->pc = 0x11b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16552), GPR_U32(ctx, 0));
    // 0x11b8d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11b8dcu;
}
