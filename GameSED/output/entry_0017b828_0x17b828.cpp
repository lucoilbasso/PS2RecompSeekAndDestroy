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

// Function: entry_0017b828
// Address: 0x17b828 - 0x17b830
void entry_0017b828_0x17b828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b828_0x17b828");
#endif

    ctx->pc = 0x17b828u;

    // 0x17b828: 0x651006  srlv        $v0, $a1, $v1
    ctx->pc = 0x17b828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x17b82c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x17b830u;
}
