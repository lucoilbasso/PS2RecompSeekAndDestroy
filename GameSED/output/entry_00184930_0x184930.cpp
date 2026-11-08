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

// Function: entry_00184930
// Address: 0x184930 - 0x184938
void entry_00184930_0x184930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184930_0x184930");
#endif

    ctx->pc = 0x184930u;

    // 0x184930: 0x95630008  lhu         $v1, 0x8($t3)
    ctx->pc = 0x184930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x184934: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x184934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x184938u;
}
