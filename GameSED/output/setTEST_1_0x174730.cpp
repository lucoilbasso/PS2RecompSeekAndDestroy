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

// Function: setTEST_1
// Address: 0x174730 - 0x1747a4
void setTEST_1_0x174730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setTEST_1_0x174730");
#endif

    ctx->pc = 0x174730u;

    // 0x174730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174734: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x174734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x174738: 0x9fa20010  lwu         $v0, 0x10($sp)
    ctx->pc = 0x174738u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17473c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x17473cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x174740: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x174740u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x174744: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x174744u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x174748: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x174748u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x17474c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x17474cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x174750: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x174750u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x174754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174758: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x174758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x17475c: 0xa547a  dsrl        $t2, $t2, 17
    ctx->pc = 0x17475cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 17);
    // 0x174760: 0x73f3a  dsrl        $a3, $a3, 28
    ctx->pc = 0x174760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 28);
    // 0x174764: 0xb5c3a  dsrl        $t3, $t3, 16
    ctx->pc = 0x174764u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 16);
    // 0x174768: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x174768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x17476c: 0x8453a  dsrl        $t0, $t0, 20
    ctx->pc = 0x17476cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 20);
    // 0x174770: 0x637fa  dsrl        $a2, $a2, 31
    ctx->pc = 0x174770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 31);
    // 0x174774: 0x94cba  dsrl        $t1, $t1, 18
    ctx->pc = 0x174774u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 18);
    // 0x174778: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x174778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x17477c: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x17477cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x174780: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x174780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x174784: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x174784u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x174788: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x174788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x17478c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x17478cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x174790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174794: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x174794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x174798: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x174798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x17479c: 0x805d118  j           func_174460
    ctx->pc = 0x17479Cu;
    ctx->pc = 0x1747A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17479Cu;
    // 0x1747a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x1747A4u;
}
