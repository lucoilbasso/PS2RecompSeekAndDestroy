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

// Function: entry_00177ffc
// Address: 0x177ffc - 0x178004
void entry_00177ffc_0x177ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177ffc_0x177ffc");
#endif

    ctx->pc = 0x177ffcu;

    // 0x177ffc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178000: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    ctx->pc = 0x178004u;
}
