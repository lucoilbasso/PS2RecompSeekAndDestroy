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

// Function: entry_00174cb8
// Address: 0x174cb8 - 0x174cd8
void entry_00174cb8_0x174cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174cb8_0x174cb8");
#endif

    ctx->pc = 0x174cb8u;

    // 0x174cb8: 0x2273021  addu        $a2, $s1, $a3
    ctx->pc = 0x174cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x174cbc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x174cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x174cc0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x174cc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x174cc4: 0xe9402a  slt         $t0, $a3, $t1
    ctx->pc = 0x174cc4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x174cc8: 0x144b0003  bne         $v0, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x174CC8u;
    {
        const bool branch_taken_0x174cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x174CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CC8u;
        // 0x174ccc: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cc8) {
            ctx->pc = 0x174CD8u;
            return;
        }
    }
    ctx->pc = 0x174CD0u;
    // 0x174cd0: 0xa0ca0000  sb          $t2, 0x0($a2)
    ctx->pc = 0x174cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x174cd4: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x174cd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174cd8u;
}
