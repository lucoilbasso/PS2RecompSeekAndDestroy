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

// Function: entry_00140ff0
// Address: 0x140ff0 - 0x141008
void entry_00140ff0_0x140ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140ff0_0x140ff0");
#endif

    ctx->pc = 0x140ff0u;

    // 0x140ff0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x140ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x140ff4: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x140FF4u;
    {
        const bool branch_taken_0x140ff4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x140FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140FF4u;
        // 0x140ff8: 0x32830070  andi        $v1, $s4, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)112);
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ff4) {
            ctx->pc = 0x141058u;
            return;
        }
    }
    ctx->pc = 0x140FFCu;
    // 0x140ffc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x140FFCu;
    {
        const bool branch_taken_0x140ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ffc) {
            ctx->pc = 0x141060u;
            return;
        }
    }
    ctx->pc = 0x141004u;
    // 0x141004: 0x0  nop
    ctx->pc = 0x141004u;
    // NOP
    ctx->pc = 0x141008u;
}
