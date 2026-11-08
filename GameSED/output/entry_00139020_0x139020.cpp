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

// Function: entry_00139020
// Address: 0x139020 - 0x139034
void entry_00139020_0x139020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139020_0x139020");
#endif

    ctx->pc = 0x139020u;

    // 0x139020: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139024: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x139024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139028: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x139028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x13902c: 0x24458f98  addiu       $a1, $v0, -0x7068
    ctx->pc = 0x13902cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938520));
    // 0x139030: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x139030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->pc = 0x139034u;
}
