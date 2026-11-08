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

// Function: entry_00136d48
// Address: 0x136d48 - 0x136d60
void entry_00136d48_0x136d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d48_0x136d48");
#endif

    ctx->pc = 0x136d48u;

    // 0x136d48: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136D48u;
    {
        const bool branch_taken_0x136d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x136D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D48u;
        // 0x136d4c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d48) {
            ctx->pc = 0x136D60u;
            return;
        }
    }
    ctx->pc = 0x136D50u;
    // 0x136d50: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x136d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x136d54: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x136D54u;
    {
        const bool branch_taken_0x136d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D54u;
        // 0x136d58: 0x8c62b830  lw          $v0, -0x47D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d54) {
            ctx->pc = 0x136E08u;
            return;
        }
    }
    ctx->pc = 0x136D5Cu;
    // 0x136d5c: 0x0  nop
    ctx->pc = 0x136d5cu;
    // NOP
    ctx->pc = 0x136d60u;
}
