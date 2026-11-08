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

// Function: entry_00137e54
// Address: 0x137e54 - 0x137e70
void entry_00137e54_0x137e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e54_0x137e54");
#endif

    ctx->pc = 0x137e54u;

    // 0x137e54: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x137e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x137e58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x137E58u;
    {
        const bool branch_taken_0x137e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E58u;
        // 0x137e5c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e58) {
            ctx->pc = 0x137E70u;
            return;
        }
    }
    ctx->pc = 0x137E60u;
    // 0x137e60: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x137e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1024)));
    // 0x137e64: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x137e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x137e68: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x137E68u;
    {
        const bool branch_taken_0x137e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137e68) {
            ctx->pc = 0x137E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E68u;
            // 0x137e6c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137DC8u;
            return;
        }
    }
    ctx->pc = 0x137E70u;
}
