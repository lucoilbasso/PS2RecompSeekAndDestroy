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

// Function: entry_00133608
// Address: 0x133608 - 0x133624
void entry_00133608_0x133608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133608_0x133608");
#endif

    ctx->pc = 0x133608u;

    // 0x133608: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x133608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x13360c: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x13360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x133610: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x133610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x133614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x133614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133618: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x133618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13361c: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x13361Cu;
    {
        const bool branch_taken_0x13361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x13361c) {
            ctx->pc = 0x133620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13361Cu;
            // 0x133620: 0x8c710230  lw          $s1, 0x230($v1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133624u;
            return;
        }
    }
    ctx->pc = 0x133624u;
}
