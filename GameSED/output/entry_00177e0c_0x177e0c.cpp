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

// Function: entry_00177e0c
// Address: 0x177e0c - 0x177e10
void entry_00177e0c_0x177e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e0c_0x177e0c");
#endif

    ctx->pc = 0x177e0cu;

    // 0x177e0c: 0xa4e2000a  sh          $v0, 0xA($a3)
    ctx->pc = 0x177e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x177e10u;
}
