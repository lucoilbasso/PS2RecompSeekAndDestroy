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

// Function: entry_0015eaf8
// Address: 0x15eaf8 - 0x15eb10
void entry_0015eaf8_0x15eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eaf8_0x15eaf8");
#endif

    ctx->pc = 0x15eaf8u;

    // 0x15eaf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15eaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eafc: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x15eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x15eb00: 0x8c830204  lw          $v1, 0x204($a0)
    ctx->pc = 0x15eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x15eb04: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15EB04u;
    {
        const bool branch_taken_0x15eb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15eb04) {
            ctx->pc = 0x15EB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EB04u;
            // 0x15eb08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EB38u;
            return;
        }
    }
    ctx->pc = 0x15EB0Cu;
    // 0x15eb0c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15eb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15eb10u;
}
