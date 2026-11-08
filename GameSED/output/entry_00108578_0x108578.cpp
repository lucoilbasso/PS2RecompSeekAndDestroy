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

// Function: entry_00108578
// Address: 0x108578 - 0x108598
void entry_00108578_0x108578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108578_0x108578");
#endif

    ctx->pc = 0x108578u;

    // 0x108578: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x108578u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10857c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x10857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x108580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108580u;
    {
        const bool branch_taken_0x108580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108580u;
        // 0x108584: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108580) {
            ctx->pc = 0x108598u;
            return;
        }
    }
    ctx->pc = 0x108588u;
    // 0x108588: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x108588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10858c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x108590: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108590u;
    {
        const bool branch_taken_0x108590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108590u;
        // 0x108594: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108590) {
            ctx->pc = 0x1085ACu;
            return;
        }
    }
    ctx->pc = 0x108598u;
}
