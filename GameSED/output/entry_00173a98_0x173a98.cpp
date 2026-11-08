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

// Function: entry_00173a98
// Address: 0x173a98 - 0x173ab4
void entry_00173a98_0x173a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173a98_0x173a98");
#endif

    ctx->pc = 0x173a98u;

    // 0x173a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a9c: 0x34c84000  ori         $t0, $a2, 0x4000
    ctx->pc = 0x173a9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x173aa0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x173aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x173aa4: 0x5012  mflo        $t2
    ctx->pc = 0x173aa4u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x173aa8: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x173aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173aac: 0x806bb06  j           func_1AEC18
    ctx->pc = 0x173AACu;
    ctx->pc = 0x173AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AACu;
    // 0x173ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC18u;
    sceVif1PkRef_0x1aec18(rdram, ctx, runtime); return;
    ctx->pc = 0x173AB4u;
}
