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

// Function: entry_001958f8
// Address: 0x1958f8 - 0x195920
void entry_001958f8_0x1958f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001958f8_0x1958f8");
#endif

    ctx->pc = 0x1958f8u;

    // 0x1958f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1958F8u;
    {
        const bool branch_taken_0x1958f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1958FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F8u;
        // 0x1958fc: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958f8) {
            ctx->pc = 0x195920u;
            return;
        }
    }
    ctx->pc = 0x195900u;
    // 0x195900: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x195904: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x195904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x195908: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x195908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19590c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x19590cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x195910: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x195914: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x195914u;
    {
        const bool branch_taken_0x195914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195914u;
        // 0x195918: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195914) {
            ctx->pc = 0x195954u;
            return;
        }
    }
    ctx->pc = 0x19591Cu;
    // 0x19591c: 0x0  nop
    ctx->pc = 0x19591cu;
    // NOP
    ctx->pc = 0x195920u;
}
