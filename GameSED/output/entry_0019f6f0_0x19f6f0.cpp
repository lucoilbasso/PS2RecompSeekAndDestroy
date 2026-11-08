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

// Function: entry_0019f6f0
// Address: 0x19f6f0 - 0x19f720
void entry_0019f6f0_0x19f6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f6f0_0x19f6f0");
#endif

    ctx->pc = 0x19f6f0u;

    // 0x19f6f0: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x19F6F0u;
    {
        const bool branch_taken_0x19f6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f6f0) {
            ctx->pc = 0x19F6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F6F0u;
            // 0x19f6f4: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F720u;
            return;
        }
    }
    ctx->pc = 0x19F6F8u;
    // 0x19f6f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x19f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19f6fc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x19f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x19f700: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x19f700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x19f704: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x19f704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x19f708: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x19f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19f70c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F70Cu;
    {
        const bool branch_taken_0x19f70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f70c) {
            ctx->pc = 0x19F710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F70Cu;
            // 0x19f710: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F72Cu;
            return;
        }
    }
    ctx->pc = 0x19F714u;
    // 0x19f714: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19F714u;
    {
        const bool branch_taken_0x19f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F714u;
        // 0x19f718: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f714) {
            ctx->pc = 0x19F72Cu;
            return;
        }
    }
    ctx->pc = 0x19F71Cu;
    // 0x19f71c: 0x0  nop
    ctx->pc = 0x19f71cu;
    // NOP
    ctx->pc = 0x19f720u;
}
