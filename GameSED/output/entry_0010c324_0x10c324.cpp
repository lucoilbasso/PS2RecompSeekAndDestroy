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

// Function: entry_0010c324
// Address: 0x10c324 - 0x10c334
void entry_0010c324_0x10c324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c324_0x10c324");
#endif

    ctx->pc = 0x10c324u;

    // 0x10c324: 0x94e20008  lhu         $v0, 0x8($a3)
    ctx->pc = 0x10c324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10c328: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x10c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x10c32c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C32Cu;
    {
        const bool branch_taken_0x10c32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c32c) {
            ctx->pc = 0x10C330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C32Cu;
            // 0x10c330: 0x8d020010  lw          $v0, 0x10($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C350u;
            return;
        }
    }
    ctx->pc = 0x10C334u;
}
