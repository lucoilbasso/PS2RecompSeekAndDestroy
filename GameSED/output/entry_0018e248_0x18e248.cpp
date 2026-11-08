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

// Function: entry_0018e248
// Address: 0x18e248 - 0x18e24c
void entry_0018e248_0x18e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e248_0x18e248");
#endif

    ctx->pc = 0x18e248u;

    // 0x18e248: 0xa5000246  sh          $zero, 0x246($t0)
    ctx->pc = 0x18e248u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 582), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18e24cu;
}
