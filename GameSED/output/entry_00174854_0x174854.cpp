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

// Function: entry_00174854
// Address: 0x174854 - 0x1748a4
void entry_00174854_0x174854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174854_0x174854");
#endif

    ctx->pc = 0x174854u;

    // 0x174854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174858: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x174858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x17485c: 0xa563a  dsrl        $t2, $t2, 24
    ctx->pc = 0x17485cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 24);
    // 0x174860: 0x73efa  dsrl        $a3, $a3, 27
    ctx->pc = 0x174860u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 27);
    // 0x174864: 0xb5dfa  dsrl        $t3, $t3, 23
    ctx->pc = 0x174864u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 23);
    // 0x174868: 0x52f7a  dsrl        $a1, $a1, 29
    ctx->pc = 0x174868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 29);
    // 0x17486c: 0x846ba  dsrl        $t0, $t0, 26
    ctx->pc = 0x17486cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 26);
    // 0x174870: 0x6373a  dsrl        $a2, $a2, 28
    ctx->pc = 0x174870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 28);
    // 0x174874: 0x94e7a  dsrl        $t1, $t1, 25
    ctx->pc = 0x174874u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 25);
    // 0x174878: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x174878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x17487c: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x17487cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x174880: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x174880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x174884: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x174884u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x174888: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x174888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x17488c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x17488cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x174890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174894: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x174894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x174898: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x174898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x17489c: 0x805d118  j           func_174460
    ctx->pc = 0x17489Cu;
    ctx->pc = 0x1748A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17489Cu;
    // 0x1748a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x1748A4u;
}
