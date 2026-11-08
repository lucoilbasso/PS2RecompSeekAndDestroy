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

// Function: entry_00190e20
// Address: 0x190e20 - 0x190e48
void entry_00190e20_0x190e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190e20_0x190e20");
#endif

    ctx->pc = 0x190e20u;

    // 0x190e20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190E20u;
    {
        const bool branch_taken_0x190e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E20u;
        // 0x190e24: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e20) {
            ctx->pc = 0x190E48u;
            return;
        }
    }
    ctx->pc = 0x190E28u;
    // 0x190e28: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x190e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x190e2c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x190e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190e30: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x190e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x190e34: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x190e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x190e38: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x190e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x190e3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x190E3Cu;
    {
        const bool branch_taken_0x190e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E3Cu;
        // 0x190e40: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e3c) {
            ctx->pc = 0x190E7Cu;
            return;
        }
    }
    ctx->pc = 0x190E44u;
    // 0x190e44: 0x0  nop
    ctx->pc = 0x190e44u;
    // NOP
    ctx->pc = 0x190e48u;
}
