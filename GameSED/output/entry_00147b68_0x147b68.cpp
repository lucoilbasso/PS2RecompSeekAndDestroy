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

// Function: entry_00147b68
// Address: 0x147b68 - 0x147b98
void entry_00147b68_0x147b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147b68_0x147b68");
#endif

    ctx->pc = 0x147b68u;

    // 0x147b68: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x147b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x147b6c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x147b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x147b70: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x147b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x147b74: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x147b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x147b78: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x147b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x147b7c: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x147b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x147b80: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x147b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x147b84: 0x16060010  bne         $s0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x147B84u;
    {
        const bool branch_taken_0x147b84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x147B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147B84u;
        // 0x147b88: 0x8c560018  lw          $s6, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b84) {
            ctx->pc = 0x147BC8u;
            return;
        }
    }
    ctx->pc = 0x147B8Cu;
    // 0x147b8c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x147b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b90: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x147b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x147b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x147b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x147b98u;
}
