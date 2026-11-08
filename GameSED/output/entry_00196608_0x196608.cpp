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

// Function: entry_00196608
// Address: 0x196608 - 0x196628
void entry_00196608_0x196608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196608_0x196608");
#endif

    ctx->pc = 0x196608u;

    // 0x196608: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x196608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x19660c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19660Cu;
    {
        const bool branch_taken_0x19660c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19660Cu;
        // 0x196610: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19660c) {
            ctx->pc = 0x196628u;
            return;
        }
    }
    ctx->pc = 0x196614u;
    // 0x196614: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x196614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x196618: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x196618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x19661c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19661Cu;
    {
        const bool branch_taken_0x19661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19661Cu;
        // 0x196620: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19661c) {
            ctx->pc = 0x19662Cu;
            return;
        }
    }
    ctx->pc = 0x196624u;
    // 0x196624: 0x0  nop
    ctx->pc = 0x196624u;
    // NOP
    ctx->pc = 0x196628u;
}
