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

// Function: entry_0010bb30
// Address: 0x10bb30 - 0x10bb78
void entry_0010bb30_0x10bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb30_0x10bb30");
#endif

    ctx->pc = 0x10bb30u;

    // 0x10bb30: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10bb34: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10bb38: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x10bb3c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10bb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10bb40: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x10bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x10bb44: 0x8e650094  lw          $a1, 0x94($s3)
    ctx->pc = 0x10bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x10bb48: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x10bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x10bb4c: 0x8c94015c  lw          $s4, 0x15C($a0)
    ctx->pc = 0x10bb4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
    // 0x10bb50: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BB50u;
    {
        const bool branch_taken_0x10bb50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB50u;
        // 0x10bb54: 0x30550001  andi        $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb50) {
            ctx->pc = 0x10BB78u;
            return;
        }
    }
    ctx->pc = 0x10BB58u;
    // 0x10bb58: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x10bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x10bb5c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x10bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10bb60: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x10bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x10bb64: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x10bb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x10bb68: 0x53c821  addu        $t9, $v0, $s3
    ctx->pc = 0x10bb68u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10bb6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10BB6Cu;
    {
        const bool branch_taken_0x10bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB6Cu;
        // 0x10bb70: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb6c) {
            ctx->pc = 0x10BBB0u;
            return;
        }
    }
    ctx->pc = 0x10BB74u;
    // 0x10bb74: 0x0  nop
    ctx->pc = 0x10bb74u;
    // NOP
    ctx->pc = 0x10bb78u;
}
