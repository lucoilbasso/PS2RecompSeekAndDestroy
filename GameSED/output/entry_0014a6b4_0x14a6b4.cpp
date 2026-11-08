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

// Function: entry_0014a6b4
// Address: 0x14a6b4 - 0x14a6bc
void entry_0014a6b4_0x14a6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a6b4_0x14a6b4");
#endif

    ctx->pc = 0x14a6b4u;

    // 0x14a6b4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x14a6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x14a6b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x14a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x14a6bcu;
}
