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

// Function: entry_00135fe8
// Address: 0x135fe8 - 0x136000
void entry_00135fe8_0x135fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135fe8_0x135fe8");
#endif

    ctx->pc = 0x135fe8u;

    // 0x135fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135fec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x135fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x135ff0: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x135ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x135ff4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x135ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x135ff8: 0x1840006d  blez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x135FF8u;
    {
        const bool branch_taken_0x135ff8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x135FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FF8u;
        // 0x135ffc: 0x8c700040  lw          $s0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ff8) {
            ctx->pc = 0x1361B0u;
            return;
        }
    }
    ctx->pc = 0x136000u;
}
