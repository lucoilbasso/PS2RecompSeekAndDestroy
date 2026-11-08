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

// Function: entry_001494a4
// Address: 0x1494a4 - 0x1494c0
void entry_001494a4_0x1494a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001494a4_0x1494a4");
#endif

    ctx->pc = 0x1494a4u;

    // 0x1494a4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1494a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1494a8: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1494a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1494ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1494ACu;
    {
        const bool branch_taken_0x1494ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1494ac) {
            ctx->pc = 0x1494B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1494ACu;
            // 0x1494b0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1494C0u;
            return;
        }
    }
    ctx->pc = 0x1494B4u;
    // 0x1494b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1494b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1494b8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x1494b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x1494bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1494bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x1494c0u;
}
