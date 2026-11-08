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

// Function: entry_001d17f0
// Address: 0x1d17f0 - 0x1d1810
void entry_001d17f0_0x1d17f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d17f0_0x1d17f0");
#endif

    ctx->pc = 0x1d17f0u;

    // 0x1d17f0: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x1d17f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d17f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D17F4u;
    {
        const bool branch_taken_0x1d17f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17F4u;
        // 0x1d17f8: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17f4) {
            ctx->pc = 0x1D1810u;
            return;
        }
    }
    ctx->pc = 0x1D17FCu;
    // 0x1d17fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D17FCu;
    {
        const bool branch_taken_0x1d17fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D17FCu;
        // 0x1d1800: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d17fc) {
            ctx->pc = 0x1D1820u;
            return;
        }
    }
    ctx->pc = 0x1D1804u;
    // 0x1d1804: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1804u;
    {
        const bool branch_taken_0x1d1804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1804u;
        // 0x1d1808: 0x24fe0001  addiu       $fp, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1804) {
            ctx->pc = 0x1D1820u;
            return;
        }
    }
    ctx->pc = 0x1D180Cu;
    // 0x1d180c: 0x0  nop
    ctx->pc = 0x1d180cu;
    // NOP
    ctx->pc = 0x1d1810u;
}
