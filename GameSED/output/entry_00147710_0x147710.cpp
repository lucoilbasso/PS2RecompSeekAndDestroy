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

// Function: entry_00147710
// Address: 0x147710 - 0x147748
void entry_00147710_0x147710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147710_0x147710");
#endif

    ctx->pc = 0x147710u;

    // 0x147710: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x147710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x147714: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x147714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x147718: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x147718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14771c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x14771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x147720: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x147720u;
    {
        const bool branch_taken_0x147720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147720u;
        // 0x147724: 0x8c91015c  lw          $s1, 0x15C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147720) {
            ctx->pc = 0x147748u;
            return;
        }
    }
    ctx->pc = 0x147728u;
    // 0x147728: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x147728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x14772c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x147730: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x147730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x147734: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x147734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x147738: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x147738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14773c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14773Cu;
    {
        const bool branch_taken_0x14773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14773Cu;
        // 0x147740: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14773c) {
            ctx->pc = 0x14777Cu;
            return;
        }
    }
    ctx->pc = 0x147744u;
    // 0x147744: 0x0  nop
    ctx->pc = 0x147744u;
    // NOP
    ctx->pc = 0x147748u;
}
