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

// Function: entry_0017b990
// Address: 0x17b990 - 0x17b998
void entry_0017b990_0x17b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b990_0x17b990");
#endif

    ctx->pc = 0x17b990u;

    // 0x17b990: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x17b990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x17b994: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17b994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x17b998u;
}
