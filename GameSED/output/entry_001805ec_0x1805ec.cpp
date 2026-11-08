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

// Function: entry_001805ec
// Address: 0x1805ec - 0x1805fc
void entry_001805ec_0x1805ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001805ec_0x1805ec");
#endif

    ctx->pc = 0x1805ecu;

    // 0x1805ec: 0x25ad0030  addiu       $t5, $t5, 0x30
    ctx->pc = 0x1805ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x1805f0: 0x179102a  slt         $v0, $t3, $t9
    ctx->pc = 0x1805f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1805f4: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x1805F4u;
    {
        const bool branch_taken_0x1805f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1805F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805F4u;
        // 0x1805f8: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1805f4) {
            ctx->pc = 0x1803E8u;
            return;
        }
    }
    ctx->pc = 0x1805FCu;
}
