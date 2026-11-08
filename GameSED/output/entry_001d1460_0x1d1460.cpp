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

// Function: entry_001d1460
// Address: 0x1d1460 - 0x1d146c
void entry_001d1460_0x1d1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1460_0x1d1460");
#endif

    ctx->pc = 0x1d1460u;

    // 0x1d1460: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1d1460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1d1464: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d1464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d1468: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x1d1468u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
    ctx->pc = 0x1d146cu;
}
