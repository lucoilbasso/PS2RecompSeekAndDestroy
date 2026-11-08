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

// Function: entry_00191d6c
// Address: 0x191d6c - 0x191db0
void entry_00191d6c_0x191d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191d6c_0x191d6c");
#endif

    ctx->pc = 0x191d6cu;

    // 0x191d6c: 0xafb0002c  sw          $s0, 0x2C($sp)
    ctx->pc = 0x191d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    // 0x191d70: 0x8fb20024  lw          $s2, 0x24($sp)
    ctx->pc = 0x191d70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191d74: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x191d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x191d78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x191d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x191d7c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x191d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x191d80: 0x8ec30094  lw          $v1, 0x94($s6)
    ctx->pc = 0x191d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x191d84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x191d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x191D88u;
    {
        const bool branch_taken_0x191d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D88u;
        // 0x191d8c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d88) {
            ctx->pc = 0x191DB0u;
            return;
        }
    }
    ctx->pc = 0x191D90u;
    // 0x191d90: 0x8ec20098  lw          $v0, 0x98($s6)
    ctx->pc = 0x191d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
    // 0x191d94: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x191d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191d98: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x191d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x191d9c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x191d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x191da0: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x191da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x191da4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x191DA4u;
    {
        const bool branch_taken_0x191da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DA4u;
        // 0x191da8: 0xaec30098  sw          $v1, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191da4) {
            ctx->pc = 0x191DE4u;
            return;
        }
    }
    ctx->pc = 0x191DACu;
    // 0x191dac: 0x0  nop
    ctx->pc = 0x191dacu;
    // NOP
    ctx->pc = 0x191db0u;
}
