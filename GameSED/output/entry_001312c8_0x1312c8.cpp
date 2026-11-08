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

// Function: entry_001312c8
// Address: 0x1312c8 - 0x1312f0
void entry_001312c8_0x1312c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001312c8_0x1312c8");
#endif

    ctx->pc = 0x1312c8u;

    // 0x1312c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1312c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1312cc: 0x54e20008  bnel        $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1312CCu;
    {
        const bool branch_taken_0x1312cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1312cc) {
            ctx->pc = 0x1312D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1312CCu;
            // 0x1312d0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1312F0u;
            return;
        }
    }
    ctx->pc = 0x1312D4u;
    // 0x1312d4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1312d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1312d8: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x1312d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1312dc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1312dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1312e0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1312e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1312e4: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x1312e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1312e8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1312e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1312ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1312ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x1312f0u;
}
