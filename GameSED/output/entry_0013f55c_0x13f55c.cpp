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

// Function: entry_0013f55c
// Address: 0x13f55c - 0x13f564
void entry_0013f55c_0x13f55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f55c_0x13f55c");
#endif

    ctx->pc = 0x13f55cu;

    // 0x13f55c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13f560: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13f560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x13f564u;
}
