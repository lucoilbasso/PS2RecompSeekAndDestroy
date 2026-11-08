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

// Function: entry_0012ae60
// Address: 0x12ae60 - 0x12ae90
void entry_0012ae60_0x12ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ae60_0x12ae60");
#endif

    ctx->pc = 0x12ae60u;

    // 0x12ae60: 0x2474d650  addiu       $s4, $v1, -0x29B0
    ctx->pc = 0x12ae60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x12ae64: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x12ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x12ae68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12AE68u;
    {
        const bool branch_taken_0x12ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE68u;
        // 0x12ae6c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae68) {
            ctx->pc = 0x12AE90u;
            return;
        }
    }
    ctx->pc = 0x12AE70u;
    // 0x12ae70: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x12ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x12ae74: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ae78: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x12ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12ae7c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x12ae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12ae80: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x12ae80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x12ae84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12AE84u;
    {
        const bool branch_taken_0x12ae84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE84u;
        // 0x12ae88: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae84) {
            ctx->pc = 0x12AEC4u;
            return;
        }
    }
    ctx->pc = 0x12AE8Cu;
    // 0x12ae8c: 0x0  nop
    ctx->pc = 0x12ae8cu;
    // NOP
    ctx->pc = 0x12ae90u;
}
