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

// Function: entry_0018fc7c
// Address: 0x18fc7c - 0x18fca8
void entry_0018fc7c_0x18fc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fc7c_0x18fc7c");
#endif

    ctx->pc = 0x18fc7cu;

    // 0x18fc7c: 0x2472d650  addiu       $s2, $v1, -0x29B0
    ctx->pc = 0x18fc7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x18fc80: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x18fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x18fc84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FC84u;
    {
        const bool branch_taken_0x18fc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC84u;
        // 0x18fc88: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc84) {
            ctx->pc = 0x18FCA8u;
            return;
        }
    }
    ctx->pc = 0x18FC8Cu;
    // 0x18fc8c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x18fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x18fc90: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x18fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fc94: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18fc98: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18fc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18fc9c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x18fc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18fca0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18FCA0u;
    {
        const bool branch_taken_0x18fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCA0u;
        // 0x18fca4: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fca0) {
            ctx->pc = 0x18FCDCu;
            return;
        }
    }
    ctx->pc = 0x18FCA8u;
}
