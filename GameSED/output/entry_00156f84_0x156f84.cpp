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

// Function: entry_00156f84
// Address: 0x156f84 - 0x156fa0
void entry_00156f84_0x156f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156f84_0x156f84");
#endif

    ctx->pc = 0x156f84u;

    // 0x156f84: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x156F84u;
    {
        const bool branch_taken_0x156f84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F84u;
        // 0x156f88: 0x36623000  ori         $v0, $s3, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)12288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f84) {
            ctx->pc = 0x156FA0u;
            return;
        }
    }
    ctx->pc = 0x156F8Cu;
    // 0x156f8c: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x156f8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156f90: 0xfe020270  sd          $v0, 0x270($s0)
    ctx->pc = 0x156f90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 624), GPR_U64(ctx, 2));
    // 0x156f94: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x156f94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x156f98: 0xfe030278  sd          $v1, 0x278($s0)
    ctx->pc = 0x156f98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 632), GPR_U64(ctx, 3));
    // 0x156f9c: 0x36623000  ori         $v0, $s3, 0x3000
    ctx->pc = 0x156f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)12288);
    ctx->pc = 0x156fa0u;
}
