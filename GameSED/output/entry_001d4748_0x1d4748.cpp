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

// Function: entry_001d4748
// Address: 0x1d4748 - 0x1d4754
void entry_001d4748_0x1d4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4748_0x1d4748");
#endif

    ctx->pc = 0x1d4748u;

    // 0x1d4748: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d4748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d474c: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x1d474cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x1d4750: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x1d4750u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x1d4754u;
}
