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

// Function: entry_00114790
// Address: 0x114790 - 0x11479c
void entry_00114790_0x114790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114790_0x114790");
#endif

    ctx->pc = 0x114790u;

    // 0x114790: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x114790u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x114794: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x114794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x114798: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x114798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    ctx->pc = 0x11479cu;
}
