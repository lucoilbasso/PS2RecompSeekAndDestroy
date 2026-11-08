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

// Function: entry_001620e4
// Address: 0x1620e4 - 0x1620f0
void entry_001620e4_0x1620e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001620e4_0x1620e4");
#endif

    ctx->pc = 0x1620e4u;

    // 0x1620e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1620e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1620e8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1620e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1620ec: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x1620ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    ctx->pc = 0x1620f0u;
}
