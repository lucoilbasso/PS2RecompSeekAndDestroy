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

// Function: entry_0018f288
// Address: 0x18f288 - 0x18f2a8
void entry_0018f288_0x18f288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f288_0x18f288");
#endif

    ctx->pc = 0x18f288u;

    // 0x18f288: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18f288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18f28c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F28Cu;
    {
        const bool branch_taken_0x18f28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f28c) {
            ctx->pc = 0x18F290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F28Cu;
            // 0x18f290: 0x95020008  lhu         $v0, 0x8($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F2A8u;
            return;
        }
    }
    ctx->pc = 0x18F294u;
    // 0x18f294: 0xdd020028  ld          $v0, 0x28($t0)
    ctx->pc = 0x18f294u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x18f298: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18f298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18f29c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18f2a0: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x18f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x18f2a4: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x18f2a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    ctx->pc = 0x18f2a8u;
}
