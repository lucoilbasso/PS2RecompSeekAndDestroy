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

// Function: entry_00164438
// Address: 0x164438 - 0x164440
void entry_00164438_0x164438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164438_0x164438");
#endif

    ctx->pc = 0x164438u;

    // 0x164438: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16443c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x164440u;
}
