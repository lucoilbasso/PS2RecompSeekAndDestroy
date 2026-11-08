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

// Function: entry_00144c30
// Address: 0x144c30 - 0x144c40
void entry_00144c30_0x144c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144c30_0x144c30");
#endif

    ctx->pc = 0x144c30u;

    // 0x144c30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x144c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144c34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x144c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x144c38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x144c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144c3c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x144c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x144c40u;
}
