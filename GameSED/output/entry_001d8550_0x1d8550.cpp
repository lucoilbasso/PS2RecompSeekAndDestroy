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

// Function: entry_001d8550
// Address: 0x1d8550 - 0x1d8558
void entry_001d8550_0x1d8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8550_0x1d8550");
#endif

    ctx->pc = 0x1d8550u;

    // 0x1d8550: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1d8550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1d8554: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x1d8558u;
}
