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

// Function: entry_00164854
// Address: 0x164854 - 0x16485c
void entry_00164854_0x164854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164854_0x164854");
#endif

    ctx->pc = 0x164854u;

    // 0x164854: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x164854u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x164858: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x164858u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x16485cu;
}
