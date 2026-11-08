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

// Function: entry_001cc890
// Address: 0x1cc890 - 0x1cc8b0
void entry_001cc890_0x1cc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc890_0x1cc890");
#endif

    ctx->pc = 0x1cc890u;

    // 0x1cc890: 0x2301024  and         $v0, $s1, $s0
    ctx->pc = 0x1cc890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x1cc894: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1cc894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cc898: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cc898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cc89c: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x1CC89Cu;
    {
        const bool branch_taken_0x1cc89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC89Cu;
        // 0x1cc8a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc89c) {
            ctx->pc = 0x1CC588u;
            return;
        }
    }
    ctx->pc = 0x1CC8A4u;
    // 0x1cc8a4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1cc8a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc8a8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1cc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1cc8ac: 0xae4d000c  sw          $t5, 0xC($s2)
    ctx->pc = 0x1cc8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 13));
    ctx->pc = 0x1cc8b0u;
}
