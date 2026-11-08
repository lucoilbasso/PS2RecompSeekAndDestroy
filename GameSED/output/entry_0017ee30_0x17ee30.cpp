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

// Function: entry_0017ee30
// Address: 0x17ee30 - 0x17ee80
void entry_0017ee30_0x17ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ee30_0x17ee30");
#endif

    ctx->pc = 0x17ee30u;

    // 0x17ee30: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x17ee30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17ee34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17ee34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee38: 0xae0a0038  sw          $t2, 0x38($s0)
    ctx->pc = 0x17ee38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 10));
    // 0x17ee3c: 0x94e20014  lhu         $v0, 0x14($a3)
    ctx->pc = 0x17ee3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x17ee40: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x17ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x17ee44: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x17ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x17ee48: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x17ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ee4c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x17ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x17ee50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17ee54: 0xaceb001c  sw          $t3, 0x1C($a3)
    ctx->pc = 0x17ee54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 11));
    // 0x17ee58: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x17ee58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x17ee5c: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x17ee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x17ee60: 0xae09003c  sw          $t1, 0x3C($s0)
    ctx->pc = 0x17ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 9));
    // 0x17ee64: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x17ee64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x17ee68: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17ee6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17ee70: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x17EE70u;
    {
        const bool branch_taken_0x17ee70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EE70u;
        // 0x17ee74: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee70) {
            ctx->pc = 0x17EEA4u;
            return;
        }
    }
    ctx->pc = 0x17EE78u;
    // 0x17ee78: 0x8ce5001c  lw          $a1, 0x1C($a3)
    ctx->pc = 0x17ee78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17ee7c: 0x0  nop
    ctx->pc = 0x17ee7cu;
    // NOP
    ctx->pc = 0x17ee80u;
}
