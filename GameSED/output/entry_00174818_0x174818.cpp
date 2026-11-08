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

// Function: entry_00174818
// Address: 0x174818 - 0x174830
void entry_00174818_0x174818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174818_0x174818");
#endif

    ctx->pc = 0x174818u;

    // 0x174818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17481c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x17481cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x174820: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x174820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x174824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174828: 0x805d118  j           func_174460
    ctx->pc = 0x174828u;
    ctx->pc = 0x17482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174828u;
    // 0x17482c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x174830u;
}
