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

// Function: entry_00106490
// Address: 0x106490 - 0x1064a0
void entry_00106490_0x106490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106490_0x106490");
#endif

    ctx->pc = 0x106490u;

    // 0x106490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106494: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x106494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x106498: 0x2421ed80  addiu       $at, $at, -0x1280
    ctx->pc = 0x106498u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294962560));
    // 0x10649c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x10649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->pc = 0x1064a0u;
}
