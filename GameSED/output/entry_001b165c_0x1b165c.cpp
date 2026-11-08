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

// Function: entry_001b165c
// Address: 0x1b165c - 0x1b1690
void entry_001b165c_0x1b165c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b165c_0x1b165c");
#endif

    ctx->pc = 0x1b165cu;

    // 0x1b165c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b165cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1660: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b1660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1664: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b1664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1668: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1b1668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1b166c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b166cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1670: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b1674: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b1674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b167c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b167cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b1684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1688: 0x806df8e  j           func_1B7E38
    ctx->pc = 0x1B1688u;
    ctx->pc = 0x1B168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1688u;
    // 0x1b168c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E38u;
    isceSifSendCmd_0x1b7e38(rdram, ctx, runtime); return;
    ctx->pc = 0x1B1690u;
}
