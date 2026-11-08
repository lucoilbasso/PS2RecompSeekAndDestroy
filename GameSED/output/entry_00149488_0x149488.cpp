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

// Function: entry_00149488
// Address: 0x149488 - 0x1494a4
void entry_00149488_0x149488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149488_0x149488");
#endif

    ctx->pc = 0x149488u;

    // 0x149488: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x149488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14948c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x14948cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x149490: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x149490u;
    {
        const bool branch_taken_0x149490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149490) {
            ctx->pc = 0x149494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149490u;
            // 0x149494: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1494A4u;
            return;
        }
    }
    ctx->pc = 0x149498u;
    // 0x149498: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x149498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x14949c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x14949cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1494a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1494a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1494a4u;
}
