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

// Function: entry_00116248
// Address: 0x116248 - 0x116254
void entry_00116248_0x116248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116248_0x116248");
#endif

    ctx->pc = 0x116248u;

    // 0x116248: 0x2463c194  addiu       $v1, $v1, -0x3E6C
    ctx->pc = 0x116248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951316));
    // 0x11624c: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x11624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x116250: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x116250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    ctx->pc = 0x116254u;
}
