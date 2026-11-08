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

// Function: entry_00177e24
// Address: 0x177e24 - 0x177e28
void entry_00177e24_0x177e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e24_0x177e24");
#endif

    ctx->pc = 0x177e24u;

    // 0x177e24: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x177e24u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x177e28u;
}
