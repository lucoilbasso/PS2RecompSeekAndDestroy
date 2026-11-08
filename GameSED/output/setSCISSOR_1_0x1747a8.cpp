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

// Function: setSCISSOR_1
// Address: 0x1747a8 - 0x1747e4
void setSCISSOR_1_0x1747a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setSCISSOR_1_0x1747a8");
#endif

    ctx->pc = 0x1747a8u;

    // 0x1747a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1747a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1747ac: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1747acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1747b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1747b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1747b4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1747b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1747b8: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x1747b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1747bc: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x1747bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x1747c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1747c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1747c4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1747c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1747c8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1747c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1747cc: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x1747ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1747d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1747d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1747d4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1747d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1747d8: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x1747d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1747dc: 0x805d118  j           func_174460
    ctx->pc = 0x1747DCu;
    ctx->pc = 0x1747E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747DCu;
    // 0x1747e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x1747E4u;
}
