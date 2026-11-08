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

// Function: entry_00177e58
// Address: 0x177e58 - 0x177e5c
void entry_00177e58_0x177e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e58_0x177e58");
#endif

    ctx->pc = 0x177e58u;

    // 0x177e58: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x177e58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x177e5cu;
}
