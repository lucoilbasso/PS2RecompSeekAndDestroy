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

// Function: entry_0015ed88
// Address: 0x15ed88 - 0x15ed94
void entry_0015ed88_0x15ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ed88_0x15ed88");
#endif

    ctx->pc = 0x15ed88u;

    // 0x15ed88: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x15ed8c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x15ed90: 0x2454a8a0  addiu       $s4, $v0, -0x5760
    ctx->pc = 0x15ed90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
    ctx->pc = 0x15ed94u;
}
