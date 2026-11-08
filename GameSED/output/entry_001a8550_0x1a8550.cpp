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

// Function: entry_001a8550
// Address: 0x1a8550 - 0x1a8578
void entry_001a8550_0x1a8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8550_0x1a8550");
#endif

    ctx->pc = 0x1a8550u;

label_1a8550:
    // 0x1a8550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a8550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a8554: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a8554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a8558: 0x2c620060  sltiu       $v0, $v1, 0x60
    ctx->pc = 0x1a8558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x1a855c: 0x0  nop
    ctx->pc = 0x1a855cu;
    // NOP
    // 0x1a8560: 0x0  nop
    ctx->pc = 0x1a8560u;
    // NOP
    // 0x1a8564: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A8564u;
    {
        const bool branch_taken_0x1a8564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8564u;
        // 0x1a8568: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8564) {
            ctx->pc = 0x1A8550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8550;
        }
    }
    ctx->pc = 0x1A856Cu;
    // 0x1a856c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1a856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1a8570: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a8570u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8574: 0x2444fcb0  addiu       $a0, $v0, -0x350
    ctx->pc = 0x1a8574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    ctx->pc = 0x1a8578u;
}
