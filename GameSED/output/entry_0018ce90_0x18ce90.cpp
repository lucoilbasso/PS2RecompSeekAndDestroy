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

// Function: entry_0018ce90
// Address: 0x18ce90 - 0x18ceac
void entry_0018ce90_0x18ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce90_0x18ce90");
#endif

    ctx->pc = 0x18ce90u;

    // 0x18ce90: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CE90u;
    {
        const bool branch_taken_0x18ce90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE90u;
        // 0x18ce94: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce90) {
            ctx->pc = 0x18CEACu;
            return;
        }
    }
    ctx->pc = 0x18CE98u;
    // 0x18ce98: 0x8c820208  lw          $v0, 0x208($a0)
    ctx->pc = 0x18ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x18ce9c: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x18ce9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cea0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cea4: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x18cea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x18cea8: 0x122180b  movn        $v1, $t1, $v0
    ctx->pc = 0x18cea8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    ctx->pc = 0x18ceacu;
}
