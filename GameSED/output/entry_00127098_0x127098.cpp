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

// Function: entry_00127098
// Address: 0x127098 - 0x1270ac
void entry_00127098_0x127098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127098_0x127098");
#endif

    ctx->pc = 0x127098u;

    // 0x127098: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127098u;
    {
        const bool branch_taken_0x127098 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127098u;
        // 0x12709c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127098) {
            ctx->pc = 0x1270B0u;
            return;
        }
    }
    ctx->pc = 0x1270A0u;
    // 0x1270a0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1270a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1270a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1270a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1270a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1270a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1270acu;
}
