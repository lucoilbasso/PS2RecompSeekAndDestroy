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

// Function: entry_00113954
// Address: 0x113954 - 0x113978
void entry_00113954_0x113954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113954_0x113954");
#endif

    ctx->pc = 0x113954u;

label_113954:
    // 0x113954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113958: 0x0  nop
    ctx->pc = 0x113958u;
    // NOP
    // 0x11395c: 0x0  nop
    ctx->pc = 0x11395cu;
    // NOP
    // 0x113960: 0x0  nop
    ctx->pc = 0x113960u;
    // NOP
    // 0x113964: 0x0  nop
    ctx->pc = 0x113964u;
    // NOP
    // 0x113968: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x113968u;
    {
        const bool branch_taken_0x113968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113968) {
            ctx->pc = 0x11396Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113968u;
            // 0x11396c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113954;
        }
    }
    ctx->pc = 0x113970u;
    // 0x113970: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x113970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x113974: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x113974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x113978u;
}
