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

// Function: entry_001552e8
// Address: 0x1552e8 - 0x155300
void entry_001552e8_0x1552e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001552e8_0x1552e8");
#endif

    ctx->pc = 0x1552e8u;

    // 0x1552e8: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x1552e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
    // 0x1552ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1552ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1552f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1552F0u;
    {
        const bool branch_taken_0x1552f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F0u;
        // 0x1552f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552f0) {
            ctx->pc = 0x155300u;
            return;
        }
    }
    ctx->pc = 0x1552F8u;
    // 0x1552f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1552F8u;
    {
        const bool branch_taken_0x1552f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F8u;
        // 0x1552fc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552f8) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x155300u;
}
