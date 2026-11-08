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

// Function: entry_00175c8c
// Address: 0x175c8c - 0x175ca8
void entry_00175c8c_0x175c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175c8c_0x175c8c");
#endif

    ctx->pc = 0x175c8cu;

    // 0x175c8c: 0x8d4b0054  lw          $t3, 0x54($t2)
    ctx->pc = 0x175c8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x175c90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x175c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x175c94: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x175c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x175c98: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x175c98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x175c9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x175C9Cu;
    {
        const bool branch_taken_0x175c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C9Cu;
        // 0x175ca0: 0xad420058  sw          $v0, 0x58($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c9c) {
            ctx->pc = 0x175CB4u;
            return;
        }
    }
    ctx->pc = 0x175CA4u;
    // 0x175ca4: 0x0  nop
    ctx->pc = 0x175ca4u;
    // NOP
    ctx->pc = 0x175ca8u;
}
