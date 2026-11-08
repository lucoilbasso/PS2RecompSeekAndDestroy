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

// Function: entry_00141ebc
// Address: 0x141ebc - 0x141ec4
void entry_00141ebc_0x141ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141ebc_0x141ebc");
#endif

    ctx->pc = 0x141ebcu;

    // 0x141ebc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x141ebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141ec0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x141ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x141ec4u;
}
