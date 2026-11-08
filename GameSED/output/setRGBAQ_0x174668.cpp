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

// Function: setRGBAQ
// Address: 0x174668 - 0x1746b4
void setRGBAQ_0x174668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setRGBAQ_0x174668");
#endif

    ctx->pc = 0x174668u;

    // 0x174668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17466c: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x17466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x174670: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x174670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x174674: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x174674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x174678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17467c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x17467cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x174680: 0x6363a  dsrl        $a2, $a2, 24
    ctx->pc = 0x174680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 24);
    // 0x174684: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x174684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x174688: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x174688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x17468c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x17468cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x174690: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x174690u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x174694: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x174694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x174698: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x174698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x17469c: 0x6323a  dsrl        $a2, $a2, 8
    ctx->pc = 0x17469cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 8);
    // 0x1746a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1746a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1746a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1746a8: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x1746a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1746ac: 0x805d118  j           func_174460
    ctx->pc = 0x1746ACu;
    ctx->pc = 0x1746B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1746ACu;
    // 0x1746b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x1746B4u;
}
