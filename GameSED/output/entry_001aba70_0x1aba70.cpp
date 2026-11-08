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

// Function: entry_001aba70
// Address: 0x1aba70 - 0x1aba88
void entry_001aba70_0x1aba70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba70_0x1aba70");
#endif

    ctx->pc = 0x1aba70u;

    // 0x1aba70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aba70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba74: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x1aba74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x1aba78: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1aba78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aba7c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1ABA7Cu;
    {
        const bool branch_taken_0x1aba7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA7Cu;
        // 0x1aba80: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba7c) {
            ctx->pc = 0x1ABAACu;
            return;
        }
    }
    ctx->pc = 0x1ABA84u;
    // 0x1aba84: 0x2513021  addu        $a2, $s2, $s1
    ctx->pc = 0x1aba84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->pc = 0x1aba88u;
}
