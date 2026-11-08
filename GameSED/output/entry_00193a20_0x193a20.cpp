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

// Function: entry_00193a20
// Address: 0x193a20 - 0x193a28
void entry_00193a20_0x193a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a20_0x193a20");
#endif

    ctx->pc = 0x193a20u;

    // 0x193a20: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x193a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x193a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x193a28u;
}
