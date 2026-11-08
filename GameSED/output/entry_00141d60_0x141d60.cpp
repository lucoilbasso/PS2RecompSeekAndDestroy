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

// Function: entry_00141d60
// Address: 0x141d60 - 0x141d68
void entry_00141d60_0x141d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141d60_0x141d60");
#endif

    ctx->pc = 0x141d60u;

    // 0x141d60: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x141d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x141d64: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x141d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x141d68u;
}
