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

// Function: $L15
// Address: 0x1d52cc - 0x1d52ec
void ps2__L15_0x1d52cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L15_0x1d52cc");
#endif

    ctx->pc = 0x1d52ccu;

label_1d52cc:
    // 0x1d52cc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1d52ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d52d0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1d52d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1d52d4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d52d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d52d8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1d52d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d52dc: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1d52dcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1d52e0: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D52E0u;
    {
        const bool branch_taken_0x1d52e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52E0u;
        // 0x1d52e4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52e0) {
            ctx->pc = 0x1D52CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d52cc;
        }
    }
    ctx->pc = 0x1D52E8u;
    // 0x1d52e8: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1d52e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d52ecu;
}
