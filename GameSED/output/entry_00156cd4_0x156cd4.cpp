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

// Function: entry_00156cd4
// Address: 0x156cd4 - 0x156cdc
void entry_00156cd4_0x156cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156cd4_0x156cd4");
#endif

    ctx->pc = 0x156cd4u;

    // 0x156cd4: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x156cd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x156cd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x156cdcu;
}
