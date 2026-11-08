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

// Function: entry_00141dec
// Address: 0x141dec - 0x141df4
void entry_00141dec_0x141dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141dec_0x141dec");
#endif

    ctx->pc = 0x141decu;

    // 0x141dec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x141decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x141df4u;
}
