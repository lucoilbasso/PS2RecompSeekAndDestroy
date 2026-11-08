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

// Function: CommandSePlay__9ApcSndDrvUiiii
// Address: 0x11dee8 - 0x11df28
void CommandSePlay__9ApcSndDrvUiiii_0x11dee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandSePlay__9ApcSndDrvUiiii_0x11dee8");
#endif

    ctx->pc = 0x11dee8u;

    // 0x11dee8: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x11dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x11deec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11deecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11def0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x11def0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x11def4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11def4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11def8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11def8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11defc: 0x8f898d10  lw          $t1, -0x72F0($gp)
    ctx->pc = 0x11defcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11df00: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x11df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11df04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11df08: 0x8c427000  lw          $v0, 0x7000($v0)
    ctx->pc = 0x11df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28672)));
    // 0x11df0c: 0x34aa4000  ori         $t2, $a1, 0x4000
    ctx->pc = 0x11df0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x11df10: 0x8d24003c  lw          $a0, 0x3C($t1)
    ctx->pc = 0x11df10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x11df14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11df18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11df18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11df1c: 0x142280a  movz        $a1, $t2, $v0
    ctx->pc = 0x11df1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 10));
    // 0x11df20: 0x805ecba  j           func_17B2E8
    ctx->pc = 0x11DF20u;
    ctx->pc = 0x11DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF20u;
    // 0x11df24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B2E8u;
    SePlay__7WcSeStdiiii_0x17b2e8(rdram, ctx, runtime); return;
    ctx->pc = 0x11DF28u;
}
