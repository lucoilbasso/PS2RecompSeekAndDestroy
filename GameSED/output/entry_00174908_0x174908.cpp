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

// Function: entry_00174908
// Address: 0x174908 - 0x17492c
void entry_00174908_0x174908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174908_0x174908");
#endif

    ctx->pc = 0x174908u;

    // 0x174908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17490c: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x17490cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x174910: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x174910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x174914: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x174914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x174918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17491c: 0xe53025  or          $a2, $a3, $a1
    ctx->pc = 0x17491cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x174920: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x174920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x174924: 0x805d118  j           func_174460
    ctx->pc = 0x174924u;
    ctx->pc = 0x174928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174924u;
    // 0x174928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x17492Cu;
}
