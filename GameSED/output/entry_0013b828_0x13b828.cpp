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

// Function: entry_0013b828
// Address: 0x13b828 - 0x13b848
void entry_0013b828_0x13b828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b828_0x13b828");
#endif

    ctx->pc = 0x13b828u;

    // 0x13b828: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x13b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x13b82c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13b830: 0x481824  and         $v1, $v0, $t0
    ctx->pc = 0x13b830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x13b834: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x13b834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x13b838: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B838u;
    {
        const bool branch_taken_0x13b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b838) {
            ctx->pc = 0x13B83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B838u;
            // 0x13b83c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B848u;
            return;
        }
    }
    ctx->pc = 0x13B840u;
    // 0x13b840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13B840u;
    {
        const bool branch_taken_0x13b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B840u;
        // 0x13b844: 0x3202b  sltu        $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b840) {
            ctx->pc = 0x13B84Cu;
            return;
        }
    }
    ctx->pc = 0x13B848u;
}
