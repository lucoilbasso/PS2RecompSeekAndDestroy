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

// Function: entry_001b94b0
// Address: 0x1b94b0 - 0x1b94c8
void entry_001b94b0_0x1b94b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b94b0_0x1b94b0");
#endif

    ctx->pc = 0x1b94b0u;

    // 0x1b94b0: 0x90830065  lbu         $v1, 0x65($a0)
    ctx->pc = 0x1b94b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 101)));
    // 0x1b94b4: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x1b94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x1b94b8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B94B8u;
    {
        const bool branch_taken_0x1b94b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94B8u;
        // 0x1b94bc: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94b8) {
            ctx->pc = 0x1B9528u;
            return;
        }
    }
    ctx->pc = 0x1B94C0u;
    // 0x1b94c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B94C0u;
    {
        const bool branch_taken_0x1b94c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94C0u;
        // 0x1b94c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94c0) {
            ctx->pc = 0x1B9530u;
            return;
        }
    }
    ctx->pc = 0x1B94C8u;
}
