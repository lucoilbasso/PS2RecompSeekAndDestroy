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

// Function: entry_001d5830
// Address: 0x1d5830 - 0x1d584c
void entry_001d5830_0x1d5830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5830_0x1d5830");
#endif

    ctx->pc = 0x1d5830u;

label_1d5830:
    // 0x1d5830: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d5830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d5834: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x1d5834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1d5838: 0x0  nop
    ctx->pc = 0x1d5838u;
    // NOP
    // 0x1d583c: 0x0  nop
    ctx->pc = 0x1d583cu;
    // NOP
    // 0x1d5840: 0x0  nop
    ctx->pc = 0x1d5840u;
    // NOP
    // 0x1d5844: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5844u;
    {
        const bool branch_taken_0x1d5844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5844) {
            ctx->pc = 0x1D5848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5844u;
            // 0x1d5848: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5830;
        }
    }
    ctx->pc = 0x1D584Cu;
}
