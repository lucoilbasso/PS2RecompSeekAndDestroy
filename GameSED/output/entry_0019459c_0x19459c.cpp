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

// Function: entry_0019459c
// Address: 0x19459c - 0x1945d0
void entry_0019459c_0x19459c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019459c_0x19459c");
#endif

    ctx->pc = 0x19459cu;

    // 0x19459c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19459cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1945a0: 0x2475d650  addiu       $s5, $v1, -0x29B0
    ctx->pc = 0x1945a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x1945a4: 0x8ea20094  lw          $v0, 0x94($s5)
    ctx->pc = 0x1945a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x1945a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1945A8u;
    {
        const bool branch_taken_0x1945a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945A8u;
        // 0x1945ac: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945a8) {
            ctx->pc = 0x1945D0u;
            return;
        }
    }
    ctx->pc = 0x1945B0u;
    // 0x1945b0: 0x8ea20098  lw          $v0, 0x98($s5)
    ctx->pc = 0x1945b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x1945b4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1945b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1945b8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1945b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1945bc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1945bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1945c0: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x1945c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1945c4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1945C4u;
    {
        const bool branch_taken_0x1945c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945C4u;
        // 0x1945c8: 0xaea30098  sw          $v1, 0x98($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945c4) {
            ctx->pc = 0x194604u;
            return;
        }
    }
    ctx->pc = 0x1945CCu;
    // 0x1945cc: 0x0  nop
    ctx->pc = 0x1945ccu;
    // NOP
    ctx->pc = 0x1945d0u;
}
