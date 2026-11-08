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

// Function: entry_0013cbd8
// Address: 0x13cbd8 - 0x13cbec
void entry_0013cbd8_0x13cbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cbd8_0x13cbd8");
#endif

    ctx->pc = 0x13cbd8u;

    // 0x13cbd8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x13cbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x13cbdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CBDCu;
    {
        const bool branch_taken_0x13cbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CBDCu;
        // 0x13cbe0: 0x8f828a38  lw          $v0, -0x75C8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cbdc) {
            ctx->pc = 0x13CBECu;
            return;
        }
    }
    ctx->pc = 0x13CBE4u;
    // 0x13cbe4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x13cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x13cbe8: 0xaf828a38  sw          $v0, -0x75C8($gp)
    ctx->pc = 0x13cbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937144), GPR_U32(ctx, 2));
    ctx->pc = 0x13cbecu;
}
