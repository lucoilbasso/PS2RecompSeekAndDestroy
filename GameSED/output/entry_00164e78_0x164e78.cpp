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

// Function: entry_00164e78
// Address: 0x164e78 - 0x164e80
void entry_00164e78_0x164e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164e78_0x164e78");
#endif

    ctx->pc = 0x164e78u;

    // 0x164e78: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x164e78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x164e7c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x164e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x164e80u;
}
