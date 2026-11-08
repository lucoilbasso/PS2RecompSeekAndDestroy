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

// Function: entry_001744c8
// Address: 0x1744c8 - 0x174514
void entry_001744c8_0x1744c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001744c8_0x1744c8");
#endif

    ctx->pc = 0x1744c8u;

    // 0x1744c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1744c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1744cc: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x1744ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1744d0: 0x94dfa  dsrl        $t1, $t1, 23
    ctx->pc = 0x1744d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 23);
    // 0x1744d4: 0x73efa  dsrl        $a3, $a3, 27
    ctx->pc = 0x1744d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 27);
    // 0x1744d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1744d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1744dc: 0x637ba  dsrl        $a2, $a2, 30
    ctx->pc = 0x1744dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 30);
    // 0x1744e0: 0x846ba  dsrl        $t0, $t0, 26
    ctx->pc = 0x1744e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 26);
    // 0x1744e4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1744e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1744e8: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x1744e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1744ec: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x1744ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x1744f0: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1744f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1744f4: 0xa537a  dsrl        $t2, $t2, 13
    ctx->pc = 0x1744f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 13);
    // 0x1744f8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1744f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1744fc: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x1744fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x174500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174504: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x174504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x174508: 0x483025  or          $a2, $v0, $t0
    ctx->pc = 0x174508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x17450c: 0x805d118  j           func_174460
    ctx->pc = 0x17450Cu;
    ctx->pc = 0x174510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17450Cu;
    // 0x174510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174460u;
    setGIFad_0x174460(rdram, ctx, runtime); return;
    ctx->pc = 0x174514u;
}
