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

// Function: entry_00172768
// Address: 0x172768 - 0x17276c
void entry_00172768_0x172768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172768_0x172768");
#endif

    ctx->pc = 0x172768u;

    // 0x172768: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x172768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    ctx->pc = 0x17276cu;
}
