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

// Function: entry_001cbce8
// Address: 0x1cbce8 - 0x1cbcf0
void entry_001cbce8_0x1cbce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbce8_0x1cbce8");
#endif

    ctx->pc = 0x1cbce8u;

    // 0x1cbce8: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cbce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1cbcec: 0x24420be8  addiu       $v0, $v0, 0xBE8
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3048));
    ctx->pc = 0x1cbcf0u;
}
