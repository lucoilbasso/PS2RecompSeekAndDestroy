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

// Function: entry_00127b20
// Address: 0x127b20 - 0x127b40
void entry_00127b20_0x127b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127b20_0x127b20");
#endif

    ctx->pc = 0x127b20u;

    // 0x127b20: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x127b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x127b24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127b28: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x127b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x127b2c: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x127b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x127b30: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x127b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x127b34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x127B34u;
    {
        const bool branch_taken_0x127b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127B34u;
        // 0x127b38: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b34) {
            ctx->pc = 0x127B90u;
            return;
        }
    }
    ctx->pc = 0x127B3Cu;
    // 0x127b3c: 0x0  nop
    ctx->pc = 0x127b3cu;
    // NOP
    ctx->pc = 0x127b40u;
}
