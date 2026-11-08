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

// Function: entry_00185f7c
// Address: 0x185f7c - 0x185f88
void entry_00185f7c_0x185f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185f7c_0x185f7c");
#endif

    ctx->pc = 0x185f7cu;

    // 0x185f7c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185f80: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x185f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x185f84: 0x24421c40  addiu       $v0, $v0, 0x1C40
    ctx->pc = 0x185f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7232));
    ctx->pc = 0x185f88u;
}
