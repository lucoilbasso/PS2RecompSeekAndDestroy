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

// Function: entry_001533dc
// Address: 0x1533dc - 0x1533e8
void entry_001533dc_0x1533dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001533dc_0x1533dc");
#endif

    ctx->pc = 0x1533dcu;

    // 0x1533dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1533dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1533e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1533e4: 0xae421268  sw          $v0, 0x1268($s2)
    ctx->pc = 0x1533e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4712), GPR_U32(ctx, 2));
    ctx->pc = 0x1533e8u;
}
