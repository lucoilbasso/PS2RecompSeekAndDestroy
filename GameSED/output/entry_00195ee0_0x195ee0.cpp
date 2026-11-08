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

// Function: entry_00195ee0
// Address: 0x195ee0 - 0x195eec
void entry_00195ee0_0x195ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ee0_0x195ee0");
#endif

    ctx->pc = 0x195ee0u;

    // 0x195ee0: 0xdfa20070  ld          $v0, 0x70($sp)
    ctx->pc = 0x195ee0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x195ee4: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x195ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x195ee8: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x195ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    ctx->pc = 0x195eecu;
}
