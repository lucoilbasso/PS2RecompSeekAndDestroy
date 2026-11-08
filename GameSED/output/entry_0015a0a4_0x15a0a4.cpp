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

// Function: entry_0015a0a4
// Address: 0x15a0a4 - 0x15a0ac
void entry_0015a0a4_0x15a0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a0a4_0x15a0a4");
#endif

    ctx->pc = 0x15a0a4u;

    // 0x15a0a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x15a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15a0a8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x15a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x15a0acu;
}
