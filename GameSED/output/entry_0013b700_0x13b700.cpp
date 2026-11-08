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

// Function: entry_0013b700
// Address: 0x13b700 - 0x13b718
void entry_0013b700_0x13b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b700_0x13b700");
#endif

    ctx->pc = 0x13b700u;

    // 0x13b700: 0x8fbe0004  lw          $fp, 0x4($sp)
    ctx->pc = 0x13b700u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13b704: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13b704u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b708: 0x13c0007e  beqz        $fp, . + 4 + (0x7E << 2)
    ctx->pc = 0x13B708u;
    {
        const bool branch_taken_0x13b708 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B708u;
        // 0x13b70c: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b708) {
            ctx->pc = 0x13B904u;
            return;
        }
    }
    ctx->pc = 0x13B710u;
    // 0x13b710: 0x3c09ffef  lui         $t1, 0xFFEF
    ctx->pc = 0x13b710u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65519 << 16));
    // 0x13b714: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x13b714u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x13b718u;
}
