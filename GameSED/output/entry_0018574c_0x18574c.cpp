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

// Function: entry_0018574c
// Address: 0x18574c - 0x185768
void entry_0018574c_0x18574c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018574c_0x18574c");
#endif

    ctx->pc = 0x18574cu;

    // 0x18574c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18574Cu;
    {
        const bool branch_taken_0x18574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18574Cu;
        // 0x185750: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18574c) {
            ctx->pc = 0x185768u;
            return;
        }
    }
    ctx->pc = 0x185754u;
    // 0x185754: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x185754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x185758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x185758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18575c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x185760: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x185760u;
    {
        const bool branch_taken_0x185760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185760u;
        // 0x185764: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185760) {
            ctx->pc = 0x185898u;
            return;
        }
    }
    ctx->pc = 0x185768u;
}
