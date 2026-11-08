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

// Function: entry_001cf490
// Address: 0x1cf490 - 0x1cf4b4
void entry_001cf490_0x1cf490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf490_0x1cf490");
#endif

    ctx->pc = 0x1cf490u;

    // 0x1cf490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf49c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf4a0: 0x8c460148  lw          $a2, 0x148($v0)
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x1cf4a4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF4A4u;
    {
        const bool branch_taken_0x1cf4a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4A4u;
        // 0x1cf4a8: 0x24040088  addiu       $a0, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4a4) {
            ctx->pc = 0x1CF4B4u;
            return;
        }
    }
    ctx->pc = 0x1CF4ACu;
    // 0x1cf4ac: 0x2446014c  addiu       $a2, $v0, 0x14C
    ctx->pc = 0x1cf4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    // 0x1cf4b0: 0xac460148  sw          $a2, 0x148($v0)
    ctx->pc = 0x1cf4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 6));
    ctx->pc = 0x1cf4b4u;
}
