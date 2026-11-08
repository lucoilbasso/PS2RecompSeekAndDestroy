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

// Function: caseD_1e
// Address: 0x16a638 - 0x16a650
void caseD_1e_0x16a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1e_0x16a638");
#endif

    ctx->pc = 0x16a638u;

    // 0x16a638: 0x8e250c10  lw          $a1, 0xC10($s1)
    ctx->pc = 0x16a638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
    // 0x16a63c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a640: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a644: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a644u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x16a648: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x16A648u;
    {
        const bool branch_taken_0x16a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A648u;
        // 0x16a64c: 0x8e260c08  lw          $a2, 0xC08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a648) {
            ctx->pc = 0x16A7BCu;
            return;
        }
    }
    ctx->pc = 0x16A650u;
}
