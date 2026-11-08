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

// Function: entry_001d56f0
// Address: 0x1d56f0 - 0x1d5704
void entry_001d56f0_0x1d56f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d56f0_0x1d56f0");
#endif

    ctx->pc = 0x1d56f0u;

    // 0x1d56f0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1d56f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d56f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D56F4u;
    {
        const bool branch_taken_0x1d56f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56F4u;
        // 0x1d56f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56f4) {
            ctx->pc = 0x1D5704u;
            return;
        }
    }
    ctx->pc = 0x1D56FCu;
    // 0x1d56fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1d56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d5700: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1d5700u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->pc = 0x1d5704u;
}
