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

// Function: setTRXREG
// Address: 0x174960 - 0x174988
void setTRXREG_0x174960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setTRXREG_0x174960");
#endif

    ctx->pc = 0x174960u;

    // 0x174960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174964: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x174964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x174968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17496c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17496cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x174970: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x174970u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x174974: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x174974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x174978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17497c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x17497cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x174980: 0x805d118  j           func_174460
    ctx->pc = 0x174980u;
    ctx->pc = 0x174984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174980u;
    // 0x174984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x174988u;
}
