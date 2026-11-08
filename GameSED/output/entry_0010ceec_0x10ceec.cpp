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

// Function: entry_0010ceec
// Address: 0x10ceec - 0x10cef4
void entry_0010ceec_0x10ceec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ceec_0x10ceec");
#endif

    ctx->pc = 0x10ceecu;

    // 0x10ceec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10cef0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x10cef4u;
}
