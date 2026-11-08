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

// Function: entry_00141238
// Address: 0x141238 - 0x141240
void entry_00141238_0x141238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141238_0x141238");
#endif

    ctx->pc = 0x141238u;

    // 0x141238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x141238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14123c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14123cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x141240u;
}
