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

// Function: entry_0017f248
// Address: 0x17f248 - 0x17f250
void entry_0017f248_0x17f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f248_0x17f248");
#endif

    ctx->pc = 0x17f248u;

    // 0x17f248: 0x240d0041  addiu       $t5, $zero, 0x41
    ctx->pc = 0x17f248u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x17f24c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x17f250u;
}
