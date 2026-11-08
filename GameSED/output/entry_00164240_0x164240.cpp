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

// Function: entry_00164240
// Address: 0x164240 - 0x164258
void entry_00164240_0x164240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164240_0x164240");
#endif

    ctx->pc = 0x164240u;

    // 0x164240: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x164240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164244: 0x442007f  bltzl       $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x164244u;
    {
        const bool branch_taken_0x164244 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x164244) {
            ctx->pc = 0x164248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164244u;
            // 0x164248: 0xaea21aa4  sw          $v0, 0x1AA4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 6820), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164444u;
            return;
        }
    }
    ctx->pc = 0x16424Cu;
    // 0x16424c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x16424Cu;
    {
        const bool branch_taken_0x16424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16424Cu;
        // 0x164250: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16424c) {
            ctx->pc = 0x164448u;
            return;
        }
    }
    ctx->pc = 0x164254u;
    // 0x164254: 0x0  nop
    ctx->pc = 0x164254u;
    // NOP
    ctx->pc = 0x164258u;
}
