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

// Function: caseD_18
// Address: 0x16a608 - 0x16a620
void caseD_18_0x16a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x16a608");
#endif

    ctx->pc = 0x16a608u;

    // 0x16a608: 0x8e250c10  lw          $a1, 0xC10($s1)
    ctx->pc = 0x16a608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
    // 0x16a60c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a610: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a614: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x16a618: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x16A618u;
    {
        const bool branch_taken_0x16a618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A618u;
        // 0x16a61c: 0x8e260c08  lw          $a2, 0xC08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a618) {
            ctx->pc = 0x16A7BCu;
            return;
        }
    }
    ctx->pc = 0x16A620u;
}
