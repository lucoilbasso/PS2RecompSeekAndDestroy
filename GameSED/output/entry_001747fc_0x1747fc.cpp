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

// Function: entry_001747fc
// Address: 0x1747fc - 0x174810
void entry_001747fc_0x1747fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001747fc_0x1747fc");
#endif

    ctx->pc = 0x1747fcu;

    // 0x1747fc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1747fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x174800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174804: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x174804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x174808: 0x805d118  j           func_174460
    ctx->pc = 0x174808u;
    ctx->pc = 0x17480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174808u;
    // 0x17480c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x174810u;
}
