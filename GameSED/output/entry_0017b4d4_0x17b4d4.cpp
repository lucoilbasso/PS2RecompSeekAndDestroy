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

// Function: entry_0017b4d4
// Address: 0x17b4d4 - 0x17b4e0
void entry_0017b4d4_0x17b4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b4d4_0x17b4d4");
#endif

    ctx->pc = 0x17b4d4u;

    // 0x17b4d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17b4d8: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x17b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x17b4dc: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x17b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    ctx->pc = 0x17b4e0u;
}
