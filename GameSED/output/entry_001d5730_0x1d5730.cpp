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

// Function: entry_001d5730
// Address: 0x1d5730 - 0x1d5744
void entry_001d5730_0x1d5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5730_0x1d5730");
#endif

    ctx->pc = 0x1d5730u;

    // 0x1d5730: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5730u;
    {
        const bool branch_taken_0x1d5730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5730u;
        // 0x1d5734: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5730) {
            ctx->pc = 0x1D5744u;
            return;
        }
    }
    ctx->pc = 0x1D5738u;
    // 0x1d5738: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1d5738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1d573c: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x1d573cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1d5740: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1d5740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x1d5744u;
}
