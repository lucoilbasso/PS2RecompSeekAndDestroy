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

// Function: entry_001d5704
// Address: 0x1d5704 - 0x1d571c
void entry_001d5704_0x1d5704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5704_0x1d5704");
#endif

    ctx->pc = 0x1d5704u;

    // 0x1d5704: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1d5704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d5708: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5708u;
    {
        const bool branch_taken_0x1d5708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5708u;
        // 0x1d570c: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5708) {
            ctx->pc = 0x1D571Cu;
            return;
        }
    }
    ctx->pc = 0x1D5710u;
    // 0x1d5710: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d5710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d5714: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x1d5714u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1d5718: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x1d5718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    ctx->pc = 0x1d571cu;
}
