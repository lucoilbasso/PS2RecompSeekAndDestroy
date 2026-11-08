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

// Function: entry_001c711c
// Address: 0x1c711c - 0x1c7134
void entry_001c711c_0x1c711c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c711c_0x1c711c");
#endif

    ctx->pc = 0x1c711cu;

    // 0x1c711c: 0xfeb40000  sd          $s4, 0x0($s5)
    ctx->pc = 0x1c711cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 20));
    // 0x1c7120: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c7120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c7124: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x1c7124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1c7128: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x1c7128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1c712c: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C712Cu;
    {
        const bool branch_taken_0x1c712c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C712Cu;
        // 0x1c7130: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c712c) {
            ctx->pc = 0x1C70C0u;
            return;
        }
    }
    ctx->pc = 0x1C7134u;
}
