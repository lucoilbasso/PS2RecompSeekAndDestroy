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

// Function: setFRAME_1
// Address: 0x1746f0 - 0x174730
void setFRAME_1_0x1746f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setFRAME_1_0x1746f0");
#endif

    ctx->pc = 0x1746f0u;

    // 0x1746f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1746f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1746f4: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1746f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1746f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1746f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1746fc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1746fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x174700: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x174700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x174704: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x174704u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x174708: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x174708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x17470c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17470cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x174710: 0x73a3a  dsrl        $a3, $a3, 8
    ctx->pc = 0x174710u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 8);
    // 0x174714: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x174714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x174718: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x174718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x17471c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17471cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174720: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x174720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x174724: 0x473025  or          $a2, $v0, $a3
    ctx->pc = 0x174724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x174728: 0x805d118  j           func_174460
    ctx->pc = 0x174728u;
    ctx->pc = 0x17472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174728u;
    // 0x17472c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x174730u;
}
