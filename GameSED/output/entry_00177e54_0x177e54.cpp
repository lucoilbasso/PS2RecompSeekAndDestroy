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

// Function: entry_00177e54
// Address: 0x177e54 - 0x177e58
void entry_00177e54_0x177e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e54_0x177e54");
#endif

    ctx->pc = 0x177e54u;

    // 0x177e54: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x177e54u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x177e58u;
}
