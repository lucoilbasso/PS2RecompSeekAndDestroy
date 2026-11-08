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

// Function: entry_001bc964
// Address: 0x1bc964 - 0x1bc978
void entry_001bc964_0x1bc964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc964_0x1bc964");
#endif

    ctx->pc = 0x1bc964u;

    // 0x1bc964: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x1bc964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bc968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC968u;
    {
        const bool branch_taken_0x1bc968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC968u;
        // 0x1bc96c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc968) {
            ctx->pc = 0x1BC978u;
            return;
        }
    }
    ctx->pc = 0x1BC970u;
    // 0x1bc970: 0x5140ffb9  beql        $t2, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1BC970u;
    {
        const bool branch_taken_0x1bc970 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc970) {
            ctx->pc = 0x1BC974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC970u;
            // 0x1bc974: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
            SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC858u;
            return;
        }
    }
    ctx->pc = 0x1BC978u;
}
