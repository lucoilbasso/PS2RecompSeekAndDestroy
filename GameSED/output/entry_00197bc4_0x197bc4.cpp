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

// Function: entry_00197bc4
// Address: 0x197bc4 - 0x197bcc
void entry_00197bc4_0x197bc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197bc4_0x197bc4");
#endif

    ctx->pc = 0x197bc4u;

    // 0x197bc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x197bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x197bc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x197bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x197bccu;
}
