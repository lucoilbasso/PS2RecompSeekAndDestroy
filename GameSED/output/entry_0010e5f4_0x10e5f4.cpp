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

// Function: entry_0010e5f4
// Address: 0x10e5f4 - 0x10e5fc
void entry_0010e5f4_0x10e5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e5f4_0x10e5f4");
#endif

    ctx->pc = 0x10e5f4u;

    // 0x10e5f4: 0x1012  mflo        $v0
    ctx->pc = 0x10e5f4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x10e5f8: 0xa6220178  sh          $v0, 0x178($s1)
    ctx->pc = 0x10e5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10e5fcu;
}
