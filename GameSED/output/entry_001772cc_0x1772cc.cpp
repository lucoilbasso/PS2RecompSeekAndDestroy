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

// Function: entry_001772cc
// Address: 0x1772cc - 0x1772dc
void entry_001772cc_0x1772cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001772cc_0x1772cc");
#endif

    ctx->pc = 0x1772ccu;

    // 0x1772cc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1772ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1772d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1772d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1772d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1772d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1772d8: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x1772d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    ctx->pc = 0x1772dcu;
}
