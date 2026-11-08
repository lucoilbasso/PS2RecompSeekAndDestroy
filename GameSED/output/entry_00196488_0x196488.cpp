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

// Function: entry_00196488
// Address: 0x196488 - 0x1964a8
void entry_00196488_0x196488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196488_0x196488");
#endif

    ctx->pc = 0x196488u;

    // 0x196488: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x196488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19648c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x19648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x196490: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196490u;
    {
        const bool branch_taken_0x196490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x196490) {
            ctx->pc = 0x196494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196490u;
            // 0x196494: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1964A8u;
            return;
        }
    }
    ctx->pc = 0x196498u;
    // 0x196498: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x196498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x19649c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19649Cu;
    {
        const bool branch_taken_0x19649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19649Cu;
        // 0x1964a0: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19649c) {
            ctx->pc = 0x1964C0u;
            return;
        }
    }
    ctx->pc = 0x1964A4u;
    // 0x1964a4: 0x0  nop
    ctx->pc = 0x1964a4u;
    // NOP
    ctx->pc = 0x1964a8u;
}
