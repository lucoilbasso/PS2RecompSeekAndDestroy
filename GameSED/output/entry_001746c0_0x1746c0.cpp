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

// Function: entry_001746c0
// Address: 0x1746c0 - 0x1746ec
void entry_001746c0_0x1746c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001746c0_0x1746c0");
#endif

    ctx->pc = 0x1746c0u;

    // 0x1746c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1746c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1746c4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1746c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1746c8: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x1746c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x1746cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1746ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1746d0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1746d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1746d4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1746d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1746d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1746d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1746dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1746e0: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x1746e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1746e4: 0x805d118  j           func_174460
    ctx->pc = 0x1746E4u;
    ctx->pc = 0x1746E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1746E4u;
    // 0x1746e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x1746ECu;
}
