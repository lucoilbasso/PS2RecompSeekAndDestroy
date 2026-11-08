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

// Function: caseD_19
// Address: 0x16a620 - 0x16a638
void caseD_19_0x16a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x16a620");
#endif

    ctx->pc = 0x16a620u;

    // 0x16a620: 0x8e250c10  lw          $a1, 0xC10($s1)
    ctx->pc = 0x16a620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
    // 0x16a624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a628: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a62c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x16a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x16a630: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x16A630u;
    {
        const bool branch_taken_0x16a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A630u;
        // 0x16a634: 0x8e260c08  lw          $a2, 0xC08($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a630) {
            ctx->pc = 0x16A7BCu;
            return;
        }
    }
    ctx->pc = 0x16A638u;
}
